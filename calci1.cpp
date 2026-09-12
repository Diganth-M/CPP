// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>> a >> b;
    char ch;
    cin>> ch;
    
    if(ch == '+'){
        cout<< "Result: " << a+b;
    }
    else if(ch == '-'){
        cout<< "Result: " << a-b;
    }
    else if(ch == '*'){
        cout<< "Result: " << a*b;
    }
    else if(ch == '/' ){
        if(b == 0){
            cout<< "Error: Division by zero";
        }
        else
        cout<< "Result: " << a/b;
    }
    else{
        cout<<"Error: Invalid operator";
    }
}
