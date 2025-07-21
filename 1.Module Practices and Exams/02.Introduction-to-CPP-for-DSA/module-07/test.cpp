#include <iostream>

class Student {
public:
    int roll;
    Student(int r) {
        roll = r;
    }
};

int main() {
    int n;
    std::cin >> n;

    // Create a dynamically allocated array of Student objects
    Student* students = new Student[n];
    for (int i = 0; i < n; ++i) {
        students[i] = Student(i + 1); // Initialize each object
    }

    // Print roll numbers to verify
    for (int i = 0; i < n; ++i) {
        std::cout << "Student roll number: " << students[i].roll << std::endl;
    }

    // Free dynamically allocated memory
    delete[] students;

    return 0;
}
