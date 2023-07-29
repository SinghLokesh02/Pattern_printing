#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows You want to print : ";
    cin >> n;
    cout << endl;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        count1++;
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << count;
            count++;
        }
        for (int l = count1 - 1; l > 0; l--)
        {
            cout << l ;
        }
        cout << endl;
    }

    return 0;
}

/*
                            Output
                            n = 4
                               1
                             1 2 1
                           1 2 3 2 1
                         1 2 3 4 3 2 1




*/