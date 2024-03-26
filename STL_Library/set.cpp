#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;
    s.insert(23);
    // s.insert(23);
    s.insert(89);
    s.insert(13);
    s.insert(25);
    s.erase(23);

    cout<<s.count(23)<<endl;

    for(auto it=s.rbegin();it!=s.rend();it++){
        cout<<*it<<" ";
    }
}