//
// Created by Mahros on 10/25/2023.
//

#include <vector>
#include <iostream>
#include "../headers/Person.h"
#include "../../packages/package.h"
using namespace std;

// Set variables
int Person::_counter = 0;

// Constructor
Person::Person(string name, string address, int age){
    _counter++;
    this->age(age);
    this->name(name);
    this->address(address);
}

// Methods
// Setters
int Person::age(int age) {
    if(age > 0 && age < 150){
        this->_age = age;
    } else{
        print("Age must be: 0 < age < 150");
    }
    return  this->age();
}
string Person::name(string name) {
    this->_name = toTitle(name);
    return this->name();
}
int Person::walk(int distance) {
    this->_distance += distance;
    print("Walked: " + to_string(distance)  + "m");
    return this->_distance;
}
string Person::address(string address) {
    this->_address = toTitle(address);
    return this->address();
}
vector<string> Person::headers(vector<string> headers){
    this->_headers = headers;
    return this->headers();
}

// Getters
int Person::counter(){
    return this->_counter;
}
int Person::age() {
    return _age;
}
string Person::name() {
    return this->_name;
}
int Person::distance() {
    return this->_distance;
}
string Person::address() {
    return this->_address;
}
vector<string> Person::info(){
    vector<string> i = vector<string>{name(), address(), to_string(age()), } ;
    return i;
}
vector<string> Person::headers(){
    return this->_headers;
}
// Destructor
Person::~Person(){

}