#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    vector<int>a(5,1);
    cout<<"print a: "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1); // giving the element to the array 
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;

    cout<<"Size: "<<v.size()<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;

    // taking the element from the array 
    cout<<"Before pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    
    cout<<"After pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Capacity: "<<v.capacity()<<endl;

    // clearing the whole array
    cout<<"Before clear: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear: "<<v.size()<<endl;

}