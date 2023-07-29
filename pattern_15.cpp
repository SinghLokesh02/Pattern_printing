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
        for (int j = 0; j < n; j++)
        {
            char ch = 'A' + i;
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}

/*
                            Output
                            n = 3

                            A A A A
                            B B B B
                            C C C C





*/