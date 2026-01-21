// 1)	Write a CPP program to find addition and subtraction of two numbers.
#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int addition = num1 + num2;
    int subtraction = num1 - num2;

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;

    return 0;
}