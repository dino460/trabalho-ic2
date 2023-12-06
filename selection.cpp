#include "sorts.h"

int selection_moves    = 0;
int selection_compares = 0;

void Selectionsort(string *a, int N)
{
    for(int i = 1; i < N; i++)
    {
        int lower_index = i;

        for(int j = i+1; j < N; j++)
        {
            selection_compares++;
            
            if(a[j] < a[lower_index]){
                lower_index = j;
            }
        }

        string x = a[i];
        a[i] = a[lower_index];
        a[lower_index] = x;

        selection_moves += 3;
    }
}