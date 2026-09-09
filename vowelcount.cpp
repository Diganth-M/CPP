#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, text); // Reads the full line including spaces

    for (char c : text) {
        // Convert to lowercase for easy comparison
        char lowerC = tolower(c);
        
        // Check if the character is a vowel
        if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
            count++;
        }
    }

    cout << "Total number of vowels: " << count << endl;

    return 0;
}
