#include <iostream>
using namespace std;

void print_R()
{
    int count = 6;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0 || i == 0 || i == 4 || (j == 9 && i <= 4))
                cout << "*";
            else if ((j == 2 && i == 5) || (j == 4 && i == 6) || (j == 6 && i == 7) || (j == 8 && i == 8) || (j == 9 && i == 9))
            {
                cout << "*";
            }
            else
                cout << " ";
        }

        cout << endl;
    }
}
void print_I()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || i == 9 || j == 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void print_T()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || j == 4)
                cout << "*";

            else
                cout << " ";
        }
        cout << endl;
    }
}
void print_K()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0)
                cout << "*";
            if ((i + j == 6 && i <= 4) || (i - 1 == j && i > 4))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{

    cout << "\n\n";

    print_R();
    cout << "\n\n";
    print_I();
    cout << "\n\n";
    print_T();
    cout << "\n\n";
    print_I();
    cout << "\n\n";
    print_K();
    cout << endl;

    return 0;
}