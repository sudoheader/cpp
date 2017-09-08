#include <iostream>

using namespace std;

int main()
{

    string original = "super flying monkeys are aweseome, aren't they?\n";
    cout << "Original data = " << original;
    string encrypted = "";
    string unencrypt = "";
    char key = 'x';

    for (int temp = 0; temp < original.size(); temp++){
        encrypted += original[temp] ^ (int(key) + temp) % 255;
    }
    cout << "\nEncrypted data = " << encrypted << "\n";

    for (int temp = 0; temp < original.size(); temp++){
        unencrypt += encrypted[temp] ^ (int(key) + temp) % 255;
    }
    cout << "\nUnencrypted data = " << unencrypt;
}