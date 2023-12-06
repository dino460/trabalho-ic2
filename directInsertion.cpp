#include "sorts.h"

int directInsertion_moves    = 0;
int directInsertion_compares = 0;

void DirectInsertionsort(string *a, int N)
{
    for(int i = 2; i < N; i++)
    {
        string x = a[i];
        directInsertion_moves++;
        a[0] = x;
        directInsertion_moves++;
        int j = i;


        while(x < a[j-1])
        {
            a[j] = a[j - 1];
            j -= 1;

            directInsertion_compares++;
            directInsertion_moves++;
        }
        
        directInsertion_compares++;
        
        a[j] = x;
        directInsertion_moves++;
    }
}
