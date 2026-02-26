#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
public:
    void print_triangle(){
       cout<<"I am a triangle"<<endl; 
    }
};
class Isosceles:public Triangle{
public:
    void print_isosceles(){
        cout<<"I am an isosceles triangle"<<endl;
    }
};
class Equilateral:public Isosceles{
public:
    void print_equilateral(){
        cout<<"I am an equilateral triangle"<<endl;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Equilateral e;
    e.print_equilateral();
    e.print_isosceles();
    e.print_triangle();   
    return 0;
}
