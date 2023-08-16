#include "Module.h"
#include <iostream>

Module::Module(int moduleId, const std::string& moduleName, int departmentId, const std::string& department, int classNumber)
    : moduleId(moduleId), moduleName(moduleName), departmentId(departmentId), department(department), classNumber(classNumber) {}

void Module::display() const {
    std::cout << "Module ID: " << moduleId << ", Module Name: " << moduleName
              << ", Department ID: " << departmentId << ", Department: " << department
              << ", Class Number: " << classNumber << std::endl;
}

int Module::getModuleId() const {
    return moduleId; 
}
void Module::setModuleName(const std::string& newModuleName) {
    moduleName = newModuleName;
}

void Module::setDepartmentId(int newDepartmentId) {
    departmentId = newDepartmentId;
}

void Module::setDepartment(const std::string& newDepartment) {
    department = newDepartment;
}

void Module::setClassNumber(int newClassNumber) {
    classNumber = newClassNumber;
}