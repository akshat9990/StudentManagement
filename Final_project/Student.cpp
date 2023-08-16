#include "Student.h"
#include <iostream>

Student::Student(int studentId, const std::string& firstName, const std::string& lastName, int age, const std::string& course, const std::string& address, int marks)
    : studentId(studentId), firstName(firstName), lastName(lastName), age(age), course(course), address(address), marks(marks) {}

void Student::display() const {
    std::cout << "Student ID: " << studentId << ", Name: " << firstName << " " << lastName
              << ", Age: " << age << ", Course: " << course << ", Address: " << address
              << ", Marks: " << marks << std::endl;
}

int Student::getStudentId() const {
    return studentId;


}
int Student::getMarks() const {
    return marks;


}
void Student::setFirstName(const std::string& newFirstName) {
    firstName = newFirstName;
}

void Student::setLastName(const std::string& newLastName) {
    lastName = newLastName;
}

void Student::setAge(int newAge) {
   age=newAge;
}