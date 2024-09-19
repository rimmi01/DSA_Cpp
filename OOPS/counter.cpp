#include<iostream>
using namespace std;

class counter{
    int a;
    public:

    counter(int num){
        a = num;
    }
    counter(counter &ob){
        a = ob.a;
    }
    void show(){
        cout<<a<<endl;
    }

};

int main(){
    counter ob1(10);
    counter ob2(ob1);
    ob1.show();
    ob2.show();
    return 0;
}