/*
#include <cmath>
#include <cstdio>
#include <vector>
include <iostream>
#include <algorithm>
using namespace std;
*/
#include <iostream>
using namespace std;
class Student {
public:
    int scores[5];

    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    int calculateTotalScore() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += scores[i];
        }
        return sum;
    }
};

int main() {
   int n,count=0;
   cin>>n;
   Student students[n];
   for(int i=0;i<n;i++){
    students[i].input();
   }
   Student kirsten_score=students[0];
   for (int i=0; i<n;i++) {
    students[i].calculateTotalScore();
   }
   for (int i=0; i<n;i++) {
    if(students[i].calculateTotalScore()>kirsten_score.calculateTotalScore()) count++;
   }
   cout<<count;
}
