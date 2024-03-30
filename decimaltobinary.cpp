#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    // Binary conversion
    int binary{ 0 }, binaryPower{ 1 };
    int temp = num;
    while (temp > 0) {
        binary += (temp % 2) * binaryPower;
        temp /= 2;
        binaryPower *= 10;
    }

    // Resetting variables for octal conversion
    temp = num;

    // Octal conversion
    int octal{ 0 }, octalPower{ 1 };
    while (temp > 0) {
        octal += (temp % 8) * octalPower;
        temp /= 8;
        octalPower *= 10;
    }

    // Resetting variables for hexadecimal conversion
    temp = num;

    // Hexadecimal conversion
    string hexadecimal = "";
    int rem;
    while (temp > 0) {
        rem = temp % 16;
        char ch;
        if (rem < 10) {
            ch = rem + 48;
        }
        else {
            ch = rem + 55;
        }
        hexadecimal = ch + hexadecimal;
        temp = temp / 16;
    }

    cout << "Binary representation: " << binary << endl;
    cout << "Octal representation: " << octal << endl;
    cout << "Hexadecimal representation: " << hexadecimal << endl;

    return 0;
}
