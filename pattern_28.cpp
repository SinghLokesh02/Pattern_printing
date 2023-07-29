#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int star = 0; star <= 2 * (n - i - 1); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*
                                                     Enter the number of rows : 5

                                                             *********
                                                              *******
                                                               *****
                                                                ***
                                                                 *


*/