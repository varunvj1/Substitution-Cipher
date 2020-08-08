#include <iostream>
using namespace std;

int main()
{

    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZLMNPAJFAKHFBSDMBCDSJBSDKPJQakfghskfjgbfkhvkjsnjvba"};

    cout << "Enter your secret message: ";

    string message;
    getline(cin, message);

    cout << endl;
    cout << "Encrypting message...." << endl;

    cout << "\nEncrypted message: ";

    int alpha_index;
    string encrypted;
    for (size_t i{0}; i < message.length(); i++)
    {
        if (isalpha(message.at(i)))
        {
            alpha_index = alphabet.find(message.at(i));
            // encrypted += key.at(alpha_index);
            cout << key.at(alpha_index);
        }
        else
        {
            cout << message.at(i);
        }
    }
}