/*
https://open.kattis.com/problems/filip
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string input;
    int num1, num2;
    cin >> num1 >> num2;

    num1 = (num1-num1%100)/100 + (num1%100-num1%10) + 100*(num1%10);
    num2 = (num2-num2%100)/100 + (num2%100-num2%10) + 100*(num2%10);

    if (num1<num2) {
        cout << num2;
    }
    else {
        cout << num1;
    }

    return 0;
}