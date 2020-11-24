
#include "number_data.h"
#include "allAlgorithms.h"
#include <fstream>
#include <iostream>

using namespace std;
const unsigned int SIZE = 8000;

int numbers[SIZE];
int increasing[SIZE];
int decreasing[SIZE];

int numCopy[SIZE];
int incCopy[SIZE];
int decCopy[SIZE];
void copyIntArray(int orig[], int copy[])
{
	for (int i = 0; i < SIZE; i++)
	{
		copy[i] = orig[i];
	}
}
void copyAllThoseArrays()
{
	copyIntArray(numbers, numCopy);
	copyIntArray(increasing, incCopy);
	copyIntArray(decreasing, decCopy);
}


int main()
{
	ofstream out;
	out.open("sortsout.txt");

	fill_random_numbers(numbers, SIZE);
	fill_sorted_numbers(increasing, decreasing, SIZE);

	copyAllThoseArrays();

	// apply sorting algorithms to a copy of each array or copy of a slice of the array.
	out << "Selection sort:" << endl;
	//selection sort section
	selectionsort(numCopy, SIZE);
	selectionsort(incCopy, SIZE);
	selectionsort(decCopy, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		out << decCopy[i] << " ";
	}
	out << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		out << incCopy[i] << " ";
	}
	out << endl << endl;
	for (int i = 0; i < SIZE; i++)
	{
		out << decCopy[i] << " ";
	}
	out << endl << endl;

	copyAllThoseArrays();

	//bubble sort section
	out << "Bubble Sort: " << endl;
	bubbleSort(numCopy, SIZE);
	bubbleSort(incCopy, SIZE);
	bubbleSort(decCopy, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		out << numCopy[i] << " ";
	}
	out << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		out << incCopy[i] << " ";
	}
	out << endl << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		out << decCopy[i] << " ";
	}
	out << endl << endl;

	copyAllThoseArrays();


	//insertion sort section
	out << "Insertion Sort:" << endl;
	insertionSort(numCopy, SIZE);
	insertionSort(incCopy, SIZE);
	insertionSort(decCopy, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		out << numCopy[i] << " ";
	}
	out << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		out << incCopy[i] << " ";
	}
	out << endl << endl;
	for (int i = 0; i < SIZE; i++)
	{
		out << decCopy[i] << " ";
	}
	out << endl << endl;
	copyAllThoseArrays();
	
	//Quick Sort Section
	out << "Quick Sort:" << endl;
	/*quick sort algorithm provided to us crashes on input larger than 3977 for some reason*/
	quicksort(numCopy, 3977);
	quicksort(incCopy, 3977);
	quicksort(decCopy, 3977);

	for (int i = 0; i < SIZE; i++)
	{
		out << numCopy[i] << " ";
	}
	out << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		out << incCopy[i] << " ";
	}
	out << endl << endl;
	for (int i = 0; i < SIZE; i++)
	{
		out << decCopy[i] << " ";
	}
	out << endl << endl;
	copyAllThoseArrays();

	

	//heap sort section
	out << "Heap Sort:" << endl;
	heapsort(numCopy, SIZE);
	heapsort(incCopy, SIZE);
	heapsort(decCopy, SIZE);


	for (int i = 0; i < SIZE; i++)
	{
		out << numCopy[i] << " ";
	}
	out << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		out << incCopy[i] << " ";
	}
	out << endl << endl;
	for (int i = 0; i < SIZE; i++)
	{
		out << decCopy[i] << " ";
	}
	out << endl << endl;
	copyAllThoseArrays();

	//merge sort section
	out << "Merge Sort:" << endl;
	mergesort(numCopy, SIZE);
	mergesort(incCopy, SIZE);
	mergesort(decCopy, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		out << numCopy[i] << " ";
	}
	out << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		out << incCopy[i] << " ";
	}
	out << endl << endl;
	for (int i = 0; i < SIZE; i++)
	{
		out << decCopy[i] << " ";
	}
	out << endl << endl;
	copyAllThoseArrays();

	out.close();
	return 0;
}
