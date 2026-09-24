#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int size, arr[size];
    
    cin >> size;
    
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    int sum = 0;
    
    for(int i=0; i<size; i++){
        int count = 0;
        
        for(int j=1; j<=size-1; j++){
            
            if(i % j == 0){
                count++;
            }
        }
        
        if(count == 2){
            sum += arr[i];
            cout<< arr[i] << " ";
        }
    }
    
    cout << "\n" << sum;
    
}
