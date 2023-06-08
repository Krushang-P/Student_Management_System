#include <iostream>
#include "StudentList.h"

// Function to run the test cases
void runTestCases() {
    // Test case 1: Add Students
    {
        Classroom classroom("Class A");
        classroom.addStudent("John", 1);
        classroom.addStudent("Alice", 2);
        classroom.addStudent("Bob", 3);
        classroom.printStudents();
        // Expected output:
        // Classroom: Class A
        // -------------------------
        // Name: Bob, Roll Number: 3
        // Name: Alice, Roll Number: 2
        // Name: John, Roll Number: 1
    }

    // Test case 2: Print Students - Empty Classroom
    {
        Classroom classroom("Class B");
        classroom.printStudents();
        // Expected output:
        // Classroom: Class B
        // -------------------------
        // (No students)
    }

    // Test case 3: Add Multiple Students
    {
        Classroom classroom("Class C");
        for (int i = 1; i <= 10; ++i) {
            std::string name = "Student " + std::to_string(i);
            classroom.addStudent(name, i);
        }
        classroom.printStudents();
        // Expected output:
        // Classroom: Class C
        // -------------------------
        // Name: Student 10, Roll Number: 10
        // Name: Student 9, Roll Number: 9
        // Name: Student 8, Roll Number: 8
        // Name: Student 7, Roll Number: 7
        // Name: Student 6, Roll Number: 6
        // Name: Student 5, Roll Number: 5
        // Name: Student 4, Roll Number: 4
        // Name: Student 3, Roll Number: 3
        // Name: Student 2, Roll Number: 2
        // Name: Student 1, Roll Number: 1
    }
}

int main() {
    runTestCases();
    return 0;
}
