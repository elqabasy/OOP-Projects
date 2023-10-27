//
// Created by Mahros on 10/24/2023.
//
#include "package.h"

#include <iostream>
#include <vector>
#include <valarray>

using namespace std;


void print(int* number, string sep, string end){
    cout << number << sep << end;
}void print(int number, string sep, string end){
    cout << number << sep << end;
}

// template <typename Type1>
void print(string text, string sep, string end){
    cout << text << sep << end;
}

void print(vector<string> text, string sep){
    for(int x = 0; x < text.size(); x++){
        if (x == text.size() - 1){
            cout << text.at(x) << endl;
        }else{
            cout << text.at(x) << sep;
        }
    }
}
void print(vector<int> numbers, string sep){
    for(int x = 0; x < numbers.size(); x++){
        if (x == numbers.size() - 1){
            cout << numbers.at(x) << endl;
        }else{
            cout << numbers.at(x) << sep;
        }
    }
}
void print(vector<float> numbers, string sep){
    for(int x = 0; x < numbers.size(); x++){
        if (x == numbers.size() - 1){
            cout << numbers.at(x) << endl;
        }else{
            cout << numbers.at(x) << sep;
        }
    }
}
void print(vector<double> numbers, string sep){
    for(int x = 0; x < numbers.size(); x++){
        if (x == numbers.size() - 1){
            cout << numbers.at(x) << endl;
        }else{
            cout << numbers.at(x) << sep;
        }
    }
}
void print(vector<char> chars, string sep){
    for(int x = 0; x < chars.size(); x++){
        if (x == chars.size() - 1){
            cout << chars.at(x) << endl;
        }else{
            cout << chars.at(x) << sep;
        }
    }
}

string toTitle(string text){
    text[0] = char(toupper(text[0]));
    return text;
}






template <typename Type1>
int truncate(Type1 x){
    return int(x);
}

int length(vector<int> list, int number){
    int counter = 0;
    for (int val : list){
        if(val == number){
            counter++;
        }
    }
    return counter;
}
int length(vector<double> list, double number){
    int counter = 0;
    for (double val : list){
        if(val == number){
            counter++;
        }
    }
    return counter;
}
int length(vector<float> list, float number){
    int counter = 0;
    for (float val : list){
        if(val == number){
            counter++;
        }
    }
    return counter;
}
int length(vector<bool> list, bool number){
    int counter = 0;
    for (bool val : list){
        if(val == number){
            counter++;
        }
    }
    return counter;
}
int length(vector<long> list, long number){
    int counter = 0;
    for (long val : list){
        if(val == number){
            counter++;
        }
    }
    return counter;
}
int length(vector<char> list, char character, bool caseSenestive){
    int counter = 0;
    if(caseSenestive == false){
        character = tolower(character);
    }
    for (char val : list){
        if(caseSenestive == false){
            val = tolower(val);
        }
        if(val == character){
            counter++;
        }
    }
    return counter;
}
int length(string text){
    int counter = 0;
    for (char val : text){
        if(isExist(val, vector<char>{'\t', '\v'})){
            counter += 4;
        } else{
            counter++;
        }
    }
    return counter;
}
int length(vector<int> list){
    int counter = 0;
    for (int val : list){
        counter++;
    }
    return counter;
}
int length(vector<string> list){
    int counter = 0;
    for (string val : list){
        counter++;
    }
    return counter;
}

//  NOTE Edit this
int isExist(char val, string text, int caseSenestive){
    for (char x : text){
        if(caseSenestive == true){
            if (x == char(int(val))){
                return true;
            }
        }else{
            if (char(tolower(int(x))) == char(tolower(int(val)))){
                return true;
            }

        }
    }
    return false;
}



// --------------------------

int isExist(string val, vector<string> list){
    for (string x : list){
        if (x == val){
            return true;
        }
    }
    return false;
}
int isExist(char val, vector<char> list){
    for (char x : list){
        if (x == val){
            return true;
        }
    }
    return false;
}
int isExist(int val, vector<int> list){
    for (int x : list){
        if (x == val){
            return true;
        }
    }
    return false;
}
int isExist(float val, vector<float> list){
    for (float x : list){
        if (x == val){
            return true;
        }
    }
    return false;
}
int isExist(double val, vector<double> list){
    for (double x : list){
        if (x == val){
            return true;
        }
    }
    return false;
}
// -------------------------------------



string toLower(string text){
    string result = "";
    for(char val : text){
        result += char(tolower(val));
    }
    return result;
}
string toUpper(string text){
    string result = "";
    for(char val : text){
        result += char(toupper(val));
    }
    return result;
}

int isLower(string text){
    for(char val : text){
        if (!islower(val)){
            return false;
        }
    }
    return true;
}
int isUpper(string text){
    for(char val : text){
        if (!isupper(val)){
            return false;
        }
    }
    return true;
}
int isTitle(string text){
    if(!isupper(text[0])){
        return false;
    }
    return true;
}

int isOdd(int x){
    if (x % 2 != 0){
        return true; // number is odd
    }else{
        return false; // number is odd
    }
}
int isEven(int x){
    if (x % 2 == 0){
        return true; // number is even
    }else{
        return false; // number is odd
    }
}

template <typename Type3>
int absolute(Type3 val){
    return val >= 0 ? val : val * -1;
}
// float absolute(Type3 val){
//     return val >= 0 ? val : val * -1;
// }
// double absolute(Type3 val){
//     return val >= 0 ? val : val * -1;
// }
// long absolute(Type3 val){
//     return val >= 0 ? val : val * -1;
// }

// template <typename Type4>
string repeat(string text, int count, string sep, string end){
    string result = "";
    for (int x = 0; x < count; x++){
        if (x < count - 1){
            result += text + sep;
        }else{
            result += text + end;
        }
    }

    return result;
}
// string repeat(char text, int count=5, string sep="", string end=""){
//     string result = "";
//     for (int x = 0; x < count; x++){
//         if (x < count - 1){
//             result += text + sep;
//         }else{
//             result += text + end;
//         }
//     }

//     return result;
// }

string trim(string text, vector<char> trimValues){
    //  _ m a h r o s _ _ _
    //  0 1 2 3 4 5 6 7 8 9
    string result = "";
    // vector<char> list = stringToArray(text);

    vector<int> removedIndexes = {};

    // trim left
    for(int x = 0; x < length(text); x++){
        char val = char(int(text[x]));
        if (!isExist(val, trimValues) ){
            break;
        }else{
            removedIndexes.push_back(x);
        }
    }

    // trim right
    for(int x = length(text) -1; x >= 0; x--){
        char val = char(int(text[x]));
        if (!isExist(val, trimValues) ){
            break;
        }else{
            removedIndexes.push_back(x);
        }
    }

    for(int x = 0; x < length(text); x++){
        if (!isExist(x, removedIndexes)){
            result += text[x];
        }
    }
    return result;
}

vector<char> toArray(string text){
    vector<char> result;
    for(char val : text){
        result.push_back(val);
    }

    return result;
}

string fill(string text, int width, string fill_with, string direction){
    string result = ""; direction = toLower(direction);
    while (length(result) < width - length(text) && length(result) < width){
        result += fill_with;
    }
    if (direction == "ltr"){
        return text + result;
    }else{
        return result + text;
    }
}

int isEqual(string text, string text2, int caseSenestive){
    bool result;
    caseSenestive == false ? text = toLower(text), text2 = toLower(text2) : text, text2;
    text == text2 ? result = true : result = false;
    return result;
}

string myReverse(string text){
    string result = "";
    for(int x = length(text)-1; x >= 0; x--){
        result += text[x];
    }
    return result;
}

vector<int> myReverse(vector<int> list){
    vector<int> reversed = {};
    for(int x = length(list)-1; x >= 0; x--){
        reversed.push_back(list.at(x));
    }
    return reversed;
}

// reverse number
template <typename Type5>
Type5 myReverse(Type5 number){
    Type5 in = number;
    Type5 out = 0;
    while(in){
        out *= 10;
        out += in % 10;
        in /= 10;
    }
    return out;
}

// int myReverse2(int number){
//     // only three numbers
//
//     int k = number / 100; // first number
//     int z = number % 10; // last number
//     print(k);
//     // print(z);
//     return 0;
//
// }

int countSpaces(string text){
    int counter = 0;

    for(char val : text){
        if (val == ' '){
            counter++;
        }else if(val == '\t' || val == '\v'){
            counter += 8;
        }
    }

    return counter;
}


string removeDuplicates(string text, bool senestive){
    string clear = "", ntext;
    // senestive ? text = text : text = toLower(text);
    for(char val : text){
        if(!isExist(val, clear)){
            clear += val;
        }
    }
    return clear;
}


int max(vector<int> list){
    int temp = 0;
    for(int val : list){
        if(val > temp){
            temp = val;
        }
    }
    return temp;
}


int min(vector<int> list){
    int temp = list.at(0);
    for(int val : list){
        if(val < temp){
            temp = val;
        }
    }
    return temp;
}

vector<int> merge(vector<int> list1, vector<int> list2){
    for(int val : list2){
        list1.push_back(val);
    }
    return list1;
}


int count(vector<string> l){
    int counter = 0;
    for(string val : l){
        counter += length(val);
    }
    return counter;
}