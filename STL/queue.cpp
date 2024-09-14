#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("Rimmi");
    q.push("Rani");
    q.push("Goyal");

    cout<<"Size Before pop: "<<q.size()<<endl;

    cout<<"Frist element: "<<q.front()<<endl;
    q.pop();
    cout<<"Frist element: "<<q.front()<<endl;

    cout<<"Size After pop: "<<q.size()<<endl;



}