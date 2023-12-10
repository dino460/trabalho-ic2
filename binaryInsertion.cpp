//=================================================================//
//           INTRODUÇÃO À COMPUTAÇÃO II - TRABALHO FINAL           //
//                     Professor: Renato Tinós                     //
//                                                                 //
//                           Código por:                           //
//   Lorenzo Dutra de Oliveira Sales Decari Vicentin [14590093]    //
//               Raphael Zoega Cali Gomes [11800717]               //
//=================================================================//


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
        binaryInsertion_moves++;

        L = 1;
        R = i;

        while(L < R)
        {
            m = (L + R)/2;
            
            binaryInsertion_compares++;
            
            if(a[m] <= x)
            {    
                L = m+1;
            } 
            else
            {
                R = m;
            }
        }
            
        int j = i;

        while(j > R)
        {
            a[j] = a[j-1];
            binaryInsertion_moves++;

            j -= 1;
        }

        a[R] = x;
        binaryInsertion_moves++;      
    }
}