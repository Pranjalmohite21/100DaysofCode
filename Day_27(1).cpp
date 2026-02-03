#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s,p;
    cin>>s;
    cin>>p;
    int a= s.size();
    int b=p.size();
    cout<<a<<" "<<b<<endl;
    cout<<s+p<<endl;
    char temp;
    for(int i=0;i<1;i++){
        if (i==0){ 
            temp=s[0];
            s[0]=p[0];
            p[0]=temp;
        }   
    }
    cout<<s<<" "<<p;
    return 0;
}
