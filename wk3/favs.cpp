// Brian Foster
// let's create a list of favorites

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    while(true) {
        cout << "What would you like to do?\n";
        cout << "You can 'add', 'edit', 'remove', 'show', or 'quit'.\n";

        string input;
        getline(cin, input);

        if(input == "quit") {
            cout << "Thanks for playing.\n";
            break;
        }
        else if(input == "add") {
            ///
        }
        else {
            cout << "I don't recognize that input.\n";
        }
    }
}