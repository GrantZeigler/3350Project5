/*
#include "allAlgorithms.h"
#include "number_data.h"
#include <fstream>
using namespace std;

int oneKRand[1000];
int twoKRand[2000];
int fourKRand[4000];
int eightKRand[8000];

int oneKRev[1000];
int twoKRev[2000];
int fourKRev[4000];
int eightKRev[8000];

int eightKAscend[8000];

int oneKRandCopy[1000];
int twoKRandCopy[2000];
int fourKRandCopy[4000];
int eightKRandCopy[8000];

int oneKRevCopy[1000];
int twoKRevCopy[2000];
int fourKRevCopy[4000];
int eightKRevCopy[8000];

int eightKAscendCopy[8000];

int holdArray[1];

void copyIntArray(int orig[], int copy[], int size)
{
	for (int i = 0; i < size; i++)
	{
		copy[i] = orig[i];
	}
}

void copyAllThoseArrays()
{
	copyIntArray(oneKRand, oneKRandCopy, 1000);
	copyIntArray(twoKRand, twoKRandCopy, 2000);
	copyIntArray(fourKRand, fourKRandCopy, 4000);
	copyIntArray(eightKRand, eightKRandCopy, 8000);

	copyIntArray(oneKRev, oneKRevCopy, 1000);
	copyIntArray(twoKRev, twoKRevCopy, 2000);
	copyIntArray(fourKRev, fourKRevCopy, 4000);
	copyIntArray(eightKRev, eightKRevCopy, 8000);

	copyIntArray(eightKAscend, eightKAscendCopy, 8000);
}

int main()
{
	ofstream out;
	out.open("compsout.txt");

	fill_random_numbers(oneKRand, 1000);
	fill_random_numbers(twoKRand, 2000);
	fill_random_numbers(fourKRand, 4000);
	fill_random_numbers(eightKRand, 8000);

	fill_sorted_numbers(holdArray, oneKRev, 1000);
	fill_sorted_numbers(holdArray, twoKRev, 2000);
	fill_sorted_numbers(holdArray, fourKRev, 4000);
	fill_sorted_numbers(eightKAscend, eightKRev, 8000);

	copyAllThoseArrays();
	out << "Number order: Expected Worst > Expected Average > Expected Best > Actual Descending > Actual Random > Actual Ascending" << endl << endl;

	out << "Selection Sort Information: " << endl;
	out << "1000: 1000000 > 1000000 > 1000000 > " << selectionsort(oneKRevCopy, 1000) << " > " << selectionsort(oneKRandCopy, 1000) << endl;
	out << "2000: 4000000 > 4000000 > 4000000 > " << selectionsort(twoKRevCopy, 2000) << " > " << selectionsort(twoKRandCopy, 2000) << endl;
	out << "4000: 16000000 > 16000000 > 16000000 > " << selectionsort(fourKRevCopy, 4000) << " > " << selectionsort(fourKRandCopy, 4000) << endl;
	out << "8000: 64000000 > 64000000 > 64000000 > " << selectionsort(eightKRevCopy, 8000) << " > " << selectionsort(eightKRandCopy, 8000) << " > " << selectionsort(eightKAscendCopy, 8000) << endl;

	copyAllThoseArrays();
	
	out << "Bubble Sort Information: " << endl;
	out << "1000: 1000000 > 1000000 > 1000 > " << bubbleSort(oneKRevCopy, 1000) << " > " << bubbleSort(oneKRandCopy, 1000) << endl;
	out << "2000: 4000000 > 4000000 > 2000 > " << bubbleSort(twoKRevCopy, 2000) << " > " << bubbleSort(twoKRandCopy, 2000) << endl;
	out << "4000: 16000000 > 16000000 > 4000 > " << bubbleSort(fourKRevCopy, 4000) << " > " << bubbleSort(fourKRandCopy, 4000) << endl;
	out << "8000: 64000000 > 64000000 > 8000 > " << bubbleSort(eightKRevCopy, 8000) << " > " << bubbleSort(eightKRandCopy, 8000) << " > " << bubbleSort(eightKAscendCopy, 8000) << endl;

	copyAllThoseArrays();
	out  << endl;

	out << "Insertion Sort Information: " << endl;
	out << "1000: 1000000 > 1000000 > 1000 > " << insertionSort(oneKRevCopy, 1000) << " > " << insertionSort(oneKRandCopy, 1000) << endl;
	out << "2000: 4000000 > 4000000 > 2000 > " << insertionSort(twoKRevCopy, 2000) << " > " << insertionSort(twoKRandCopy, 2000) << endl;
	out << "4000: 16000000 > 16000000 > 4000 > " << insertionSort(fourKRevCopy, 4000) << " > " << insertionSort(fourKRandCopy, 4000) << endl;
	out << "8000: 64000000 > 64000000 > 8000 > " << insertionSort(eightKRevCopy, 8000) << " > " << insertionSort(eightKRandCopy, 8000) << " > " << insertionSort(eightKAscendCopy, 8000) << endl;



	out.close();
	return 0;
}
*/