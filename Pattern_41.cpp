#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> PascalTriangle(int n)
{
    vector<vector<int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i].resize(i + 1);
        ans[i][0] = ans[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            ans[i][j] = (ans[i - 1][j] + ans[i - 1][j - 1]);
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    vector<vector<int>> ans = PascalTriangle(n);
    for (auto i : ans)
    {
        for (int s = 0; s < n - i.size(); s++)
            cout << " ";
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}

/*
Output

Enter the number of rows : 5
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1


*/