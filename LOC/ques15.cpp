#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input string
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Counters for alphabets, digits and special characters
    int alphabets = 0, digits = 0, specialChars = 0;

    // Loop through each character in the string
    for (char c : input) {
        if (isalpha(c)) {
            alphabets++;
        } else if (isdigit(c)) {
            digits++;
        } else {
            specialChars++;
        }
    }

    // Output the counts
    cout << "Total alphabets: " << alphabets << endl;
    cout << "Total digits: " << digits << endl;
    cout << "Total special characters: " << specialChars << endl;

    return 0;
}