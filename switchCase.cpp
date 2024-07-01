#include <iostream>
using namespace std;

int main(){
    char button;
    cout << "Input Your Character:";
    cin >> button;

    switch (button)
    {
    case 'a': cout << "hello" << endl;
        break;
        case 'b': cout << "Nameste" << endl;
        break;
        case 'c': cout << "You Enter c" << endl;
        break;
        case 'd':
            cout << "You Enter D" << endl;
            break;
        case 'e':
            cout << "You Enter E" << endl;
            break;


        default:
        cout << "Error 404     Enter you b/w A-E Keys:" << endl;

        break;
    }
}