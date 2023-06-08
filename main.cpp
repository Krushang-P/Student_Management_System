#include <iostream>
#include "StudentList.h"

int main() {
    // Create a classroom
    Classroom classroom("Class A");

    // Add students
    classroom.addStudent("John", 1);
    classroom.addStudent("Alice", 2);
    classroom.addStudent("Bob", 3);

    // Print the list of students
    classroom.printStudents();

    return 0;
}
