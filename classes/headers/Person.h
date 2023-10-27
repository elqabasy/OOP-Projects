//
// Created by Mahros on 10/25/2023.
//

#include <vector>
#include <iostream>
using namespace std;
#ifndef PROJECT_1_PERSON_H
#define PROJECT_1_PERSON_H


class Person {
    private:
        vector<string> _headers;
        string _address = "";
        static int _counter;
        string _name = "";
        int _distance = 0;
        int _age = 0;
    public:
        // Constructor
        Person(string name, string address, int age);

        // Methods
        // Setters
        int age(int age);
        string name(string name);
        int walk(int distance);
        string address(string name);
        vector<string> headers(vector<string> headers);

        // Getters
        int age();
        int counter();
        string name();
        int distance();
        string address();

        virtual vector<string> info();
        vector<string> headers();

        // Destructor
        ~Person();
};


#endif //PROJECT_1_PERSON_H
