#include "sorts.h"

int bubble_moves    = 0;
int bubble_compares = 0;

void Bubblesort(string *a, int N)
{
    string x; 

    for(int i = 2; i < N; i++)
    {
        for(int j = N; j < i; j--)
        {
            if(a[j-1] > a[j])
            {
                bubble_compares++;
                
                x = a[j-1];
                a[j-1] = a[j];
                a[j] = x;

                bubble_moves += 2;
            }
        }
    }
}

