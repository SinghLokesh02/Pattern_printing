#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void printA()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || j == 7 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printB()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || j == 7 || i == 4 || i == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printC()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || i == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printD()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || i == 7 || j == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printE()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || i == 7 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printF()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printG()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || (i == 4 && j > 3) || (i >= 4 && j == 7) || i == 7 || (i == 4 && j == 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printH()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printI()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || i == 7 || j == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printJ()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 7 || i == 7 || (i > 3 && j == 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}
void printK()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || (i + j == 8 && i < 5) || (i == 5 && j == 4) || (i == 6 && j == 6) || (i == 7 && j == 7))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printL()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || i == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printM()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || (i <= 4 && i == j) || (i <= 4 && i + j == 8))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printN()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || (i == j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printO()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || i == 7 || j == 7 || i == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printP()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || i == 4 || i == 1 || (j == 7 && i <= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printQ()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if ((j == 1 && i < 7) || i == 6 || i == 1 || j == 7 || (i == 5 && j == 4) || (i == 6 && j == 6) || (i == 7 && j == 7))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printR()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || i == 4 || i == 1 || (j == 7 && i <= 4) || (i >= 4 && i == j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printS()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || i == 4 || i == 7 || (i < 4 && j == 1) || (i > 4 && j == 7))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printT()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printU()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || i == 7 || j == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}
void printV()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if ((j == 1 && i <= 4) || (j == 7 && i <= 4) || (i == 5 && j == 2) || (i == 5 && j == 6) || (i == 6 && j == 3) || (i == 6 && j == 5) || (i == 7 && j == 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printW()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || (i >= 4 && i == j) || (i >= 4 && i + j == 8))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printX()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == j || i + j == 8)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printY()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if ((i <= 4 && i == j) || (i <= 4 && i + j == 8) || (i > 4 && j == 4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}

void printZ()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || i == 7 || (i + j == 8))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n\n");
}
int main()
{
    printA();
    printB();
    printC();
    printD();
    printE();
    printF();
    printG();
    printH();
    printI();
    printJ();
    printK();
    printL();
    printM();
    printN();
    printO();
    printP();
    printQ();
    printR();
    printS();
    printT();
    printU();
    printV();
    printW();
    printX();
    printY();
    printZ();

    return 0;
}