//=================================================================//
//           INTRODUÇÃO À COMPUTAÇÃO II - TRABALHO FINAL           //
//                     Professor: Renato Tinós                     //
//                                                                 //
//                           Código por:                           //
//   Lorenzo Dutra de Oliveira Sales Decari Vicentin [14590093]    //
//               Raphael Zoega Cali Gomes [11800717]               //
//=================================================================//


#include "sorts.h"


int main()
{
    string filename = "data/mes_";

    for (int i = 1; i <= 5; i++)
    {
        filename.append(to_string(i));
        filename.append(".txt");

        cout << filename << endl;

        vector<string> file_data;
        string reader;
        ifstream file;
        file.open(filename);

        while (getline(file, reader))
        {
            file_data.push_back(reader);
        }

        file.close();
        filename.erase(filename.begin() + 9, filename.end());
        
        file_data.pop_back();
        file_data.pop_back();

        string opcode_arr[file_data.size() + 2];
        string sorted_arr[file_data.size() + 2];

        for (int i = 1; i < file_data.size() + 1; i++)
        {
            opcode_arr[i] = file_data[i];
            sorted_arr[i] = file_data[i];
        }

        // DirectInsertionsort(sorted_arr, file_data.size() + 1);
        // cout << "comps: " << directInsertion_compares << endl 
        //      << "moves: " << directInsertion_moves << endl;

        // BinaryInsertionsort(sorted_arr, file_data.size() + 1);
        // cout << "comps: " << binaryInsertion_compares << endl 
        //      << "moves: " << binaryInsertion_moves << endl;

        Selectionsort(sorted_arr, file_data.size() + 1);
        cout << "comps: " << selection_compares << endl 
             << "moves: " << selection_moves << endl;

        // Bubblesort(sorted_arr, file_data.size() + 1);
        // cout << "comps: " << bubble_compares << endl 
        //      << "moves: " << bubble_moves << endl;

        // Heapsort(sorted_arr, file_data.size() + 1);
        // cout << "comps: " << heap_compares << endl 
        //      << "moves: " << heap_moves << endl;

        // MergeSort(opcode_arr, sorted_arr, file_data.size() + 1);
        // cout << "comps: " << merge_compares << endl 
        //      << "moves: " << merge_moves << endl;

        // Quicksort(sorted_arr, file_data.size() + 1);
        // cout << "comps: " << quick_compares << endl 
        //      << "moves: " << quick_moves << endl;


        // for (int i = 1; i < file_data.size() + 2; i++)
        // {
        //     cout << sorted_arr[i] << endl;
        // }
        cout << endl;
    }

    cout << endl;

    return 0;
}