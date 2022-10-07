//http://www.usaco.org/index.php?page=viewproblem2&cpid=894
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

struct Field{
    int numpaths;

    Field(){
        numpaths = 0;
    }

    void addpath(){
        numpaths++;
    }
};

int main(){
    ifstream fin("planting.in");
    ofstream fout("planting.out");
    int N, x, y;
    //fin >> N;

    fout << N;
    vector<Field> fields(N);
    vector<int> grasses(0);
    int numgrasses = 0;

    //fout << "hello?";

    for (int i = 0; i<N-1; i++){
        fin >> x >> y;
        fields[x].addpath();
        fields[y].addpath();
    }

    for (int i = 0; i<N; i++){
        if (numgrasses < fields[i].numpaths){
            numgrasses = fields[i].numpaths;
        }
    }

    fout << numgrasses+1;
}