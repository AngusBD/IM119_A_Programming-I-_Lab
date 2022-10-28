#include <iostream>
using namespace std;

void prob_1();
void prob_2();

int main(void) {
    cout << "Q1: " << endl;
    prob_1();
    cout << "Q2: " << endl;
    prob_2();

    return 0;
}

void prob_1() {

    int x1, y1, x2, y2, edge = 0; // 設立一個變數儲存走了幾段路程
    cin >> x1 >> y1 >> x2 >> y2; // 輸入起點和終點的座標

    // 此題x軸為縱軸，y軸為橫軸
    for (; x1 != x2 || y1 != y2; edge++) { // 當目前位置(x, y)不等於終點時，執行迴圈
        if (y1 == 0) { // 如果 y = 0，則往右下走到y軸，所以要另 y = x + 1，x = 0
            y1 = ++x1;
            x1 = 0;
        }
        else {
            x1++; // 如果不為0，則往右上走，所以要另 x = x + 1，y = y - 1
            y1--;
        }
    }

    cout << edge << endl;

    return;
}

void prob_2() {

    int goods[10], amount, temp, sum;

    while(cin >> amount) {
        if (amount > 10 || amount < 0) {    // 若商品數量大於10或小於0，則輸出錯誤訊息
            cout << "error" << endl;
        } else {
            break;                          // 否則跳出迴圈
        }
    }

    for (int i = 0; i < amount; i++) {      
        cin >> temp;                        // 輸入商品價格
        if (temp == -1) {                   // 若輸入-1則結算商品數量及總金額
            amount = i;                     // amount設定為i，代表陣列中最後一筆商品價錢的索引值
            break;
        } else if (temp != -1 && temp <= 0) {    // 若輸入的商品價格小於0，則輸出錯誤訊息
            cout << "error" << endl;
            i--;                                // 將i減1，代表此次輸入無效
        } else {
            goods[i] = temp;                // 將商品價格存入陣列
        }
    }

    cout << "total products:" << endl <<  amount << endl;

    cout << "each price:" << endl;

    for (int i = 0; i < amount; i++) {      // 輸出每個商品的價格，直到陣列中最後一筆商品價錢的索引值被輸出
        cout << goods[i] << endl;
        sum += goods[i];                        // 將商品價格加總
    }

    cout << "total amount:" << endl << sum;  // 輸出總金額

    return;
}