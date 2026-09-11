#include<bits/stdc++.h>
using namespace std;

// Checking Palindrome using " begin(), end() "


int main()
{
    string str;
    cin>> str;
    for(int i=0; i<str.size(); i++){
        str[i] = tolower(str[i]);
    }
    string dup = str;
    
    reverse(str.begin(), str.end());
    if(dup == str){
        cout<< "\npalindrome";
        return 0;
    }
    cout<< "not palindrome";
    
}
