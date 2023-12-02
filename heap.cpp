#include "sorts.h"


int heap_moves    = 0;
int heap_compares = 0;


void heapify(string* a, int L, int R)
{
    int i = L;
    int j = 2 * L;
    string x = a[L];
    heap_moves++;

    heap_compares++;
    if ((j < R) && (a[j] < a[j + 1]))
    {
        j += 1;
    }

    while ((j <= R) && (x < a[j]))
    {
        heap_compares++;

        a[i] = a[j];
        heap_moves++;

        i = j;
        j *= 2;

        heap_compares++;
        if ((j < R) && (a[j] < a[j + 1]))
        {
            j += 1;
        }
    }

    a[i] = x;
    heap_moves++;
}

void Heapsort(string* a, int N)
{
    for (int L = N/2; L >= 1; L--)
    {
        heapify(a, L, N);
    }

    for (int R = N; R >= 2; R--)
    {
        string w = a[1];
        a[1] = a[R];
        a[R] = w;
        heap_moves += 3;
        
        heapify(a, 1, R-1);
    }
}
