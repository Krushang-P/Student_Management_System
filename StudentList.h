#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <string>

// Student structure
struct Student {
    std::string name;
    int rollNumber;
    Student* next;
};

// Linked list class for students
class StudentList {
private:
    Student* head;

public:
    // Constructor
    StudentList();

    // Destructor
    ~StudentList();

    // Add a student to the list
    void addStudent(const std::string& name, int rollNumber);

    // Print the list of students
    void printStudents();
};

// Classroom class
class Classroom {
private:
    std::string className;
    StudentList students;

public:
    // Constructor
    Classroom(const std::string& name);

    // Add a student to the classroom
    void addStudent(const std::string& name, int rollNumber);

    // Print the list of students in the classroom
    void printStudents();
};

#endif // STUDENTLIST_H
