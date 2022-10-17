#include<iostream>
using namespace std;
int main(){
    int height, amount;
    cin >> height >> amount;
    for(int i = 0; i <= height; i++){
        for(int m = 0; m < amount; m++){
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            for(int k = 0; k < height - i; k++){
                cout << "*";
            }
        }
        cout << endl;
    }
}