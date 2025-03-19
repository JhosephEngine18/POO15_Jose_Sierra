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
string LookingWord, WordStored;
int position;

void words(string Words[], int size)
{
    cin >> Words[size];
}

int main()
{
    cout << "Type 10 words" << endl;

    for (int i = 0; i < 10; i++)
    {
        words(Words, i);
    }
    cout << "Type the word you want to search its position" << endl;
    cin >> LookingWord;
    
    for (int i = 0; i < 10; i++)
    {
        if (Words[i] == LookingWord)
        {
            cout << LookingWord << " is in position: " << position;
            break;
        }
        else if (Words[i] != LookingWord)
        {
            position++;

        }
        
    }
    
    return 0;
    
}