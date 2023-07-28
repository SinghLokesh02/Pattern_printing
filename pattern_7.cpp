#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows You want to print : ";
    cin >> n;
    cout << endl;
    int count = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
        }
        count--;
        cout << endl;
    }

    return 0;
}

/*
                            Output
                            n = 4

                            4 4 4 4
                            3 3 3 3
                            2 2 2 2
                            1 1 1 1


*/