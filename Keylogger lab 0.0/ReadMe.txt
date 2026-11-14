# KeyloggerLab

**Version:** 0.1-preview  
**Language:** C++  
**Project Type:** Cybersecurity Research / Defensive Security

## Overview

KeyloggerLab is a C++ cybersecurity research project focused on understanding keyboard-event data structures, synthetic event simulation, event recording, timestamps, and defensive security analysis.

The project uses manually supplied or synthetic event descriptions. It does not monitor system-wide keyboard input, capture real keystrokes, or collect user activity.

The goal is to strengthen my C++ programming skills while exploring concepts relevant to cybersecurity research and defensive security.

## Current Features

- Keyboard event data structure using a custom `KeyboardEvent` struct.
- Event storage using `std::vector`.
- Timestamp generation using `std::chrono`.
- Session identification.
- Manual event input using `std::getline()`.
- File output using `std::ofstream`.
- Basic input validation.
- Timestamp formatting for readable research logs.

## Technologies and C++ Concepts

| Technology | Purpose |
|---|---|
| C++ | Primary programming language |
| STL Vector | Dynamic event storage |
| Chrono | Timestamp generation |
| File Streams | Research log output |
| Structs | Event data organization |
| References | Modifying shared vector data |
| Strings | Event descriptions and input handling |

## Project Goals

1. Develop a better understanding of C++ structures and memory management.
2. Practice organizing code into separate source and header files.
3. Implement synthetic event generation.
4. Record and analyze simulated event data.
5. Explore behavioral indicators associated with malicious keylogging.
6. Document defensive security observations.

## Planned Improvements

- [ ] Improve event validation.
- [ ] Separate declarations into header files.
- [ ] Implement synthetic event generation.
- [ ] Improve timestamp handling.
- [ ] Add multiple simulation sessions.
- [ ] Implement event frequency analysis.
- [ ] Calculate time differences between simulated events.
- [ ] Generate a research summary.
- [ ] Improve error handling.
- [ ] Expand defensive security documentation.

## Project Structure

```text
KeyloggerLab/
├── include/
├── src/
├── reports/
├── docs/
├── README.md
├── .gitignore
└── LICENSE
```

## Compilation

The project requires a C++17-compatible compiler.

Example using GCC:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o KeyloggerLab
```

Compilation instructions may need adjustment depending on the compiler and operating system.

## Scope and Safety

This project is intended for educational and defensive cybersecurity research.

It operates exclusively on manually supplied or synthetic event descriptions. It does not implement system-wide keyboard capture, background monitoring, credential collection, or covert surveillance.

## Development Status

This project is currently in its early development stage.

Version 0.1-preview focuses on establishing the foundational C++ components before implementing more advanced simulation and defensive analysis features.

## Author's Learning Objectives

This project is part of my ongoing development in C++, computer science, and cybersecurity.

The emphasis is on understanding the implementation rather than simply producing working code.
