#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
    Complex(){
        real = 0;
        imag = 0;
    }
    
    void display(){
        cout<<real<<"+i"<<imag <<endl;
    }

    Complex(int a, int b) : real(a), imag(b) {}
    friend operator +(Complex c1, Complex c2){
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
    }

};

int main(){
    Complex C1(10, 20), C2(20, 30), C3;
    C3 = C1 + C2;
    C3.display();
    return 0;

}
