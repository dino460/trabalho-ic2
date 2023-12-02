#include "sorts.h"


int quick_moves    = 0;
int quick_compares = 0;


void qsort(string* a, int L, int R)
{
    int i = L;
    int j = R;
    string x = a[(L + R) / 2];
    quick_moves++;

    do
    {
        while (a[i] < x)
        {
            quick_compares++;
            i += 1;
        }

        while (x < a[j])
        {
            quick_compares++;
            j -= 1;
        }

        if (i <= j)
        {
            string w = a[i];
            a[i] = a[j];
            a[j] = w;
            quick_moves += 3;

            i += 1;
            j -= 1;
        }
    }
    while (i <= j);
    
    if (L < j)
    {
        qsort(a, L, j);
    }

    if (i < R)
    {
        qsort(a, i, R);
    }
}

void Quicksort(string* a, int N)
{
    qsort(a, 1, N);
}
