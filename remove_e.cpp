//Name: Sakib Khan
//Professor: Tong Yi
//This program will remove all "e" from a string

#include<iostream>
using namespace std;

void remove_e(string a){
    int i = a.length();
    for(int x = 0; x <= i; x++){
        if(a[x] == 'e'){
            cout << "";
        }else{
            cout << a[x];
        }
    }
}
