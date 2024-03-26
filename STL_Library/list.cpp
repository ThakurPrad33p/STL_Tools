#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l;
    l.push_back(23);
    l.push_back(25);
    l.push_back(53);
    l.push_back(16);
    l.push_back(93);
    l.push_front(22);
    l.pop_back();

    cout<<l.back()<<endl;

    for(auto it= l.rbegin(); it!=l.rend();it++){
        cout<<*it<<" ";
    }

}