#include <iostream>
using namespace std;
int main()
{
    string arr[5] = {"a", "e", "i", "o", "u"};
    string s = "aeiou";
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (count == 5)
            {
                for (int i = 0; i < 5; i++)
                {
                    arr[i] += s[i];
                }
                count = 0;
            }
            cout << 1 << " " << arr[count] << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}

/*
Output

Enter the number of rows: 4

1 a 1 e 1 i
1 o 1 u 1 aa
1 ee 1 ii 1 oo
1 uu 1 aaa 1 eee

*/