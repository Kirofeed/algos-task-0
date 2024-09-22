#include <iostream>
#include <set>
#include <string>
#include <fstream>

using namespace std;

int main() {
    set<long long> setik;
    long long in;
    ifstream filein("input.txt");
    while (filein >> in) {
        setik.insert(in);
    }
    long long sum = 0;
    for (int i : setik) {
        sum += i;
    }
    ofstream out("output.txt");
    out << sum;
}
