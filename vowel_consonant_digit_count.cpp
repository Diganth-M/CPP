#include<bits/stdc++.h>
using namespace std;

// vowels count
// consonants count
// digit count

int main()
{
    string str;
    getline(cin, str);
    int vow_count = 0,  const_count = 0, dig_count = 0;
    for(char c : str){
        char low = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vow_count++;
            
        }
        else if(isdigit(c)){
            dig_count++;
        }
        else {
            const_count++;
        }
        
        
        
    }
    cout<< "Vowels :        " << vow_count <<"\n";
    cout<< "Consonants :    " << const_count <<"\n";
    cout<< "Digits :        " << dig_count;
}
