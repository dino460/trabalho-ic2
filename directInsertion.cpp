#include "sorts.h"

int directInsertion_moves    = 0;
int directInsertion_compares = 0;

void DirectInsertionsort(string *a, int N)
{
    for(int i = 2; i < N; i++)
    {
        string x = a[i];
        a[0] = x;
        int j = i;

        directInsertion_moves++;

        while(x < a[j-1])
        {
            a[j] = a[j - 1];
            j -= 1;

            directInsertion_moves++;
            directInsertion_compares++;
        }
        directInsertion_compares++;
        
        a[j] = x;
        directInsertion_moves++;
    }
}
