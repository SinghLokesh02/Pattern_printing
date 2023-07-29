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
        int count = n - i - 1;
        for (int j = 0; j <= i; j++)
        {
            char ch = 'A' + count;
            cout << ch << " ";
            count++;
        }

        cout << endl;
    }

    return 0;
}

/*
                            Output
                            n = 4

                            D
                            C D
                            B C D
                            A B C D





*/