#include <iostream>
using namespace std;

int main() {
    double num1, num2, ans;
    char Operator;

    cout << "請輸入第一個數字: ";
    cin >> num1;

    cout << "請輸入運算符號 (+, -, *, /): ";
    cin >> Operator;

    cout << "請輸入第二個數字: ";
    cin >> num2;

    switch (Operator) {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            ans = num1 / num2;
        }
        else {
            cout << "除數不能為零";
            return 1;
        }
        break;
    default:
        cout << "錯誤的運算符號";
        return 1;
    }

    cout << "結果: " << ans << endl;
    return 0;
}