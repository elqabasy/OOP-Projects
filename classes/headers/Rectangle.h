//
// Created by Mahros on 10/24/2023.
//

#ifndef PROJECT_1_RECTANGLE_H
#define PROJECT_1_RECTANGLE_H
class Rectangle {
    private:
        int w=0; int h=0;
        static int counter;
    public:
        // Constructor
        Rectangle(int w, int h);

        // Setters
        int height(int h);
        int width(int w);


        // Getters
        int area() const;
        int getCounter();
        int width() const;
        int height() const;
        void print() const;


        // Addition
        Rectangle operator ++();
        Rectangle operator ++(int);
        Rectangle operator +(int x);
        Rectangle operator +=(int x);
        Rectangle operator +(Rectangle x);
        Rectangle operator +=(Rectangle x);

        // Subtraction
        Rectangle operator --();
        Rectangle operator --(int);
        Rectangle operator -(int x);
        Rectangle operator -(Rectangle x);
        Rectangle operator -=(int x);
        Rectangle operator -=(Rectangle x);

        // Multiplication
        Rectangle operator *(int x);
        Rectangle operator *=(int x);
        Rectangle operator *(Rectangle x);
        Rectangle operator *=(Rectangle x);

        // Division
        Rectangle operator /(int x);
        Rectangle operator /=(int x);
        Rectangle operator /(Rectangle x);
        Rectangle operator /=(Rectangle x);

        // Modulus Operator : Modulo Operation (Remainder after division)
        Rectangle operator %(int x);
        Rectangle operator %=(int x);
        Rectangle operator %(Rectangle x);
        Rectangle operator %=(Rectangle x);

        // Destructor
        ~Rectangle();
};
#endif //PROJECT_1_RECTANGLE_H