#include<bits/stdc++.h>
using namespace std;

// print the alphabet first and then the digits

int main()
{
    string s;
    cin>> s;
    
    for(char c : s){
        if(!isdigit(c)){
            cout<< c;
        }
    }
    for(char c : s){
        if(isdigit(c)){
            cout<< c;
        }
    }
}
