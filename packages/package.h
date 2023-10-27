//
// Created by Mahros on 10/24/2023.
//

#include <iostream>
#include <vector>
using namespace std;

#ifndef PROJECT_1_PACKAGE_H
#define PROJECT_1_PACKAGE_H

void print(int number, string sep="\n", string end="");
// template <typename Type1>
void print(string text, string sep="\n", string end="");
void print(vector<string> text, string sep="\n");
void print(vector<int> numbers, string sep="\n");
void print(vector<float> numbers, string sep="\n");
void print(vector<double> numbers, string sep="\n");
void print(vector<char> chars, string sep="\n");

template <typename Type1>
int truncate(Type1 x);
int length(vector<int> list, int number);
int length(vector<double> list, double number);
int length(vector<float> list, float number);
int length(vector<bool> list, bool number);
int length(vector<long> list, long number);
int length(vector<char> list, char character, bool caseSenestive = true);
int length(string text);
int length(vector<int> list);
int length(vector<string> list);

int isExist(char val, string text, int caseSenestive = 1);
int isExist(string val, vector<string> list);
int isExist(char val, vector<char> list);
int isExist(int val, vector<int> list);
int isExist(float val, vector<float> list);
int isExist(double val, vector<double> list);

string toLower(string text);
string toUpper(string text);
string toTitle(string text);

int isLower(string text);
int isUpper(string text);
int isTitle(string text);

int isOdd(int x);
int isEven(int x);

template <typename Type3>
int absolute(Type3 val);
// template <typename Type4>
// string repeat(Type4 text, int count=5, string sep="", string end="");
string repeat(string text, int count=5, string sep="", string end="");
string trim(string text, vector<char> trimValues = {' ', '@', '\t', '\n', '\v', '\f', '\r'});
vector<char> toArray(string text);
string fill(string text, int width=10, string fill_with=" ", string direction="ltr");
int isEqual(string text, string text2, int caseSenestive = 0);

string myReverse(string text);
vector<int> myReverse(vector<int> list);
template <typename Type5>
Type5 myReverse(Type5 number);

int countSpaces(string text);
string removeDuplicates(string text, bool senestive=true);
int max(vector<int> list);
int min(vector<int> list);
vector<int> merge(vector<int> list1, vector<int> list2);
int count(vector<string> l);
#endif //PROJECT_1_PACKAGE_H
