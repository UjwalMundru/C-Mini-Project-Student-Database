# C-Mini-Project-Student-Database

1. PROJECT DESCRIPTION
----------------------
The Student Database Management System is a menu-driven C program used to manage student records. It supports adding, displaying, searching, deleting, and editing student details. It also supports saving records to a file and loading them when the program starts.

2. TECHNOLOGIES USED
--------------------
- Programming Language: C
- Data Structure: Singly Linked List (SLL)
- Memory Management: Dynamic Memory Allocation (malloc and free)
- File Handling: fopen, fscanf, fprintf, fclose
- Compiler: GCC
- Build Tool: Makefile

3. STUDENT DETAILS
------------------
Each student record contains:
- Student ID
- Student Name
- Date of Birth
- Matriculation Percentage
- Intermediate/Diploma Percentage
- Graduation Percentage
- Contact Number
- Email Address

4. FEATURES
-----------
- Add a new student record.
- Prevent duplicate Student IDs.
- Display all student records.
- Search for a student using Student ID.
- Delete a student record.
- Edit student details.
- Save student records to a file.
- Load previously saved records when the program starts.
- Display records in reverse order without changing the linked list.

5. PROJECT FILES
----------------
student.h       - Structure definition and function declarations
main.c          - Main menu and program execution
add_record.c    - Adds a student record
print_record.c  - Displays student records
find_record.c   - Searches for a student
delete_record.c - Deletes a student record
edit_record.c   - Edits student details
reverse_record.c- Displays records in reverse order
save_record.c   - Saves and loads student records
Makefile        - Compiles the project
student.dat     - Stores saved student records

6. COMPILATION
--------------
Open a terminal in the project directory and execute: make

7. EXECUTION
------------
Run the application using:  ./dataBase

8. MENU OPTIONS
---------------
A/a - Add a student record
P/p - Print all student records
S/s - Save student records
D/d - Delete a student record
E/e - Edit a student record
F/f - Find a student record
R/r - Display records in reverse order
Q/q - Quit the application

9. DATA STORAGE
---------------
Student records are stored in the student.dat file when the Save option is selected. The program loads saved records during startup, allowing previously saved data to remain available after restarting the application.

10. CLEANING BUILD FILES
------------------------
To remove compiled object files and the executable, run:  make clean

