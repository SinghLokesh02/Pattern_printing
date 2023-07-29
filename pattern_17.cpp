#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows You want to print : ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            char ch = 'A' + n - i - 1;
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}

/*
                            Output
                            n = 4

                            D D D D
                            C C C
                            B B
                            A





*/