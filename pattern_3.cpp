#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows You want to print\n";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << n-j<< " ";
        }
        cout << endl;
    }

    return 0;
}

/*
                            Output
                            n = 4

                            4 3 2 1
                            4 3 2 1
                            4 3 2 1
                            4 3 2 1

*/