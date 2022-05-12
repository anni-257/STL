#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>first;
    vector<int>second(2);
    
    first.assign(3,10);
     for(int x:first){
        cout<<x<<endl;
    }
    
    second.assign(2,100);
    first.assign(second.begin(),second.end());
    int arr[]={12,23,34,45};
    second.assign(arr,arr+4);

   
    

}