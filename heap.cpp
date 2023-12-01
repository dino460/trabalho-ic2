#include <iostream>
#include <array>

using namespace std;


void heapify(string* a, int L, int R)
{
    int i = L;
    int j = 2 * L;
    string x = a[L];

    if ((j < R) && (a[j] < a[j + 1]))
    {
        j += 1;
    }

    while ((j <= R) && (x < a[j]))
    {
        a[i] = a[j];
        i = j;
        j *= 2;

        if ((j < R) && (a[j] < a[j + 1]))
        {
            j += 1;
        }
    }

    a[i] = x;
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
        heapify(a, 1, R-1);
    }
}
