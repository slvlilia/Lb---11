
#include <iostream>
#include <conio.h>

#include <locale.h>

#define N 10

using namespace std;

int main()

{
    setlocale(0, "");

    int a[N][N];

    int n = N + 1;

    int A = 0, B = 0, S, S1 = 0, S2 = 0;

    while (n > N) // перевірка правильності введення

    {

        printf("\nВвед1ть розм1рн1сть матриц1: n = ");

        scanf_s("%d", &n);

    }

    while (A >= B)

    {

        printf("\nВвед1ть границ1 пром1жку A i B: ");

        scanf_s("%d %d", &A, &B);

    }

    printf("\n\nМатриця А:");

    for (int i = 0; i < n; i++)

    {
        printf("\n\n");

        for (int j = 0; j < n; j++)

        {
            a[i][j] = rand() % (B - A) + A;

            printf("%5d", a[i][j]);

        }

    }

    for (int i = 0; i < n; i++)// підрахунок суми

    {

        S1 += a[i][i];

        S2 += a[n - 1 - i][i];

    }

    S = S1 + S2;

    printf("\n\nСума діагональних елемент1в S = %7d", S);

    return 0;

}
