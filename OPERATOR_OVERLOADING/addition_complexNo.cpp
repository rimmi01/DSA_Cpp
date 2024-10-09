#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int a, int b) : real(a), imag(b) {}
    Complex operator +(Complex C){
        Complex temp;
        temp.real = real+C.real;
        temp.imag = imag + C.imag;
        return temp;
    }

    void display(){
        cout<<real<<"+i"<<imag <<endl;
    }
};

int main(){
    Complex C1(10, 20), C2(20, 30), C3;
    C3 = C1 + C2;
    C3.display();
    return 0;

}
