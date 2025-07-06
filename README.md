# Student Information Management System

A simple console-based Student Information Management System implemented in C++ using linked lists for dynamic data storage.

## Overview

This program allows users to manage student records through a menu-driven interface. It provides functionality to add, remove, search, and display student information using a singly linked list data structure.

## Features

- **Add Student**: Add new student records with name, roll number, CPI, and branch
- **Remove Student**: Remove student records by name
- **View All Students**: Display all student records in the system
- **Find Student**: Search for specific student information by name
- **Input Validation**: Basic error handling for invalid menu choices

## Student Information Structure

Each student record contains:
- **Name**: Student's full name (string)
- **Roll Number**: Unique student identifier (integer)
- **CPI**: Cumulative Performance Index/GPA (float)
- **Branch**: Academic department/branch (string)

## Technical Details

### Data Structures
- **Linked List**: Implements a singly linked list for dynamic memory allocation
- **Node Structure**: Contains student data and pointer to next node
- **Student Info Structure**: Stores individual student details

### Memory Management
- Uses dynamic memory allocation with `malloc()` for adding nodes
- Proper memory deallocation with `delete` when removing nodes
- Global head pointer for list management

## How to Use

### Compilation
```bash
g++ -o student_management student_management.cpp
```

### Running the Program
```bash
./student_management
```

### Menu Options
1. **Add Student** - Enter student details to add a new record
2. **Remove Student** - Remove a student by entering their name
3. **All Student Info** - Display all student records
4. **Find Student Info** - Search for a specific student by name
5. **Exit** - Terminate the program

### Sample Usage
```
----- STUDENT INFO MANAGEMENT -----

1 - ADD STUDENT: 
2 - REMOVE STUDENT: 
3 - All STUDENT INFO: 
4 - FIND STUDENT INFO: 
5 - EXIT: 
ENTER YOUR CHOICE ( 1-5 ): 1

ENTER NAME: John Doe
ENTER ROLL NO: 12345
ENTER CPI: 8.5
ENTER BRANCH: Computer Science

STUDENT ADDED!
```

## Code Structure

### Main Functions
- `main()`: Entry point of the program
- `user_interface()`: Displays menu and handles user input
- `add_student()`: Adds new student to the linked list
- `remove_student()`: Removes student from the linked list
- `all_student_info()`: Displays all student records
- `find_student_info()`: Searches for specific student

### Key Features
- **Input Buffer Management**: Handles input buffer clearing for string inputs
- **Error Handling**: Basic validation for menu choices
- **Case-Sensitive Search**: Student name matching is case-sensitive
- **Dynamic Memory**: Efficient memory usage with linked list implementation

## Requirements

- C++ compiler (g++, clang++, or similar)
- Standard C++ libraries:
  - `<iostream>`
  - `<string>`
  - `<limits>` (for input validation)

## Limitations

- Student names are case-sensitive for search and removal operations
- No data persistence (data is lost when program terminates)
- Basic error handling (could be enhanced)
- No duplicate roll number validation
- Single-threaded operation only

## Future Enhancements

- Add file I/O for data persistence
- Implement sorting functionality (by name, roll number, or CPI)
- Add data validation for roll numbers and CPI ranges
- Implement case-insensitive search
- Add edit/update student information feature
- Include more robust error handling

## License

This project is open source and available under standard educational use terms.

## Author

Created as a demonstration of basic data structures and C++ programming concepts.
