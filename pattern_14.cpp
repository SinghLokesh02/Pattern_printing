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
        int count = i + 1;
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count--;
        }

        cout << endl;
    }

    return 0;
}

/*
                            Output
                            n = 4

                            1
                            2 1
                            3 2 1
                            4 3 2 1





*/