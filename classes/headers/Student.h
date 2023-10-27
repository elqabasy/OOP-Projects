//
// Created by Mahros on 10/25/2023.
//
#include <iostream>
using namespace std;

#ifndef PROJECT_1_STUDENT_H
#define PROJECT_1_STUDENT_H
#include "Person.h"

class Student: public Person{
    private:
        float _gpa = 0;
        int _courses = 0;
        string _grade = "";
    public:
        // Constructor
        Student(string name, string address, int age, float gpa, int courses, string grade);

        // Setters
        void complain(string text);


        // Getters

        // Destructor
        ~Student();
};


#endif //PROJECT_1_STUDENT_H
