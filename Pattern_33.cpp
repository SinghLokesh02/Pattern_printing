#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    char ch = '@';
    for (int i = n; i >= 1; i--)
    {
        ch += i;
        for (int j = 1; j <= i; j++)
        {
           cout<<ch--<<" ";  
        }
        cout << endl;
    }
     

    return 0;
}

/*
Input -> n = 5

Output 
E D C B A
D C B A
C B A
B A
A 

*/