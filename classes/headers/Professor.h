//
// Created by Mahros on 10/25/2023.
//
// Packages
#include <iostream>
#include "Person.h"
using namespace std;

#ifndef PROJECT_1_PROFESSOR_H
#define PROJECT_1_PROFESSOR_H


class Professor: public Person{
    private:
        int _rate = 0;
        int _courseId = 0;
        string _email = "";
    public:
        // Constructor
        Professor(string name, string address, int age, int rate, int courseId, string email);

        // Setters
        int rate(int x);
        int courseId(int courseId);
        string email(string email);

        // Getters
        int rate();
        int courseId();
        string email();
        void show();
        vector<string> info();

        // Destructor
        ~Professor();
};


#endif //PROJECT_1_PROFESSOR_H
