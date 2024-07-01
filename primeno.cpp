#include <iostream>
using namespace std;

void main()
{
    int a, b;
    cin >> a >> b;

    for (int num = a; num <= b; i++)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << end;
        }
    }

    return 0;
}