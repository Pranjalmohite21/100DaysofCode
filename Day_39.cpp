#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        Student(int age,string first_name,string last_name,int standard){
            this->age=age;
            this->first_name=first_name;
            this->last_name=last_name;
            this->standard=standard;
        }
        void set_age(int age){
            this->age=age;
        }
        void set_first_name(string b){
            this->first_name=b;
        }
        void set_last_name(string c){
            this->last_name=c;
        }
        void set_standard(int d){
            this->standard=d;
        }
        void get(){
            cout<<this->age<<endl;
            cout<<this->last_name<<","<<" "<<this->first_name<<endl;
            cout<<this->standard<<endl;
            cout<<endl;
            cout<<this->age<<","<<this->first_name<<","<<this->last_name<<","<<this->standard;
        }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int age;string first_name;string last_name;int standard;
    cin>>age;
    cin>>first_name;
    cin>>last_name;
    cin>>standard;
    Student s(age,first_name,last_name,standard);
    //Student(age,first_name,last_name,standard);
    s.get();   
    return 0;
}
