#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the any odd number of rows : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1 || j == 0 || j == n - 1 || (i <= n / 2 && j <= i) || (i > n / 2 && j < n - i) || (i <= n / 2 && j >= n - i) || (i > n / 2 && j >= i))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

/*
Output 

Enter the any odd number of rows : 9
*               *
* *           * * 
* * *       * * *
* * * *   * * * *
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *


*/