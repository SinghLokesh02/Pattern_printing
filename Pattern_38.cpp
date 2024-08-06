#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "\n\n";
    // Upper
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int star = 0; star <= i; star++)
        {
            if (star == 0 || i == n - 1 || star == i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}

/*
Enter the number of rows : 7


       *
      * *
     *   *
    *     *
   *       *
  *         *
 * * * * * * *



*/