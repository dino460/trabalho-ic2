#include "sorts.h"

int directInsertion_moves    = 0;
int directInsertion_compares = 0;

void DirectInsertionsort(string *a, int N)
{
    String x;

    for(int i = 2; i < N; i++)
    {
        x = a[i];
        int j = i;
        
        a[0] = x;
        directInsertion_moves++;

        while(x < a[j-1])
        {
            a[j-1] = a[j];
            j -= 1;

            directInsertion_moves++;
            directInsertion_compares++;
        }
        directInsertion_compares++;
        
        a[j] = x;
        directInsertion_moves++;
    }
}
