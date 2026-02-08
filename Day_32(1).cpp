#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    stringstream ss(s);
    char ch;
    int num;
    while (ss >> num) {
    cout << num << endl;
    ss >> ch;          
    }
    return 0;
}
