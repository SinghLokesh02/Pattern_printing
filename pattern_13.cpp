#include <iostream>
using namespace std;
int main()
{
    // Method - 1
    int n;
    cout << "Enter the rows You want to print : ";
    cin >> n;
    cout << endl;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        count -= i;
        cout << endl;
    }

    // Method 2
    // for (int i = 0; i < n; i++)
    // {
    //     int count = i+1;
    //     for (int j = 0; j <=i; j++)
    //     {
    //         cout << count << " ";
    //         count++;
    //     }

    //     cout << endl;
    // }

    return 0;
}

/*
                            Output
                            n = 5

                            1
                            2 3
                            3 4 5
                            4 5 6 7
                            5 6 7 8 9





*/