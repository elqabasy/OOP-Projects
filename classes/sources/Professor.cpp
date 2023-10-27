//
// Created by Mahros on 10/25/2023.
//

#include <vector>
#include "../headers/Professor.h"
#include "../../packages/package.h"

// Constructor
Professor::Professor(string name, string address, int age, int rate, int courseId, string email): Person(name, address, age){
    this->_rate = rate;
    this->_email = email;
    this->_courseId = courseId;
    this->headers({"Name", "Address", "Mail", "Age", "Rate", "CourseID"});
}

// Setters
int Professor::rate(int rate) {
    this->_rate = rate;
    return this->rate();
}

int Professor::courseId(int courseId) {
    this->_courseId = courseId;
    return this->courseId();
}

string Professor::email(string email) {
    this->_email = email;
    return this->email();
}

// Getters
int Professor::rate() {
    return this->_rate;
}
int Professor::courseId() {
    return this->_courseId;

}
string Professor::email() {
    return this->_email;

}
vector<string> Professor::info() {
    // Name, Address, Mail, Age, Rate, CourseId
    return vector<string> {this->name(), this->address(), this->email(), to_string(this->age()), to_string(this->rate()),
                        to_string(this->courseId())};
}
void Professor::show() {
    // Name, Address, Mail, Age, Rate, CourseId
    int columnWidth = 10;
    vector<string> he = this->headers();
    for(string val : he){
        print(val, "");
        print(repeat(" ", columnWidth - length(val)), "");
    }
    print("");
    // print(he, repeat(" ", betweenSpaces));
    print(repeat("_", columnWidth * length(he) - (columnWidth - length(he.at(length(he)-1))), "", "\n"));

    for(string val : this->info()){
        print(val, "", "");
        print(repeat(" ", columnWidth - length(val)), "");
    }
}

// Destructor
Professor::~Professor(){
}