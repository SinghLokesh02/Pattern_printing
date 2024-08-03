#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << i + 2;
            }
            else
            {
                cout << i + 2 << "*";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << i + 2;
            }
            else
            {
                cout << i + 2 << "*";
            }
        }
        cout << endl;
    }

    return 0;
}

/*
N = 7 

Output:
7*7*7*7*7
6*6*6*6
5*5*5
4*4
3
3
4*4
5*5*5
6*6*6*6
7*7*7*7*7

*/