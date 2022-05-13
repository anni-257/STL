#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector::at() returns a referance to the element at position i in the vector
    vector<int>v(10);
    for(int i=0;i<v.size();i++ ){
        v.at(i)=i;
    }
    cout<<"Vector"<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Value at 10th index= "<<v.at(10)<<endl;

}