#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    
    for(int i=1; i<=n; i++){
        
        char c = 'A' + (3 * i - 1) % 26;
        cout << c << " ";
        
    }
    return 0;
}
