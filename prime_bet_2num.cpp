#include<bits/stdc++.h>
using namespace std;

// printing prime number between given two number


int main()
{
    int a;
    
    int b;
    cin>> a >>b ;
    for(int i=a; i<=b; i++){
        int count=0;
        for(int j=1; j<=b; j++){
            if(i%j == 0)count++;
        }
        if(count == 2){
            cout << i <<" ";
        }
        
    }
}
