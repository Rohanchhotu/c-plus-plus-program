#include<iostream>
using namespace std;

int main(){
    float n1, n2;
    cout << "Inter 2 Number:";
    cin >> n1 >> n2;
    char op;
    cout << "Your Operator is: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    default:
        cout << "Enter Vaild Operator"<< endl;
        break;
    }
}