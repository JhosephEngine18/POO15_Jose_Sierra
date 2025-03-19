/*
Universidad Amerike
Author: José Sierra
Pratice#:15
Date: 18/03/25
Description: This code tells you the position in an array of the words you typed
*/

#include <iostream>
using namespace std;

string Words[10];
string LookingWord;
int amount;

void words(string Words[], int size)
{
    cin >> Words[size];
}

void Position()
{
    cout << "Type the word you want to search its position" << endl;
    cin >> LookingWord;
    
    for (int i = 0; i < 10; i++)
    {
        if (Words[i] == LookingWord)
        {
            cout << LookingWord << " is in position: " << i << endl;;
            break;
        }
        else if (Words[i] != LookingWord && i == 9)
        {
            cout << "The word was not found" << endl;
            Position();
        }
        
    }
}

void times()
{
    for (int i = 0; i < 10; i++)
    {
        if (Words[i] == LookingWord)
        {
            amount++;
        }
        
    }
}

int main()
{
    cout << "Type 10 words" << endl;

    for (int i = 0; i < 10; i++)
    {
        words(Words, i);
    }
    
    Position();
    times();
    cout << "The word is " << amount << " times inside of the list" << endl;

    return 0;
    
}