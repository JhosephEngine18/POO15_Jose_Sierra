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

void Position(string arr[], int size)
{
    cout << "Type the word you want to search its position" << endl;
    cin >> LookingWord;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == LookingWord)
        {
            cout << LookingWord << " is in position: " << i << endl;;
            break;
        }
        else if (arr[i] != LookingWord && i == size)
        {
            cout << "The word was not found" << endl;
        }
        
    }
}

int times(string arr[], int size)
{
    int amount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == LookingWord)
        {
            amount++;
        }
        
    }
    return amount;
}

int main()
{
    cout << "Type 10 words" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> Words[i];
    }
    Position(Words, 10);
    cout << "The word is " << times(Words, 10) << " times inside of the list" << endl;

    return 0;
    
}