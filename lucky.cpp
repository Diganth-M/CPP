#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cin >> n;
    } while(n % 3 != 0 || n % 5 != 0);
    
    cout << "Lucky number found: " << n << endl;
    return 0;
}


// approach 2

// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true){
    int n;
    cin>> n; 
    
    if(n % 3 == 0 && n % 5 == 0){
        cout<< "Lucky number found: " << n;
        break;
    }
    }
}
