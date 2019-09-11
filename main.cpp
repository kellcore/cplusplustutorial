#include <iostream>
#include <cmath>
// have to include cmath to do math functions in c++

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

    // char grade = 'A';
    // string phrase = "It is your birthday.";
    // int age = 32;
    // // float -> floating point
    // double gpa = 3.5;
    // bool isHere = true;

    // phrase[11] = 'm';

    // cout << phrase.length() << endl;
    // cout << phrase.find("your", 0) << endl;
    // cout << phrase.substr(11, 8) << endl;
    // string subphrase;
    // subphrase = phrase.substr(11, 8);
    // cout << subphrase << endl;

    // cout << 10 % 3 << endl;

    // cout << pow(2, 5) << endl;

    // cout << sqrt(36) << endl;

    cout << fmin(3, 10) << endl;

    return 0;
}
// char -> character

// cout = console out -> endl = end line
// int -> integer -> whole number -> no decimals!
// int characterAge;
// characterAge = 50; is also valid syntax
// substr -> returns part of a string -> 1st parameter is starting index position, 2nd is how many characters you want returned
// % -> modulus operator -> gives you the remainder (ex. 10 % 3 = "ten mod 3" = 1)
// order of operations = PEMDAS
// when you do math with two ints, you'll get an integer value back even if the result should have a decimal (ex. 10 / 3 returns 3 even though there's a remainder) -> you have to make both ints into decimals to get back accurate answer (ex. 10.0 / 3.0 returns 3.3333)
// one decimal and one int returns a decimal
// pow(2, 5) takes 2 raised to the power of 5 -> 2x2x2x2x2 -> returns 32
// sqrt returns square root of the argument you pass to it (ex. sqrt(36) returns 6)
// can pass whole and decimal numbers as parameters inside pow and sqrt
// round will round a number up or down following traditional math rules (ex. round(4.2)returns 4 but round(4.7) returns 5)
// ceil will round up to the next whole number regardless of decimal point (ex. ceil(4.1) returns 5)
// floor will round down regardless of decimal point (ex. floor(4.8) returns 4)
// fmax takes two parameters and returns the bigger number (ex. fmax(3, 10) returns 10)
// fmin takes two parameters and returns the smaller number (ex. fmin(3, 10) returns 3)