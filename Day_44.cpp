#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Rectangle{
    public:
    int height;
    int width;
    // Rectangle(int height,int width){
    //     this->height=height;
    //     this->width=width;
    // }
    // Rectangle(){
    //     this->width=0;
    //     this->height=0;
    // }
    void display(){
        cout<<this->width<<" "<<this->height<<endl;
    }
};
class RectangleArea:public Rectangle{
    public:
    // RectangleArea(int h,int w){
    //      this->height=h;
    //      this->width=w;
    //  }
    void read_input(){
        cin>>width>>height;
    }
    void display_area(){
        cout<< this->width*this->height<<endl;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // int h,w;
    // cin>>h;
    // cin>>w;
    RectangleArea r; 
    r.read_input();
    r.display();
    r.display_area(); 
    return 0;
}
