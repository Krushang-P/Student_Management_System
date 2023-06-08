#include "StudentList.h"
#include <iostream>

// StudentList constructor
StudentList::StudentList() : head(nullptr) {}

// StudentList destructor
StudentList::~StudentList() {
    Student* current = head;
    while (current != nullptr) {
        Student* next = current->next;
        delete current;
        current = next;
    }
}

// Add a student to the list
void StudentList::addStudent(const std::string& name, int rollNumber) {
    Student* newStudent = new Student;
    newStudent->name = name;
    newStudent->rollNumber = rollNumber;
    newStudent->next = head;
    head = newStudent;
}

// Print the list of students
void StudentList::printStudents() {
    Student* current = head;
    while (current != nullptr) {
        std::cout << "Name: " << current->name << ", Roll Number: " << current->rollNumber << std::endl;
        current = current->next;
    }
}

// Classroom constructor
Classroom::Classroom(const std::string& name) : className(name) {}

// Add a student to the classroom
void Classroom::addStudent(const std::string& name, int rollNumber) {
    students.addStudent(name, rollNumber);
}

// Print the list of students in the classroom
void Classroom::printStudents() {
    std::cout << "Classroom: " << className << std::endl;
    std::cout << "-------------------------" << std::endl;
    students.printStudents();
}
