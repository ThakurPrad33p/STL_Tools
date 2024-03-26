#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int>m;
    m.insert(make_pair(10,100));
    m.insert(make_pair(20,200));
    m.insert(make_pair(40,100));
    m.insert(make_pair(40,500));
    m.insert(make_pair(50,100));
    // m.erase(40);

    for(auto it = m.begin(); it!=m.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}