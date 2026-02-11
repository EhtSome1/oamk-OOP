#include "student.h"

student::student(string nam, int num) {
    setName(nam);
    setAge(num);
}

void student::setAge(int num) {
    age = num;
}

void student::setName(string nam) {
    name = nam;
}

string student::getName() {
    return name;
}

int student::getAge() {
    return age;
}

void student::printStudentInfo() {
    cout<<"Name: "<<name<<" | Age: "<<age<<endl;
}
