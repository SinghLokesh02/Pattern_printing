#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        int sum = (i * i + i) / 2;
        sum -= i;
        for (int j = 1; j <= i; j++)
        {

            if (j == i)
            {
                cout << ++sum;
            }
            else
            {
                cout << ++sum << "*";
            }
        }
        cout << endl;
    }

    return 0;
}

/*
Input n = 5

Output:
11*12*13*14*15
7*8*9*10
4*5*6
2*3
1
*/