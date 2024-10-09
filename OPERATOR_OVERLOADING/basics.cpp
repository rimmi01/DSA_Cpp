#include<iostream>
using namespace std;

class abc{
    int x, y, z;
    public:
    abc(int a, int b, int c) : x(a), y(b), z(c) {} 
    void operator -(){
        x=-x;
        y=-y;
        z=-z;
    }
    void display(){
        cout<<x<<"  "<<y<<"  "<<z<<endl;
    }
};

int main(){
    abc s(10, -20, 30);
    cout<<"Before Overloading"<<endl;
    s.display();
    -s;
    cout<<"After overloading"<<endl;
    s.display();
    return 0;
}