/*
#include "number_data.h"
#include "allAlgorithms.h"
#include <fstream>
#include <iostream>

using namespace std;
const unsigned int SIZE = 8000;

void copyIntArray(int orig[], int copy[])
{
	for (int i = 0; i < SIZE; i++)
	{
		copy[i] = orig[i];
	}
}

int main()
{
	ofstream out;
	out.open("sortsout.txt");

	//declare original arrays
	int numbers[SIZE];
	int increasing[SIZE];
	int decreasing[SIZE];
	fill_random_numbers(numbers, SIZE);
	fill_sorted_numbers(increasing, decreasing, SIZE);


	//copy each type of array for each type of sorting function
	//selection sort
	int ssNumCopy[SIZE];
	copyIntArray(numbers, ssNumCopy);
	int ssIncCopy[SIZE];
	copyIntArray(numbers, ssIncCopy);
	int ssDecCopy[SIZE];
	copyIntArray(numbers, ssDecCopy);

	//bubble sort
	int bsNumCopy[SIZE];
	copyIntArray(numbers, bsNumCopy);
	int bsIncCopy[SIZE];
	copyIntArray(numbers, bsIncCopy);
	int bsDecCopy[SIZE];
	copyIntArray(numbers, bsDecCopy);
	
	//insertion sort
	int isNumCopy[SIZE];
	copyIntArray(numbers, isNumCopy);
	int isIncCopy[SIZE];
	copyIntArray(numbers, isIncCopy);
	int isDecCopy[SIZE];
	copyIntArray(numbers, isDecCopy);

	// NOW apply sorting algorithms to a copy of each array or copy of a slice of the array.
	out << "Selection sort:" << endl;
	//selection sort section
	selectionsort(ssNumCopy, SIZE);
	selectionsort(ssIncCopy, SIZE);
	selectionsort(ssDecCopy, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		out << ssNumCopy[i] << " ";
	}
	out << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		out << ssIncCopy[i] << " ";
	}
	out << endl << endl;
	for (int i = 0; i < SIZE; i++)
	{
		out << ssDecCopy[i] << " ";
	}
	out << endl << endl;

	//bubble sort section
	out << "Bubble Sort: " << endl;
	bubbleSort(bsNumCopy, SIZE);
	bubbleSort(bsIncCopy, SIZE);
	bubbleSort(bsDecCopy, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		out << bsNumCopy[i] << " ";
	}
	out << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		out << bsIncCopy[i] << " ";
	}
	out << endl << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		out << bsDecCopy[i] << " ";
	}
	out << endl << endl;;

	//insertion sort section
	out << "Insertion Sort:" << endl;
	insertionSort(isNumCopy, SIZE);
	insertionSort(isIncCopy, SIZE);
	insertionSort(isDecCopy, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		out << isNumCopy[i] << " ";
	}
	out << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		out << isIncCopy[i] << " ";
	}
	out << endl << endl;
	for (int i = 0; i < SIZE; i++)
	{
		out << isDecCopy[i] << " ";
	}
	out << endl << endl;



	out.close();
	return 0;
}
*/