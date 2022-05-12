#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>first; // empty vector
    vector<int>second(10); // 10 times 0
    for(int x:second){
        cout<<x<<endl;
    }
    vector<int>third(5,10); // 5 times 10
    for(int i:third){
        cout<<i<<endl;
    }
    vector<int>fourth(second); // copying second vector in fourth vector
    vector<int>fifth(fourth.begin(),fourth.end()); 
    int arr[]={11,22,33,44,55};
    vector<int>six(arr+1,arr+4); 
    for(int i:six){
        cout<<i<<" ";
    }
    


}