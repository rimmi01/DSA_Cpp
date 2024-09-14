#include<iostream>
#include<map>
using namespace std;

int main(){

    map <int, string> m;

    m[1] = "Rani";
    m[2] = "Rimmi";
    m[13] = "Goyal";

    m.insert({5, "bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Before erase: "<<endl;;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Finding 13: "<<m.count(13)<<endl;

    m.erase(5);
    cout<<"After erase: "<<endl;;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }




    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*it).first<<endl;
    }



}