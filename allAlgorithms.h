//allAlgorithms.h
//contians all of the various sorting algorithms
#pragma once
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

//SELECTION SORT
int selectionsort(int data[], size_t n);

//BUBBLE SORT
//CODE SOURCED FROM: https://www.programiz.com/dsa/bubble-sort
int bubbleSort(int array[], size_t size);

//INSERTION SORT
//CODE SOURCED FROM: https://www.geeksforgeeks.org/insertion-sort/
int insertionSort(int arr[], size_t n);

//QUICK SORT
void partition(int data[], size_t n, size_t& pivot_index, int comparisons);

int quicksort(int data[], size_t n);


//HEAP SORT
size_t parent(size_t k);

size_t left_child(size_t k);
// Library facilities used: cstdlib

size_t right_child(size_t k);
// Library facilities used: cstdlib

void make_heap(int data[], size_t n);
// Library facilities used: itemtool.h (from page 277), cstdlib

void reheapify_down(int data[], size_t n);

void heapsort(int data[], size_t n);

//MERGE SORT
void merge(int data[], size_t n1, size_t n2);

void mergesort(int data[], size_t n);

