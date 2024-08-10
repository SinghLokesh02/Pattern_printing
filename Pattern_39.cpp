#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
            {
                cout << j << " ";
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
Enter the number of rows : 7
      1
     1 2
    1   3
   1     4
  1       5
 1         6
1 2 3 4 5 6 7

*/