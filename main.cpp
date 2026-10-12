#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string message;

    cout << "Enter a message: ";
    getline(cin, message);
    // Store the Morse code for each character
    string morse[] = {
        ".--", "-...", "-.-.", "-..", ".", "..-.",
        "--.", "....", "..", ".---", "-.-", ".-..",
        "--", "-.", "---", ".--.", "--.-", ".-.",
        "...", "-", "..-", "...-", ".--", "-..-",
        "-.--", "--.."
    };

    for (char ch : message)
    {
        ch = toupper(ch);

        if (ch >= 'A' && ch <= 'Z')
        {
            int index = ch - 'A';
            // Display the translated Morse code

            cout << ch << ": " << morse[index] << endl;
        }
    }

    return 0;
}//
// Created by B5 Student on 10/12/2026.
//
