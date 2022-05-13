#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vect;
    vect.front();
    vect.back(); // undefined behavior
    cout<<vect.size()<<endl;
    vector<int>v(3,200);
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);
    cout<<"Vector"<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.back()<<endl;
    cout<<"Size of vector is: "<<v.size()<<endl;
}