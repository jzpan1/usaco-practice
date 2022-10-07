/*
ID: panzhen2
TASK: ride
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string group;
    string comet;
    getline(fin, group);
    getline(fin, comet);
    int groupNum = 1;
    int cometNum = 1;
    
    for (int i = 0; i < group.length(); i++){
        groupNum = groupNum * ((int)group[i] - 64);
    }
    for (int i = 0; i < comet.length(); i++){
        cometNum = cometNum * ((int)comet[i] - 64);
    }
    if (cometNum%47 == groupNum%47) {
        fout << "GO" << endl;
    }
    else {
        fout << "STAY" << endl;
    }
    return 0;
}