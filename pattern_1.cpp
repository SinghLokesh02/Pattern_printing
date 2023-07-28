#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows for printing\n";
    cin >> n;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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
                for n = 3
                1 2 3
                4 5 6
                7 8 9

*/