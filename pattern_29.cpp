#include <iostream>
using namespace std;
int main()
{
    string s = "aeiou";
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int count = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++){
            if(count == 5)count = 0;
            cout<<1<<" "<<s[count]<<" ";
            count++;
        }
        cout<<endl;
    }    
    return 0;
}


/*
Output

Enter the number of rows: 4

1 a 1 e 1 i
1 o 1 u 1 a
1 e 1 i 1 o
1 u 1 a 1 e

*/