#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"
#include "Module.h"

int main() {
    std::vector<Student> students;
    std::vector<Module> modules;

    while (true) {
        std::cout << "1> Add Record" << std::endl;
        std::cout << "2> Update Record" << std::endl;
        std::cout << "3> Get any record" << std::endl;
        std::cout << "4> Get all record" << std::endl;
        std::cout << "5> Add Module" << std::endl;
        std::cout << "6> Get Any Module details" << std::endl;
        std::cout << "7> Get All Modules details" << std::endl;
        std::cout << "8> Update Module" << std::endl;
        std::cout << "9> Find Std Marks" << std::endl;
        std::cout << "0> Exit.." << std::endl;
        std::cout << "Enter your choice : ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // Add Record
                int studentId, age, marks;
                std::string firstName, lastName, course, address;
                std::cout << "Enter student ID: ";
                std::cin >> studentId;
                // Input for other fields
                std::cout << "Enter first name: ";
                std::cin >> firstName;
                std::cout << "Enter last name: ";
                std::cin >> lastName;
                std::cout << "Enter age: ";
                std::cin >> age;
                std::cout << "Enter course: ";
                std::cin >> course;
                std::cout << "Enter address: ";
                std::cin.ignore();
                std::getline(std::cin, address);
                std::cout << "Enter marks: ";
                std::cin >> marks;

                students.push_back(Student(studentId, firstName, lastName, age, course, address, marks));
                std::cout << "Student record added successfully." << std::endl;
                break;
            }
            case 2: {
    // Update Record
    int updateStudentId;
    std::cout << "Enter student ID to update: ";
    std::cin >> updateStudentId;
    auto iter = std::find_if(students.begin(), students.end(), [&updateStudentId](const Student& student) {
        return student.getStudentId() == updateStudentId;
    });
    if (iter != students.end()) {
        // Update student details
        int fieldChoice;
        std::cout << "Choose a field to update:" << std::endl;
        std::cout << "1. First Name" << std::endl;
        std::cout << "2. Last Name" << std::endl;
        std::cout << "3. Age" << std::endl;
        // ... Add more field options here
        
        std::cin >> fieldChoice;
        
        switch (fieldChoice) {
            case 1: {
                std::string newFirstName;
                std::cout << "Enter new first name: ";
                std::cin >> newFirstName;
                iter->setFirstName(newFirstName);
                break;
            }
            case 2: {
                std::string newLastName;
                std::cout << "Enter new last name: ";
                std::cin >> newLastName;
                iter->setLastName(newLastName);
                break;
            }
            case 3: {
                int newAge;
                std::cout << "Enter new age: ";
                std::cin >> newAge;
                iter->setAge(newAge);
                break;
            }
            // ... Add cases for more fields here
            default:
                std::cout << "Invalid field choice." << std::endl;
        }
        
        std::cout << "Student record updated successfully." << std::endl;
    } else {
        std::cout << "Student not found." << std::endl;
    }
  break;
    }
            case 3: {
                // Get any record
                int searchStudentId;
                std::cout << "Enter student ID to search: ";
                std::cin >> searchStudentId;
                auto iter = std::find_if(students.begin(), students.end(), [&searchStudentId](const Student& student) {
                    return student.getStudentId() == searchStudentId;
                });
                if (iter != students.end()) {
                    iter->display();
                } else {
                    std::cout << "Student not found." << std::endl;
                }
                break;
            }
            case 4: {
                // Get all record
                for (const Student& student : students) {
                    student.display();
                }
                break;
            }
            case 5: {
                // Add Module
                int moduleId, departmentId, classNumber;
                std::string moduleName, department;
                std::cout << "Enter module ID: ";
                std::cin >> moduleId;
                // Input for other fields
                std::cout << "Enter module name: ";
                std::cin.ignore();
                std::getline(std::cin, moduleName);
                std::cout << "Enter department ID: ";
                std::cin >> departmentId;
                std::cout << "Enter department: ";
                std::cin.ignore();
                std::getline(std::cin, department);
                std::cout << "Enter class number: ";
                std::cin >> classNumber;

                modules.push_back(Module(moduleId, moduleName, departmentId, department, classNumber));
                std::cout << "Module added successfully." << std::endl;
                break;
            }
            case 6: {
                // Get Any Module details
                int searchModuleId;
                std::cout << "Enter module ID to search: ";
                std::cin >> searchModuleId;
                auto iter = std::find_if(modules.begin(), modules.end(), [&searchModuleId](const Module& module) {
                    return module.getModuleId() == searchModuleId;
                });
                if (iter != modules.end()) {
                    iter->display();
                } else {
                    std::cout << "Module not found." << std::endl;
                }
                break;
            }
            case 7: {
                // Get All Modules details
                for (const Module& module : modules) {
                    module.display();
                }
                break;
            }
            case 8: {
    // Update Module
    int updateModuleId;
    std::cout << "Enter module ID to update: ";
    std::cin >> updateModuleId;
    
    auto iter = std::find_if(modules.begin(), modules.end(), [&updateModuleId](const Module& module) {
        return module.getModuleId() == updateModuleId;
    });
    
    if (iter != modules.end()) {
        // Update module details
        int fieldChoice;
        std::cout << "Choose a field to update:" << std::endl;
        std::cout << "1. Module Name" << std::endl;
        std::cout << "2. Department ID" << std::endl;
        std::cout << "3. Department" << std::endl;
        std::cout << "4. Class Number" << std::endl;

        std::cin >> fieldChoice;

        switch (fieldChoice) {
            case 1: {
                std::string newModuleName;
                std::cout << "Enter new module name: ";
                std::cin.ignore();
                std::getline(std::cin, newModuleName);
                iter->setModuleName(newModuleName);
                break;
            }
            case 2: {
                int newDepartmentId;
                std::cout << "Enter new department ID: ";
                std::cin >> newDepartmentId;
                iter->setDepartmentId(newDepartmentId);
                break;
            }
            case 3: {
                std::string newDepartment;
                std::cout << "Enter new department: ";
                std::cin.ignore();
                std::getline(std::cin, newDepartment);
                iter->setDepartment(newDepartment);
                break;
            }
            case 4: {
                int newClassNumber;
                std::cout << "Enter new class number: ";
                std::cin >> newClassNumber;
                iter->setClassNumber(newClassNumber);
                break;
            }
            default:
                std::cout << "Invalid field choice." << std::endl;
        }
        
        std::cout << "Module details updated successfully." << std::endl;
    } else {
        std::cout << "Module not found." << std::endl;
    }
    break;
}
            case 9: {
                // Find Std Marks
                int searchStudentId;
                std::cout << "Enter student ID to find marks: ";
                std::cin >> searchStudentId;
                auto iter = std::find_if(students.begin(), students.end(), [&searchStudentId](const Student& student) {
                    return student.getStudentId() == searchStudentId;
                });
                if (iter != students.end()) {
                    std::cout << "Marks for student " << searchStudentId << ": " << iter->getMarks() << std::endl;
                } else {
                    std::cout << "Student not found." << std::endl;
                }
                break;
            }
            case 0: {
                // Exit
                std::cout << "Exiting." << std::endl;
                return 0;
            }
            default:
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    }
    return 0;
}