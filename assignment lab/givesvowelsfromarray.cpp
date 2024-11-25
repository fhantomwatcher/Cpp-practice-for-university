#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the word: ";
    cin >> size;

    char word[size + 1]; // +1 for null terminator
    cout << "Enter the word: ";
    cin >> word;

    cout << "Present vowels: ";
    for (int i = 0; i < strlen(word); i++) {
        char ch = tolower(word[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << word[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
