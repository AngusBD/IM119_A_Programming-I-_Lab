#include<iostream>
using namespace std;
int main(){
    int length = 7;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length - i -1; j++){
            cout << "+";
        }
        for(int k = 0; k < i + 1; k++){
            cout << "*";
        }
        for(int l = 0; l < i ; l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < length - 1; i++){
        for(int j = 0; j < i+1; j++){
            cout << "+";
        }
        for(int k = 0; k < length - i - 1; k++){
            cout << "*";
        }
        for(int l = 0; l < length - i - 2 ; l++){
            cout << "*";
        }
        cout << endl;
    }
}