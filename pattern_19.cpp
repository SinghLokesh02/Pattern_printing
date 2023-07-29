#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows You want to print : ";
    cin >> n;
    cout << endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = 'A' + count;
            cout << ch << " ";
            count++;
        }
        count -= 2;
        cout << endl;
    }

    return 0;
}

/*
                            Output
                            n = 3

                            A B C
                            B C D
                            D E F





*/