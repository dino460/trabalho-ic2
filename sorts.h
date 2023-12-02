#ifndef SORTS_H
#define SORTS_H

#include <iostream>
#include <array>
#include <fstream>
#include <vector>

using namespace std;

#include "heap.cpp"
#include "merge.cpp"
#include "quick.cpp"


void Heapsort(string* a, int N);
void heapify(string* a, int L, int R);

void MergeSort(string* opcode_arr, string* result_arr, int N);
void mpass(string* a, int N, int p, string* c);
void merge(string* a, int L, int h, int R, string* c);

void Quicksort(string* a, int N);
void qsort(string* a, int L, int R);


#endif
