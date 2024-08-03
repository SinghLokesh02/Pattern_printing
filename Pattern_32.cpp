#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int sum = (n*n+n)/2;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << sum--;
            }
            else
            {
                cout << sum--  << "*";
            }
        }
        cout << endl;
    }
     

    return 0;
}

/*
Input n = 5

Output:

15*14*13*12*11
10*9*8*7
6*5*4
3*2
1

*/