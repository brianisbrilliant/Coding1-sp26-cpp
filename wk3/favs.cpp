// Brian Foster
// let's create a list of favorites

/*
    Thursday's Class:
    - don't mix cin and getline(), just use getline()
    - declare your vector<string> outside all loops
    - add should add a single game,
        - add a "bulkadd" option if you like.
    - we'll be working on the homework today
*/

/*
    my pseudocode for the favgames assignment

    int main()
        // setup
        create vector<string> favgames
        string input

        while(true) {
            ask the player what they want to do
            list options
            get input
            
            if they want to quit
                break out of the loop
            else if they want to add a game
                ask them for input
                get input
                add the game to the list
            (extra) else if they want to bulk add games
                ask them to enter multiple games, separated by comma
                get input
                build temp string
                while input.size() != 0
                    use sub_str() to get all characters before a comma,
                    assign that to temp
                    push_back(temp) 
    
            else if they want to edit a game
                ask what game they want to edit
                get input
                try to find that game
                if we found the game
                    ask what the user wants to change it to 
                    get input
                    update the string
                else
                    tell the player we couldn't find that game
            else if they want to remove a game
                ask what game they want to remove
                get input
                try to find that game
                if we found the game
                    remove the game
                else
                    tell the player we couldn't find the game
            else if they want to show the list
                sort the list
                use a for loop to show the list
        }


*/







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
        // (extra) else if they want to bulk add games
        else if(input == "bulk add") {
            
            //     ask them to enter multiple games, separated by comma
            cout << "enter as many games as you like, separated by a comma.\n";
            //     get input
            getline(cin, input);
            //     build temp string
            string temp;
            //     while input.size() != 0
            // for(int i = 0; i < input.size(); i++) {

            // }
            //         use sub_str() to get all characters before a comma,
            int pos = input.find(",");
            //         assign that to temp
            temp = input.sub_str(0, pos);
            //         push_back(temp) 
            favs.push_back(temp);
            
        }
        else if(input == "easy bulk add") {
            cout << "Add games over and over, until 'done'\n";
            while(true) {
                cout << ">>";
                getline(cin, input);
                if(input == "done") {
                    break;
                } else {
                    favs.push_back(input);
                }
            } ;
        }
        else {
            cout << "I don't recognize that input.\n";
        }
    }
}