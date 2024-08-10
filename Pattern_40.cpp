#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            if (j == 0 || j == n - i || i == 1)
            {
                cout << count + j << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
        count++;
    }

    return 0;
}

/*
Output

Enter the number of rows : 7
1 2 3 4 5 6 7
2         7
3       7
4     7
5   7
6 7
7

*/