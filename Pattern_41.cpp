// // Using Vector

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<vector<int>> PascalTriangle(int n)
// {
//     vector<vector<int>> ans(n);
//     for (int i = 0; i < n; i++)
//     {
//         ans[i].resize(i + 1);
//         ans[i][0] = ans[i][i] = 1;
//         for (int j = 1; j < i; j++)
//         {
//             ans[i][j] = (ans[i - 1][j] + ans[i - 1][j - 1]);
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;
//     vector<vector<int>> ans = PascalTriangle(n);
//     for (auto i : ans)
//     {
//         for (int s = 0; s < n - i.size(); s++)
//             cout << " ";
//         for (auto j : i)
//             cout << j << " ";
//         cout << endl;
//     }

//     return 0;
// }


// Using Array

#include <iostream>
 
using namespace std;
// Using Vector
void PascalTriangle(int n)
{
    // Initially all the Value will be initialized to zero
    int arr[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            arr[i][j] = 0;
        }
    }

    // Creating the Pascal Triangle
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = arr[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
         
    }
    
    // Printing the Pascal Triangle
    for (int i = 0; i < n; i++)
    {
        // Spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        // Values
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    PascalTriangle(n);
     

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