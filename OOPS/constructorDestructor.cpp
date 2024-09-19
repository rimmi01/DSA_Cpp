#include<iostream>
using namespace std;

class A{
    int id;
    public:
    A(int i){
        id = i;
        cout<<"Constructor called: "<<id<<endl;

    }
    ~A(){
        cout<<"Destructor called: "<<id<<endl;

    }

};


int main(){
    A ob1(1);
    A ob2(2);
    A ob3(3);
    return 0;
}
