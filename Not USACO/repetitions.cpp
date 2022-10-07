//https://cses.fi/problemset/task/1069
#include <iostream>
#include <string>
using namespace std;
int main() {
    string hi;
    cin >> hi;
    int longest = 0;
    int temp = 1;
    for (int i = 0; i<(int)hi.size()-1; i++)
        if (hi[i]==hi[i+1]) {
            temp++;
        }
        else {
            if (longest<temp) {
                longest = temp;
            }
            temp = 1;
        }
    if (longest<temp) {
        longest = temp;
    }
    cout<<longest;
    return 0;
}