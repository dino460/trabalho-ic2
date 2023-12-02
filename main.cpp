#include "sorts.h"


int main()
{
    string filename = "data/mes_";

    for (int i = 1; i <= 1; i++)
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

        cout << "test\n";
        // Heapsort(sorted_arr, file_data.size() + 1);
        // MergeSort(opcode_arr, sorted_arr, file_data.size() + 1);
        Quicksort(sorted_arr, file_data.size() + 1);

        for (int i = 1; i < file_data.size() + 2; i++)
        {
            cout << sorted_arr[i] << endl;
        }
    }

    cout << endl;

    return 0;
}