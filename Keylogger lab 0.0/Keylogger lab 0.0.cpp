
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>

struct KeyboardEvent
{
    std::string key;
    std::chrono::system_clock::time_point timestamp;
    int sessionID;
};

std::string formatTimestamp(
    const std::chrono::system_clock::time_point& timestamp)
{
    std::time_t time = std::chrono::system_clock::to_time_t(timestamp);

    std::tm localTime{};
    localtime_s(&localTime, &time);

    std::ostringstream output;

    output << std::put_time(&localTime, "%Y-%m-%d %H:%M:%S");

    return output.str();
}

void recordEvent(
    std::vector<KeyboardEvent>& events,
    const std::string& eventText,
    int sessionID)
{
    KeyboardEvent event;

    event.key = eventText;
    event.timestamp = std::chrono::system_clock::now();
    event.sessionID = sessionID;

    events.push_back(event);
}

void saveEvents(const std::vector<KeyboardEvent>& events)
{
    std::ofstream logfile("research_events.txt");

    if (!logfile.is_open())
    {
        std::cerr << "Unable to open research log.\n";
        return;
    }

    for (const KeyboardEvent& event : events)
    {
        logfile
            << "Session: " << event.sessionID
            << " | Time: " << formatTimestamp(event.timestamp)
            << " | Event: " << event.key
            << '\n';
    }

    std::cout << "Research events saved successfully.\n";
}

int main()
{
    std::vector<KeyboardEvent> events;

    const int sessionID = 1;

    std::string input;

    std::cout << "Synthetic Keyboard Event Simulator\n";
    std::cout << "Enter an event description or type 'quit'.\n";

    while (true)
    {
        std::cout << "\nEvent: ";
        std::getline(std::cin, input);

        if (input == "quit")
        {
            break;
        }

        if (input.empty())
        {
            std::cout << "Please enter an event description.\n";
            continue;
        }

        recordEvent(events, input, sessionID);
    }

    saveEvents(events);

    std::cout << "\nTotal simulated events: "
              << events.size() << '\n';

    return 0;
}
