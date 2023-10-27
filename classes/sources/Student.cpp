//
// Created by Mahros on 10/25/2023.
//

#include "../headers/Student.h"
#include "../../packages/package.h"
#include <iostream>
using namespace std;


// Constructor
Student::Student(string name, string address, int age, float gpa, int courses, string grade): Person(name, address, age){
    this->_gpa = gpa;
    this->_grade = grade;
    this->_courses = courses;
}

// Setters
void Student::complain(string text){
    print("I complain about : " + text);
}
// Getters

// Destructor
Student::~Student(){
}

