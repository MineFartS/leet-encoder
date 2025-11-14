#include <iostream>
#include <string>
#include <map>
#include <conio.h>
#include <cstdlib>
using namespace std;

map <char, char> table = {
    {'a', '4'},
    {'c', '('},
    {'e', '3'},
    {'g', '6'},
    {'i', '|'},
    {'l', '1'},
    {'o', '0'},
    {'s', '5'},
    {'t', '7'},
    {'v', 'V'},
    {'z', '2'}
};

string encode(string raw) {

    string encoded;
    char eC;

    // Iter through characters in the raw string
    for (char rC : raw) {

        // Set the encoded character to the raw character
        eC = rC;

        // Iter though translation table
        for (auto pair : table) {

            // If the raw character matches the key
            if (rC == pair.first) {

                // Set the encoded character to the pair value
                eC = pair.second;

            }

        }

        // Append the encoded character to the encoded string
        encoded += eC;

    };

    return encoded;

}

string decode(string raw) {

    string encoded;
    char eC;

    // Iter through characters in the raw string
    for (char rC : raw) {

        // Set the encoded character to the raw character
        eC = rC;

        // Iter though translation table
        for (auto pair : table) {

            // If the raw character matches the key
            if (rC == pair.second) {

                // Set the encoded character to the pair value
                eC = pair.first;

            }

        }

        // Append the encoded character to the encoded string
        encoded += eC;

    };

    return encoded;

}


int main() {

	string raw;
    string output;
    char method;

    // Clear the terminal window
    system("cls");

    // Ask for the method
    cout << "Leetspeak Encoder\n\n";
    cout << "Select a Method:\n";
    cout << "\t1 - Encode\n";
    cout << "\t2 - Decode\n\n";

    cout << "Method: ";
    method = _getch();

    // Clear the terminal window
    system("cls");

    // If encoding
    if (method == '1') {

        // Ask for the original string as input
        cout << "Original: ";
        getline(std::cin, raw);

        // Print the encoded string to the console
        cout << "Encoded: " << encode(raw);

    } // If decoding
    else if (method == '2') {

        // Ask for the original string as input
        cout << "Encoded: ";
        getline(std::cin, raw);

        // Print the encoded string to the console
        cout << "Original: " << decode(raw);

    }
    
    // Wait for user input to close
    std::cout << "\n\nPress any key to continue ...";
    std::cin.get();
    
    // Restart
    main();
	
	return 0;

}
