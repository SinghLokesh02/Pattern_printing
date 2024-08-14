#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    // Upper
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int star = 0; star < 2 * i + 1; star++)
        {
            if(star == 0 || star == 2*i)cout<<"* ";
            else cout<<"  ";
        }
        cout << endl;
    }
    // Lower
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int star = 0; star < 2 * i + 1; star++)
        {
            if(star == 0 || star == 2*i)cout<<"* ";
                else cout<<"  ";
        }
        cout << endl;
    }
    return 0;
}



/*
Output

Enter the number of rows : 5
          * 
        *   * 
      *       * 
    *           * 
  *               * 
*                   * 
  *               * 
    *           * 
      *       * 
        *   * 
          *

*/
