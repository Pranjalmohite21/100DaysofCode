#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reversearr(vector<int>v){
    int temp;
    int m=v.size();
    for(int i=0;i<m/2;i++){
        temp=v[m-1-i];
        v[m-1-i]=v[i];
        v[i]=temp;
    }  
    for(int i=0;i<m;i++){
        cout<<v[i]<<" ";
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
     reversearr(v);  
    return 0;
}
