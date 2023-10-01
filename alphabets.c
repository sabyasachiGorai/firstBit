#include <stdio.h>
int i;

void printA(int row, int i)
{
    int column = row - 2;
    for (int j = 1; j <= column; j++)
    {
        if (i == 1 || i == (row / 2) + 1)
        {
            printf("* ");
        }
        else if (j == 1 || j == column)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf(" ");
}

void printB(int row, int i)
{
    int column = row - 2;
    for (int j = 1; j <= column; j++)
        {
            if (i == 1 && j == column || i == row / 2 + 1 && j == column || i == row && j == column)
            {
                printf("  ");
            }
            else if (i == 1 || i == row / 2 + 1 || i == row || j == 1 || j == column)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("  ");
}

void printC(int row, int i)
{
    int column = row -2;
    for (int j = 1; j <= column; j++)
    {
        if ((i == 1 && j == 1) || (i == row && j == 1))
        {
            printf("  ");
        }
        else if (i == 1 || i == row)
        {
            printf("* ");
        }
        else if (j == 1)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printD(int row, int i)
{
    int column = row - 2;
    for (int j = 1; j <= column; j++)
    {
        if ((i == 1 && j == column) || (i == row && j == column))
        {
            printf("  ");
        }
        else if (i == 1 || i == row || j == 1|| j == column)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printE(int row, int i)
{
    int column = row - 2;
    for (int j = 1; j <= column; j++)
    {
        if (i == row || j == 1 || i == 1 || i == row / 2 + 1)
        {
            printf("* ");
        }

        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printF(int row, int i)
{
    int column = row -2;
    for (int j = 1; j <= column; j++)
    {
        if (j == 1 || i == 1 || i == row / 2 + 1)
        {
            printf("* ");
        }

        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printG(int row, int i)
{
    int column = row -2;
    for (int j = 1; j <= column; j++)
    {
        if (i == 1 || i == row || j == 1 || (j == column && i > row / 2))
        {
            printf("* ");
        }
        else if (i == (row / 2) + 1 && j > 2)
        {
            printf("* ");
        }

        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printH(int row, int i)
{
    int column = row -2;
    for (int j = 1; j <= column; j++)
    {
        if (i == (row / 2) + 1)
        {
            printf("* ");
        }
        else if (j == 1 || j == column)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printI(int row, int i)
{
    int column = row -2;
    for (int j = 1; j <= column; j++)
    {
        if (i == 1 || i == row)
        {
            printf("* ");
        }
        else if (j == column / 2 + 1)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printJ(int row, int i)
{
    int column = row - 2;
    for (int j = 1; j <= column; j++)
    {
        if (i == row && j == 1 || i == row && j == column)
        {
            printf("  ");
        }

        else if (i == 1 || j == column || i == row || i == row - 1 && j == 1)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printK(int row, int i)
{
    int column = row - 2;
    for (int j = 1; j <= column; j++)
    {
        if (j == 1 || i + j == 6 || i - j == 2)
        {
            printf("* ");
        }

        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printL(int row, int i)
{
    int column = row -2;
    for (int j = 1; j <= column; j++)
    {
        if (i == row || j == 1)
        {
            printf("* ");
        }

        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printM(int row, int i)
{
    int column = row -2;
    for (int j = 1; j <= column; j++)
        {
            if (j == 1 || j == column)
            {
                printf("* ");
            }
            else if (i == j && j <= column / 2 + 1|| (i == j /2 && j > column /2 +1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("  ");
}

void printN(int row, int i)
{
    int column = row - 2;
    for (int j = 1; j <= column + 2; j++)
    {
        if (i == j)
        {
            printf("* ");
        }
        else if (j == 1 || j == column + 2)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printO(int row, int i)
{
    int column = row - 2;

    for (int j = 1; j <= column; j++)
    {
        if (i == 1 && j == 1 || i == 1 && j == column || i == row && j == 1 || i == row && j == column)
        {
            printf("  ");
        }

        else if (i == 1 || i == row || j == 1 || j == column)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }

    printf("  ");
}

void printP(int row, int i)
{
    int column = row - 2;

    for (int j = 1; j <= column; j++)
    {
        if (i == 1 || i == (row / 2) + 1 || j == 1 || j == column && i <= row / 2)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printQ(int row, int i)
{
    int column = row - 2;

    for (int j = 1; j <= column; j++)
    {
        if (i == 1 && j == 1 || i == 1 && j == column || i == row - 1 && j == 1 || i == row - 1 && j == column || i == row && j == 1)
        {
            printf(" ");
        }

        else if (i == 1 || i == row - 1 || j == 1 || j == column)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        printf("  ");
    }
}

void printR(int row, int i)
{
    int column = row - 2;

    for (int j = 1; j <= column; j++)
    {
        if (i == 1 || i == (row / 2) + 1 || j == 1 || j == column && i <= (row / 2) + 1 || i == j + 2 && i > (row / 2) + 1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        printf("  ");
    }
}

void printS(int row, int i)
{
    int column = row - 2;

    for (int j = 1; j <= column; j++)
    {
        if (i == 1 || i == (row / 2) + 1 || i == row || j == 1 && i <= (row / 2) || j == column && i > (row / 2) + 1)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printT(int row, int i)
{
    int column = row - 2;

    for (int j = 1; j <= column; j++)
    {
        if (i == 1)
        {
            printf("* ");
        }
        else if (j == column / 2 + 1)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printU(int row, int i)
{
    int column = row - 2;
    for (int j = 1; j <= column; j++)
    {
        if (i == row && j == 1 || i == row && j == column)
        {
            printf("  ");
        }
        else if (i == row || j == 1 || j == column)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printV(int row, int i)
{
    for (int k = 1; k < i; k++)
    {
        printf(" ");
    }
    for (int j = 0; j < 1; j++)
    {
        printf("*");
    }
    for (int k = row - i; k >= 1; k--)
    {
        printf("  ");
    }
    for (int j = 0; j < 1; j++)
    {
        printf("*");
    }
    for (int k = 1; k <= i - 1; k++)
    {
        printf(" ");
    }
    printf("  ");
}

void printW(int row, int i)
{
    int column = row - 2;

    for (int j = 1; j <= column; j++)
    {
        if (j == 1 || j == column || j == column / 2 + 1 && i == column || i == row - 1 && j % 2 == 0)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        printf("  ");
    }
}

void printX(int row, int i)
{
    int column = row - 2;

    for (int j = 1; j <= column; j++)
    {
        if (i == 1 && j == 1 || i == 1 && j == column || i == row && j == 1 || i == row && j == column || i + j == row || i == j + 1)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("  ");
}

void printY(int row, int i)
{
    int column = row - 2;
    for (int j = 1; j <= column; j++)
    {
        if (i <= column / 2 && j == 1 || i <= column / 2 && j == column || j == column / 2 + 1 && i >= row / 2 + 1 || i == j + 1 && i + j == column || i == j - 1 && i + j == row)
        {
            printf("* ");
        }
        else
            printf("  ");
    }
    printf("  ");
}

void printZ(int row, int i)
{
    int column = row - 2;

    for (int j = 1; j <= column; j++)
    {
        if (i == 1 || i == row || i + j == row)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        printf("  ");
    }
}