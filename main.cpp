#include <iostream>

using namespace std;

int main() // this is a function in c++!
{
    // cout << "Hello world" << endl;
    // cout << "Kelly" << endl;
    // string characterName = "Nancy";
    // int characterAge = 50;
    // cout << "There once was a woman named " << characterName << endl;
    // cout << "She was " << characterAge << " years old" << endl;
    // characterName = "Kathy";
    // characterAge = 55;
    // cout << "She liked the name " << characterName << endl;
    // cout << "And enjoyed being " << characterAge << endl;

    char grade = 'A';
    string phrase = "It is your birthday.";
    int age = 32;
    // float -> floating point
    double gpa = 3.5;
    bool isHere = true;

    phrase[11] = 'm';

    // cout << phrase.length() << endl;
    // cout << phrase.find("your", 0) << endl;

    // cout << phrase.substr(11, 8) << endl;

    string subphrase;

    subphrase = phrase.substr(11, 8);

    cout << subphrase << endl;

    return 0;
}
// char -> character

// cout = console out -> endl = end line
// int -> integer -> whole number -> no decimals!
// int characterAge;
// characterAge = 50; is also valid syntax
// substr -> returns part of a string -> 1st parameter is starting index position, 2nd is how many characters you want returned