#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v(2,4); // 2 times 4;
    vector<int>::iterator it;
    it=v.begin();
    cout<<*it<<endl;
    vector<int>v1;
    v1.push_back(11);
    v1.push_back(22);
    it=v1.begin();
    cout<<"Begin"<<endl;
    cout<<*it<<endl; // end the process if vector is null
    cout<<"End"<<endl; 
    it=v1.end()-1;
    cout<<*it<<endl;
    return 0;
}