#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    struct NewType {
        int age;
        string first_name;
        string last_name;
        int standard;
    };
    NewType s;
    cin>>s.age;
    cin>>s.first_name;
    cin>>s.last_name;
    cin>>s.standard;
    cout<<s.age<<" "<<s.first_name<<" "<<s.last_name<<" "<<s.standard;
    return 0;
}
