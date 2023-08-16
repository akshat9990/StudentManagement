#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(int studentId, const std::string& firstName, const std::string& lastName, int age, const std::string& course, const std::string& address, int marks);

    void display() const;

    int getStudentId() const;

    int getMarks() const;

    void setFirstName(const std::string& newFirstName) ;

    void setLastName(const std::string& newLastName) ;

    void setAge(int newAge) ;
private:
    int studentId;
    std::string firstName;
    std::string lastName;
    int age;
    std::string course;
    std::string address;
    int marks;
};

#endif // STUDENT_H