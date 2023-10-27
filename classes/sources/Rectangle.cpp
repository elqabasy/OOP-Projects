/*
* Created by Mahros on 10/24/2023.
*/

#include <iostream>
#include "../headers/Rectangle.h"
using namespace std;

// initialize static variables
int Rectangle::counter = 0;

// Constructor
Rectangle::Rectangle(int w, int h){
    counter++;
    Rectangle::width(w);
    Rectangle::height(h);
    // cout << "Started" << endl;
}

// Setters
int Rectangle::width(int w){
    if(w > 0 && w <= 1000){
        this->w = w;
    } else{
        cout << "Width must be greater than 0;" << endl;
    }
    return  this->w;
}
int Rectangle::height(int h){
    if(h > 0 && h <= 1000){
        this->h = h;
    } else{
        cout << "height must be greater than 0;" << endl;
    }
    return this->h;
}

// Getters
int Rectangle::getCounter(){
    return counter;
}
int Rectangle::width() const{
    return this->w;
}
int Rectangle::height() const{
    return this->h;
}
void Rectangle::print() const{
    cout << "Width: " << this->width() << endl;
    cout << "Height: " << this->height() << endl;
}
int Rectangle::area() const {
    return this->w * this->h;
}

// Overload Functions

// Addition
Rectangle Rectangle::operator +(int x) {
    Rectangle New(0, 0);
    New.width(width() + x);
    New.height(height() + x);
    return New;
}
Rectangle Rectangle::operator +(Rectangle x) {
    Rectangle New(width() + x.width(), height() + x.height());
    return New;
}
Rectangle Rectangle::operator ++() {
    width(width()+1);
    height(height()+1);
    Rectangle New(width(), height());
    return New;
}
Rectangle Rectangle::operator +=(int x) {
    width(width() + x);
    height(height() + x);
    Rectangle New(width(), height());
    return New;
}
Rectangle Rectangle::operator +=(Rectangle x) {
    width(width() + x.width());
    height(height() + x.height());
    Rectangle New(width(), height());
    return New;

}
Rectangle Rectangle::operator ++(int) {
    width(width()+1);
    height(height()+1);
    Rectangle New(width(), height());
    return New;
}

// Subtraction
Rectangle Rectangle::operator -(int x) {
    Rectangle New(abs(width() - x), abs(height() - x));
    return New;
}
Rectangle Rectangle::operator -(Rectangle x) {
    Rectangle New(abs(width() - x.width()), (abs(height() - x.height())));
    return New;
}
Rectangle Rectangle::operator -=(int x) {
    width(width() - x);
    height(height() - x);
    Rectangle New(width(), height());
    return New;
}
Rectangle Rectangle::operator -=(Rectangle x) {
    width(width() - x.width());
    height(height() - x.height());
    Rectangle New(width(), height());
    return New;
}
Rectangle Rectangle::operator --() {
    Rectangle New(0, 0);
    New.width(width()-1);
    New.height(height()-1);
    return New;
}
Rectangle Rectangle::operator --(int) {
    width(width()-1);
    height(height()-1);
    Rectangle New(width(), height());
    return New;
}

// Multiplication
Rectangle Rectangle::operator *(int x) {
    Rectangle New(width() * x, height() * x);
    return New;
}
Rectangle Rectangle::operator *(Rectangle x) {
    Rectangle New(width() * x.width(), height() * x.height());
    return New;
}
Rectangle Rectangle::operator *=(int x) {
    width(width() * x);
    height(height() * x);
    Rectangle New(width(), height());
    return New;
}
Rectangle Rectangle::operator *=(Rectangle x) {
    width(width() * x.width());
    height(height() * x.height());
    Rectangle New(width(), height());
    return New;
}

// Division
Rectangle Rectangle::operator /(int x) {
    Rectangle New(width() / x, height() / x);
    return New;
}
Rectangle Rectangle::operator /=(int x) {
    width(width() / x);
    height(height() / x);
    Rectangle New(width(), height());
    return New;
}
Rectangle Rectangle::operator /(Rectangle x) {
    Rectangle New(width() / x.width(), height() / x.height());
    return New;
}
Rectangle Rectangle::operator /=(Rectangle x) {
    width(width() / x.width());
    height(height() / x.height());
    Rectangle New(width(), height());
    return New;
}

// Module Operation
Rectangle Rectangle::operator %(int x) {
    Rectangle New(width() % x, height() % x);
    return New;
}
Rectangle Rectangle::operator %=(int x) {
    width(width() % x);
    height(height() % x);
    Rectangle New(width(), height());
    return New;
}
Rectangle Rectangle::operator %(Rectangle x) {
    Rectangle New(width() % x.width(), height() % x.height());
    return New;

}
Rectangle Rectangle::operator %=(Rectangle x) {
    width(width() % x.width());
    height(height() % x.height());
    Rectangle New(width(), height());
    return New;

}

// Destructor
Rectangle::~Rectangle(){
    // cout << "Ended" << endl;
}