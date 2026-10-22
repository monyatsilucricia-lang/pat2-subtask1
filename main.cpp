#include <iostream>
#include <string>
using namespace std;

// Function 1: Decimal to Binary
string decimalToBinary(int decimal)
{
    if (decimal == 0)
        return "0";

    string binary = "";

    while (decimal > 0)
    {
        binary = char((decimal % 2) + '0') + binary;
        decimal = decimal / 2;
    }

    return binary;
}

// Function 2: Binary to Decimal
int binaryToDecimal(string binary)
{
    int decimal = 0;

    for (char digit : binary)
    {
        decimal = decimal * 2 + (digit - '0');
    }

    return decimal;
}

// Function 3: Decimal to Hexadecimal
string decimalToHexadecimal(int decimal)
{
    if (decimal == 0)
        return "0";

    string hexadecimal = "";
    string digits = "0123456789ABCDEF";

    while (decimal > 0)
    {
        hexadecimal = digits[decimal % 16] + hexadecimal;
        decimal = decimal / 16;
    }

    return hexadecimal;
}

int main()
{
    int number;
    string binary;

    cout << "Enter a decimal number: ";
    cin >> number;

    cout << "Binary: "
         << decimalToBinary(number) << endl;

    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal: "
         << binaryToDecimal(binary) << endl;

    cout << "Enter another decimal number: ";
    cin >> number;

    cout << "Hexadecimal: "
         << decimalToHexadecimal(number) << endl;

    return 0;
}
