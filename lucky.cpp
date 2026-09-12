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
