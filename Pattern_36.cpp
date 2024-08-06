#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for(int space = 1;space<=n-i;space++){
            cout<<" ";
        }
        for (int j = 2 * i - 1; j >= 1; j-=2)
        {
            cout << j << " ";
        }
        cout<<endl;
    }

    return 0;
}

/*
Input- n = 5

Output:

    1
   3 1
  5 3 1
 7 5 3 1
9 7 5 3 1

*/