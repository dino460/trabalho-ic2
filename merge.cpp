#include "sorts.h"


int merge_moves    = 0;
int merge_compares = 0;


void merge(string* a, int L, int h, int R, string* c)
{
    int i = L;
    int j = h + 1;
    int k = L - 1;

    while (i <= h && j <= R)
    {
        k += 1;

        merge_compares++;

        if (a[i] < a[j])
        {
            c[k] = a[i];
            merge_moves++;

            i += 1;
        }
        else
        {
            c[k] = a[j];
            merge_moves++;

            j += 1;
        }
    }

    while (i <= h)
    {
        k += 1;
        c[k] = a[i];
        merge_moves++;

        i += 1;
    }

    while (j <= R)
    {
        k += 1;
        c[k] = a[j];
        merge_moves++;

        j += 1;
    }
}

void mpass(string* a, int N, int p, string* c)
{
    int i = 1;

    while (i <= N - 2 * p + 1)
    {
        merge(a, i, i + p - 1, i + 2 * p - 1, c);
        i += 2*p;
    }

    if (i + p - 1 < N)
    {
        merge(a, i, i  + p - 1, N, c);
    }
    else
    {
        for (int j = i; j < N; j++)
        {
            c[j] = a[j];
            merge_moves++;
        }
    }
    
}

void MergeSort(string* opcode_arr, string* result_arr, int N)
{
    int p = 1;
    
    while (p < N)
    {
        mpass(opcode_arr, N, p, result_arr);
        p *= 2;
        mpass(result_arr, N, p, opcode_arr);
        p *= 2;
    }
}
