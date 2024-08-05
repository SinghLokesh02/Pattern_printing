#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the Number of rows : ";
    cin >> n;

    // Upper Triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Lower Triangle
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

/*
Input n = 5

Output:
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/