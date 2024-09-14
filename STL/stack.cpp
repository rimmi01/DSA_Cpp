// In stack there is a concept of last in, and first out 
// means jo sabse baad mein jaayega, usko sabse pehle nikaal lenge   

#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;

    s.push("Rimmi");
    s.push("Rani");
    s.push("Goyal");

    cout<<"Top Element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element: "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;

    cout<<"Empty of not: "<<s.empty()<<endl;


}