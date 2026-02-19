#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box{
private:
    int length;
    int breadth;
    int height;
public:
    Box(){
        this->length=0;
        this->breadth=0;
        this->height=0;
    }
    Box(int length,int breadth,int height){
        this->length=length;
        this->breadth=breadth;
        this->height=height;
    }
    int getLength(){
        return this->length;
    }
    int getBreadth(){
        return this->breadth;
    }
    int getHeight(){
        return this->height;
    }
    Box(const Box &B) {
            length = B.length;
            breadth = B.breadth;
            height = B.height;
        }
    long long CalculateVolume(){
        return 1LL*this->breadth*this->height*this->length;
    }
    bool operator<(const Box& B) const {
            if (length < B.length) return true;
            if (length == B.length && breadth < B.breadth) return true;
            if (length == B.length && breadth == B.breadth && height < B.height) return true;
            return false;
        }

        // Overload << operator
        friend ostream& operator<<(ostream& out, const Box& B) {
            out << B.length << " " << B.breadth << " " << B.height;
            return out;
        }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    Box temp;   // default box
    while (n--) {
        int type;
        cin >> type;

        if (type == 1) {
            // Print current box
            cout << temp << endl;
        }

        else if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }

        else if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp) {
                cout << "Lesser\n";
            } else {
                cout << "Greater\n";
            }
        }

        else if (type == 4) {
            cout << temp.CalculateVolume() << endl;
        }

        else if (type == 5) {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }

    return 0;
}

