/*
https://open.kattis.com/contests/mcpc19open/problems/basketballoneonone
TASK: basketballoneonone
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input;
    ofstream output;
    //output.open(");
    input.open("2.in");
    char i;
    input >> i;
    char pt;
    int Apts = 0;
    int Bpts = 0;
    while (!input.eof()) {
        if (i=='A') {
            input >> pt;
            Apts += (int)pt;
        }
        else {
            input >> pt;
            Bpts += (int)pt;
        }
        input >> i;
    }

    if (Apts>Bpts) {
        cout << 'A';
        return 0;
    }
    else {
        cout << 'B';
        return 0;
    }
    
}