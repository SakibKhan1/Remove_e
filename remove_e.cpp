//Name: Sakib Khan
//Professor: Tong Yi
//This program will remove all "e" from a string

#include<iostream>
using namespace std;

#include <iostream>
#include <algorithm>
using namespace std;

void remove_e(string & sentence)
{
    sentence.erase(remove(sentence.begin(), sentence.end(), 'e'), sentence.end());
}
