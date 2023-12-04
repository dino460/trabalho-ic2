#include "sorts.h"

int binaryInsertion_moves    = 0;
int binaryInsertion_compares = 0;

void BinaryInsertionsort(string *a, int N)
{
    int L, R, m;
    string x;

    for(int i = 2; i < N; i++)
    {
        x = a[i];
        L = 1;
        R = i;

        while(L < R)
        {
            m = (L + R)/2;
            
            if(a[m] <= x)
            {
                binaryInsertion_compares++;
                
                L = m+1;
            } 
            else
            {
                R = m;
            }
        }
            
        int j = i;

        while(j < R)
        {
            a[j] = a[j-1];
            binaryInsertion_moves++;

            j -= 1;
        }

        a[R] = x;
        binaryInsertion_moves++;      
    }
}