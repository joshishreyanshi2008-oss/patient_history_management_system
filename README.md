Patient Medical History Record Keeper
About the Project
The Patient Medical History Record Keeper is a simple console-based hospital management project developed using C++.

The main purpose of this project is to store and manage the medical visit history of patients.

Whenever a patient visits a hospital, some important details need to be recorded, such as the visit date, diagnosis (health problem), prescribed medicines, and consultation fee.

This program helps maintain these records in an organized way. It also allows the user to add new visits, view the patient's complete medical history, find the most frequent diagnosis, and calculate the total consultation fees paid.

The records are saved in text files so that previous information is not lost when the program is closed.

Problem Statement
In hospitals, maintaining the medical history of patients is important. Keeping track of previous visits, diagnoses, prescribed medicines, and consultation fees can become difficult when records are not properly organized.

This project provides a simple solution by creating a C++ console application that stores patient visit details and allows users to retrieve and analyze the saved medical history.

Project Objectives
The main objectives of this project are:

To store patient visit details using C++ structures.
To maintain multiple visit records using an array of structures.
To save new visit records in a file without deleting previous records.
To read and display the complete medical history of a patient.
To find the most frequently occurring diagnosis.
To calculate the total consultation fees paid by a patient.
To handle missing files and incorrectly formatted records.
Key Features
Store Visit Details: Records the visit date, diagnosis code, prescribed medicines, and consultation fee.

Add New Visits: Allows new medical visits to be added without removing previously saved records.

View Medical History: Reads the saved records from a file and displays the complete visit history in a formatted table.

Find Most Frequent Diagnosis: Checks all recorded visits and identifies the diagnosis that appears most frequently.

Calculate Total Fees: Calculates the total consultation fees paid across all recorded visits.

Error Handling: Handles situations such as missing files and incorrectly formatted records without terminating the program unexpectedly.

OOPS Concepts Used
This project focuses on understanding and implementing the following C++ concepts:

Structures: Used to store related information about dates and individual visits.
Classes and Objects: Used to organize patient information and medical history operations.
Array of Structures: Used to manage multiple patient visit records.
File Handling: Used to save and retrieve medical history records from text files.
Exception Handling: Used to handle errors and unexpected situations.
I/O Formatting: Used to display records in a clear and organized format.
Suggested Classes and Structures
Component	Purpose
Date	Stores the day, month, and year of a visit.
Visit	Stores visit date, diagnosis, medicines, and consultation fee.
Patient	Represents a patient and maintains patient-related information.
HistoryManager	Manages saving, reading, and processing medical history records.
Technologies Used
Programming Language: C++
Compiler: GCC / G++
Code Editor: Visual Studio Code
Version Control: Git and GitHub
Data Storage: Text Files
How the Program Works
The program will work through a console-based interface.

The user enters the required patient visit details.
The program stores the visit information.
New visit records are added to the existing history file.
The user can view the complete medical history.
The program can calculate the most frequent diagnosis and total consultation fees.
The saved records remain available for future use.
Expected Output
The program is expected to display:

Patient medical history.
Visit dates and diagnosis details.
Prescribed medicines and consultation fees.
Most frequent diagnosis.
Total consultation fees paid.
Learning Outcomes
Through this project, I aim to understand and improve my knowledge of:

C++ programming.
Object-Oriented Programming concepts.
Structures, classes, and objects.
Arrays and data management.
File handling and data storage.
Exception handling.
Writing simple and organized programs.
Project Status
Currently in Development.

The project is being developed step by step. Features and documentation will be updated as the implementation progresses.

Author
Developed as an academic C++ OOPS project.
