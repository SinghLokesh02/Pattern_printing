#include <iostream>
using namespace std;

void print_A()
{
    int count = 6;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 9)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}
void print_N()
{
    int count = 6;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0 || j == 9 || (i == j))
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}
void print_E()
{
    int count = 6;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || i == 4 || i == 9 || j == 0)
                cout << "*";
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

    print_A();
    cout << "\n\n";
    print_N();
    cout << "\n\n";
    print_I();
    cout << "\n\n";
    print_K();
    cout << "\n\n";
    print_E();
    cout << "\n\n";
    print_T();
    cout << endl;

    return 0;
}