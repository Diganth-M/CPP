#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>> str;
    int len = str.length();
    for(int i=0; i<len; i++){
        
        switch(str[i]){
            case 'a':
            case 'A':
                cout<< 2;
                break;
                
            case 'e':
            case 'E':
                cout<< 3;
                break;
                
            case 'i':
            case 'I':
                cout<< 4;
                break;
                
            case 'o':
            case 'O':
                cout<< 5;
                break;
                
            case 'u':
            case 'U':
                cout<< 6;
                break;
                
            default:
                cout<<str[i];
        }
        
        
        // if(str[i] == 'a' || str[i] == 'A'){
        //     cout<< 2;
        // }
        // else if(str[i] == 'e'  || str[i] == 'E'){
        //     cout<< 3;
        // }
        // else if(str[i] == 'i'  || str[i] == 'I'){
        //     cout<< 4;
        // }
        // else if(str[i] == 'o'  || str[i] == 'O'){
        //     cout<< 5;
        // }
        // else if(str[i] == 'u'  || str[i] == 'U'){
        //     cout<< 6;
        // }
        // else{
        //     cout<< str[i];
        // }
    }
}
