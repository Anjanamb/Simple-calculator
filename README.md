# Simple Calculator (C++ / Visual Studio)

> A basic calculator built in C++ using Visual Studio. It demonstrates fundamental arithmetic operations and is structured as a Windows desktop application.

---

## Table of Contents

- [Overview](#overview)  
- [Features](#features)  
- [Project Structure](#project-structure)  
- [Getting Started](#getting-started)  
- [Building & Running](#building--running)  
- [Usage](#usage)  
- [Enhancements](#enhancements)  
- [License](#license)  

---

## Overview

This repository contains a simple calculator application coded in C++ and developed using Microsoft Visual Studio. It serves as an educational demonstration of console or GUI-based arithmetic operations, compiled and run via `.sln` project files.

---

## Features

- Performs basic arithmetic: addition, subtraction, multiplication, and division.
- Developed using Visual Studio Solution and project files.
- Good starting point for learning C++ application structure.

---

## Project Structure
```
Simple-calculator/
├─ x64/Debug/ # Build outputs (debug binaries)
├─ LICENSE # MIT License file
├─ MyFirstApp.cpp # Main source file with calculator logic
├─ MyFirstApp.sln # Visual Studio Solution file
├─ MyFirstApp.vcxproj # Visual Studio Project file
├─ MyFirstApp.vcxproj.filters
├─ MyFirstApp.vcxproj.user
```


---

## Getting Started

1. **Clone the repository**:
    ```bash
    git clone https://github.com/Anjanamb/Simple-calculator.git
    cd Simple-calculator
    ```

2. **Open in Visual Studio**:
   - Launch the `.sln` file using Visual Studio.

---

## Building & Running

1. In Visual Studio, select **Debug** or **Release** configuration.
2. Build the project: **Build → Build Solution**.
3. Run the application using **Local Windows Debugger** or by executing the compiled binary in the `x64/Debug/` directory.

---

## Usage

- The calculator runs as a desktop app.
- Enter numbers and arithmetic operations via the invoked interface.
- The logic is straightforward and contained within `MyFirstApp.cpp`.

---

## Enhancements

Consider upgrading with features such as:

- A graphical user interface (e.g., using Qt or WinAPI).
- A more complex expression parser.
- Keyboard input handling.
- Input validation (e.g., handling division by zero).
- Unit tests for arithmetic logic.

---

## License

This project is licensed under the **MIT License**. See the `LICENSE` file for details.

---

Enjoy exploring C++ and Visual Studio with this simple calculator template!

