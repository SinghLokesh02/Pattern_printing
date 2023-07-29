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
        for (int k = 0; k <n-i; k++)
        {
            cout<<"*";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
       
        cout << endl;
    }

    return 0;
}

/*
                            Output
                            n = 4

                            ****
                            ***
                            **
                            *





*/