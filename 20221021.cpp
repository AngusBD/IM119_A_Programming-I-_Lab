#include<iostream>
using namespace std;

void Q1();
void Q2();
void Q3();
void Q4();
int isPrime(int);

int main(){
    Q2();
    Q3();
    Q4();
}

void Q1(){
    int sideLength = 9;
    // cin >> sideLength;
    for(int i = 0; i < sideLength/2 + 1; i++){
        for(int j = 0; j < sideLength/2 - i; j++){
            cout << '+';
        }
        for(int j = 0; j < 2*i + 1; j++){
            cout << '*';
        }
        cout << endl;
    }
    for(int i = 0; i < sideLength/2; i++){
        for(int j = 0; j < i + 1; j++){
            cout << '+';
        }
        for(int j = 0; j < 2*(sideLength/2 - i) - 1; j++){
            cout << '*';
        }
        cout << endl;
    }
}
//   13 15
//  22   26
//31 33 35 37
//51 53 55 55
//  62   66
//   73 75
void Q2(){
    int num, ans;
    cin >> num;
    for(int i = 0; i < num; i+=7){
        ans = i;
    }
    cout << ans;
}

void Q3(){
    int num1, num2, ans = 0;
    cin >> num1 >> num2;
    if(num1 == num2 && num1 % 7 == 0){
        cout << num1;
    }
    else if(num1 == num2 && num1 % 7 != 0){
        cout << 0;
    }
    else if(num1 < num2){
        for(int i = 7; i < num2; i+=7){
            if(i > num1){
                ans+=i;
            }
            else{
                continue;
            }
        }
        cout << ans;
    }
    else if(num1 > num2){
        for(int i = 7; i < num1; i+=7){
            if(i > num2){
                ans+=i;
            }
            else{
                continue;
            }
        }
        cout << ans;
    }
}

void Q4(){
    int num, ans;
    cin >> num;
	for(int i = 1; i < num; i++){
		if(isPrime(i)){
			ans = i;
		}
	}
    cout << ans;
}

int isPrime(int num){
	if(num == 1){
		return false;
	}
    else{
		for(int i = 2; i < num; i++){
			if(num % i == 0){
				return false;
			}
		}
	}
	return true;
}