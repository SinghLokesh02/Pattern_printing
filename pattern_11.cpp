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
        int count = 1;
        for (int j = 0; j <n-i; j++)
        {
            cout << count << " ";
            count++;
        }

        cout << endl;
    }

    return 0;
}

/*
                            Output
                            n = 5

                            1 2 3 4 5
                            1 2 3 4
                            1 2 3
                            1 2
                            1
                            
                             



*/