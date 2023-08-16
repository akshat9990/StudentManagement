#ifndef MODULE_H
#define MODULE_H

#include <string>

class Module {
public:
    Module(int moduleId, const std::string& moduleName, int departmentId, const std::string& department, int classNumber);

    void display() const;

    int getModuleId() const;

    void setModuleName(const std::string& newModuleName);
    void setDepartmentId(int newDepartmentId);
    void setDepartment(const std::string& newDepartment);
    void setClassNumber(int newClassNumber);

private:
    int moduleId;
    std::string moduleName;
    int departmentId;
    std::string department;
    int classNumber;
};

#endif