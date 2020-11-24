
#include "allAlgorithms.h"
#include "number_data.h"
#include <fstream>
using namespace std;

int oneKRand[1000];
int twoKRand[2000];
int threeKRand[3000];
int fourKrand[4000];

int oneKRev[1000];
int twoKRev[2000];
int threeKRev[3000];
int fourKRev[4000];

int fourKAscend[4000];

int oneKRandCopy[1000];
int twoKRandCopy[2000];
int threeKRandCopy[3000];
int fourKRandCopy[4000];

int oneKRevCopy[1000];
int twoKRevCopy[2000];
int threeKRevCopy[3000];
int fourKRevCopy[4000];

int fourKAscendCopy[4000];

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
	copyIntArray(threeKRand, threeKRandCopy, 3000);
	copyIntArray(fourKrand, fourKRandCopy, 4000);

	copyIntArray(oneKRev, oneKRevCopy, 1000);
	copyIntArray(twoKRev, twoKRevCopy, 2000);
	copyIntArray(threeKRev, threeKRevCopy, 3000);
	copyIntArray(fourKRev, fourKRevCopy, 4000);

	copyIntArray(fourKAscend, fourKAscendCopy, 4000);
}

int main()
{
	ofstream out;
	out.open("compsout.txt");

	fill_random_numbers(oneKRand, 1000);
	fill_random_numbers(twoKRand, 2000);
	fill_random_numbers(threeKRand, 3000);
	fill_random_numbers(fourKrand, 4000);

	fill_sorted_numbers(holdArray, oneKRev, 1000);
	fill_sorted_numbers(holdArray, twoKRev, 2000);
	fill_sorted_numbers(holdArray, threeKRev, 3000);
	fill_sorted_numbers(fourKAscend, fourKRev, 4000);

	copyAllThoseArrays();
	out << "Number order: Expected Worst > Expected Average > Expected Best > Actual Descending > Actual Random > Actual Ascending" << endl << endl;

	out << "Selection Sort Information: " << endl;
	out << "1000: 1000000 > 1000000 > 1000000 > " << selectionsort(oneKRevCopy, 1000) << " > " << selectionsort(oneKRandCopy, 1000) << endl;
	out << "2000: 4000000 > 4000000 > 4000000 > " << selectionsort(twoKRevCopy, 2000) << " > " << selectionsort(twoKRandCopy, 2000) << endl;
	out << "3000: 9000000 > 9000000 > 9000000 > " << selectionsort(threeKRevCopy, 3000) << " > " << selectionsort(threeKRandCopy, 3000) << endl;
	out << "4000: 16000000 > 16000000 > 16000000 > " << selectionsort(fourKRevCopy, 4000) << " > " << selectionsort(fourKRandCopy, 4000) << " > " << selectionsort(fourKAscendCopy, 4000) << endl;

	copyAllThoseArrays();
	
	out << "Bubble Sort Information: " << endl;
	out << "1000: 1000000 > 1000000 > 1000 > " << bubbleSort(oneKRevCopy, 1000) << " > " << bubbleSort(oneKRandCopy, 1000) << endl;
	out << "2000: 4000000 > 4000000 > 2000 > " << bubbleSort(twoKRevCopy, 2000) << " > " << bubbleSort(twoKRandCopy, 2000) << endl;
	out << "3000: 9000000 > 9000000 > 3000 > " << bubbleSort(threeKRevCopy, 3000) << " > " << bubbleSort(threeKRandCopy, 3000) << endl;
	out << "4000: 16000000 > 16000000 > 4000 > " << bubbleSort(fourKRevCopy, 4000) << " > " << bubbleSort(fourKRandCopy, 4000) << " > " << bubbleSort(fourKAscendCopy, 4000) << endl;

	copyAllThoseArrays();

	out << "Insertion Sort Information: " << endl;
	out << "1000: 1000000 > 1000000 > 1000 > " << insertionSort(oneKRevCopy, 1000) << " > " << insertionSort(oneKRandCopy, 1000) << endl;
	out << "2000: 4000000 > 4000000 > 2000 > " << insertionSort(twoKRevCopy, 2000) << " > " << insertionSort(twoKRandCopy, 2000) << endl;
	out << "3000: 9000000 > 9000000 > 3000 > " << insertionSort(threeKRevCopy, 3000) << " > " << insertionSort(threeKRandCopy, 3000) << endl;
	out << "4000: 16000000 > 16000000 > 4000 > " << insertionSort(fourKRevCopy, 4000) << " > " << insertionSort(fourKRandCopy, 4000) << " > " << insertionSort(fourKAscendCopy, 4000) << endl;
	
	copyAllThoseArrays();
	out << "Quick Sort Information: " << endl;
	out << "1000: 1000000 > 3000 > 3000 > " << quicksort(oneKRevCopy, 1000) << " > " << quicksort(oneKRandCopy, 1000) << endl;
	out << "2000: 4000000 > 6602 > 6602 > " << quicksort(twoKRevCopy, 2000) << " > " << quicksort(twoKRandCopy, 2000) << endl;
	out << "3000: 9000000 > 10431 > 10431 > " << quicksort(threeKRevCopy, 3000) << " > " << quicksort(threeKRandCopy, 3000) << endl;

	out << "Input of 3977 is used here since quick sort crashes on anything larger for some reason" << endl;
	out << "4000: 16000000 > 14408 > 14408 > " << quicksort(fourKRevCopy, 3977) << " > " << quicksort(fourKRandCopy, 3977) << " > " << quicksort(fourKAscendCopy, 3977) << endl;


	copyAllThoseArrays();
	out << "Heap Sort Information: " << endl;
	out << "1000: 3000 > 3000 > 3000 > " << heapsort(oneKRevCopy, 1000) << " > " << heapsort(oneKRandCopy, 1000) << endl;
	out << "2000: 6602 > 6602 > 6602 > " << heapsort(twoKRevCopy, 2000) << " > " << heapsort(twoKRandCopy, 2000) << endl;
	out << "3000: 10431 > 10431 > 10431 > " << heapsort(threeKRevCopy, 3000) << " > " << heapsort(threeKRandCopy, 3000) << endl;
	out << "4000: 14408 > 14408 > 14408 > " << heapsort(fourKRevCopy, 4000) << " > " << heapsort(fourKRandCopy, 4000) << " > " << heapsort(fourKAscendCopy, 4000) << endl;
	
	copyAllThoseArrays();
	out << "Merge Sort Information: " << endl;
	out << "1000: 3000 > 3000 > 3000 > " << mergesort(oneKRevCopy, 1000) << " > " << mergesort(oneKRandCopy, 1000) << endl;
	out << "2000: 6602 > 6602 > 6602 > " << mergesort(twoKRevCopy, 2000) << " > " << mergesort(twoKRandCopy, 2000) << endl;
	out << "3000: 10431 > 10431 > 10431 > " << mergesort(threeKRevCopy, 3000) << " > " << mergesort(threeKRandCopy, 3000) << endl;
	out << "4000: 14408 > 14408 > 14408 > " << mergesort(fourKRevCopy, 4000) << " > " << mergesort(fourKRandCopy, 4000) << " > " << mergesort(fourKAscendCopy, 4000) << endl;



	out.close();
	return 0;
}
