#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
          if(j == i || i + j == n+1 || (i==1 || i == n ) && j%2 == 1)cout<<"* ";
          else cout<<"  ";
        }
        cout << endl;
    }
     

    return 0;
}

/*
Output

input - 7
*   *   *   *
  *       *
    *   *
      *
    *   *
  *       *
*   *   *   *
*/