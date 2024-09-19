#include<iostream>
using namespace std;

class rectangle{

    int l, w;
    public:
    rectangle(int a, int b) : l(a), w(b){}

    void area(){
        int area = l*w;
        cout<<area<<endl;
    }
};


int main(){
    rectangle ob(2, 3);
    ob.area();
    return 0;
}