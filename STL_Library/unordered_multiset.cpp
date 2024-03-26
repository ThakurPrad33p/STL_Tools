#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_multiset<int>s;
    s.insert(25);
    s.insert(23);
    s.insert(89);
    s.insert(13);
    s.insert(25);
    // s.erase(23);

    // cout<<s.count(23)<<endl;

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}