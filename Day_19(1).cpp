#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void func(int a, int b){
    cout<<a+b<<"\n";
    cout<<abs(a-b);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b;
    cin>>a;
    cin>>b;
    func(a,b);  
    return 0;
}
