#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<string,int>p;
    pair<string,int>q;
    pair<string,pair<string,int>>c;
    //first method
    p=make_pair("Pradeep",80);
    //second method
    q.first="pradeep";
    q.second=70;

    //insert 3 values in a pair...
    c.first="Pradeep";
    c.second.first="AIR";
    c.second.second=1;

    cout<<p.first<<" "<<p.second<<endl;
    cout<<q.first<<" "<<q.second<<endl;
    cout<<c.first<<" "<<c.second.first<<" "<<c.second.second<<endl;
}
