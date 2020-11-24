//allAlgorithms.h
//contians all of the various sorting algorithms

#include "allAlgorithms.h"
using namespace std;

//SELECTION SORT
int selectionsort(int data[], size_t n)
// Library facilities used: algorithm, cstdlib
{
	int comparisons = 0;
	size_t i, j, index_of_largest;
	int largest;

	if (n == 0)
		return 1; // No work for an empty array.

	for (i = n - 1; i > 0; --i)
	{
		largest = data[0];
		index_of_largest = 0;
		for (j = 1; j <= i; ++j)
		{
			comparisons++;
			if (data[j] > largest)
			{
				largest = data[j];
				index_of_largest = j;
			}
		}
		swap(data[i], data[index_of_largest]);
	}

	return comparisons;
}

//BUBBLE SORT
//CODE SOURCED FROM: https://www.programiz.com/dsa/bubble-sort
int bubbleSort(int array[], size_t size) 
{
	int comparisons = 0;
	int swaps = 0;
	// run loops two times: one for walking throught the array
	// and the other for comparison
	for (int step = 0; step < size - 1; ++step) 
	{
		for (int i = 0; i < size - step - 1; ++i)
		{
			swaps = 0;
			// To sort in descending order, change > to < in this line.
			comparisons++;
			if (array[i] > array[i + 1]) 
			{
				// swap if greater is at the rear position
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swaps = 1;
			}
		}
		if (swaps == 0)
		{
			break;
		}
	}
	return comparisons;
}

//INSERTION SORT
//CODE SOURCED FROM: https://www.geeksforgeeks.org/insertion-sort/
int insertionSort(int arr[], size_t n)
{
	int comps = 0;
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key)
		{
			comps++;
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
		comps++;
	}
	return comps;
}


//QUICK SORT
int quickComps = 0;
int quicksort(int data[], size_t n)
// Library facilities used: cstdlib
{
	size_t pivot_index; // Array index for the pivot element
	size_t n1;          // Number of elements before the pivot element
	size_t n2;          // Number of elements after the pivot element

	if (n > 1)
	{
		// Partition the array, and set the pivot index.
		partition(data, n, pivot_index);

		// Compute the sizes of the subarrays.
		n1 = pivot_index;
		n2 = n - n1 - 1;

		// Recursive calls will now sort the subarrays.
		quicksort(data, n1);
		quicksort((data + pivot_index + 1), n2);
	}
	return quickComps;
}

void partition(int data[], size_t n, size_t& pivot_index)
// Library facilities used: itemtool.h, stdlib.h
//
// NOTES FROM THE IMPLEMENTOR:
// How the partition works on small arrays:
//
// Notice that n=0 is not permitted by the precondition.
//
// If n=1, then too_big_index is initialized as 1, and too_small_index is
// initialized as 0. Therefore, the body of the loop is never executed,
// and after the loop pivot_index is set to zero.
//
// If n=2, then both too_big_index and too_small_index are initialized as 1.
// The loop is entered, and there are two cases to consider:
// -- if data[1] <= pivot, then too_big_index increases to 2, and
//    too_small_index stays at 1. The if-statement at the bottom of the loop
//    is then skipped, and after the loop we copy data[1] down to data[0],
//    and copy the pivot into data[0]. Thus, the smaller element is in
//    data[0], and the larger element (the pivot) is in data[1].
// -- if data[1] > pivot, then too_big_index stays at 1, and too_small_index
//    decreases to 0. The if-statement at the bottom of the loop is then
//    skipped, and after the loop we end up copying the pivot onto data[0]
//    (leaving data[1] alone). Thus, the smaller element (the pivot) remains
//    at data[0], leaving the larger element at data[1].
{
	// -- Implementation is left to the student
	int pivot = data[0]; // May be changed to median-of-three pivoting
	size_t too_big_index = 1;
	size_t too_small_index = n - 1;

	while (too_big_index <= too_small_index)
	{
		while ((too_big_index < n) && (data[too_big_index] <= pivot))
		{
			too_big_index++;
		}
		while (data[too_small_index] > pivot)
		{
			too_small_index--;
		};

		if (too_big_index < too_small_index)
		{ 
			swap(data[too_big_index], data[too_small_index]);
			quickComps++;
		};
	};

	pivot_index = too_small_index;
	data[0] = data[pivot_index];
	data[pivot_index] = pivot;
	quickComps++;
}

//HEAP SORT
int heapcomps = 0;
size_t parent(size_t k)
// Library facilities used: cstdlib
{
	return (k - 1) / 2;
}

size_t left_child(size_t k)
// Library facilities used: cstdlib
{
	return 2 * k + 1;
}

size_t right_child(size_t k)
// Library facilities used: cstdlib
{
	return 2 * k + 2;
}

void make_heap(int data[], size_t n)
// Library facilities used: itemtool.h (from page 277), cstdlib
// 
{
	size_t i;  // Index of next element to be added to heap
	size_t k;  // Index of new element as it is being pushed upward through the heap

	for (i = 1; i < n; ++i)
	{
		k = i;
		while ((k > 0) && (data[k] > data[parent(k)]))
		{
			swap(data[k], data[parent(k)]);
			k = parent(k);
		}
	}
}

void reheapify_down(int data[], size_t n)
// Library facilities used: itemtool.h (from page 277), cstdlib
{
	size_t current;          // Index of the node that's moving down
	size_t big_child_index;  // Index of the larger child of the node that's moving down
	bool heap_ok = false;    // Will change to true when the heap becomes correct

	current = 0;

	// Note: The loop keeps going while the heap is not okay, and while the current node has
	// at least a left child. The test to see whether the current node has a left child is
	// left_child(current) < n.
	while ((!heap_ok) && (left_child(current) < n))
	{
		// Compute the index of the larger child:
		if (right_child(current) >= n)
		{
			// There is no right child, so left child must be largest
			big_child_index = left_child(current);
		}
		else if (data[left_child(current)] > data[right_child(current)])
		{
			// The left child is the bigger of the two children
			big_child_index = left_child(current);
		}
		else
		{
			// The right child is the bigger of the two children
			big_child_index = right_child(current);
		}

		// Check whether the larger child is bigger than the current node. If so, then swap
		// the current node with its bigger child and continue; otherwise we are finished
		heapcomps++;

		if (data[current] < data[big_child_index])
		{
			swap(data[current], data[big_child_index]);
			current = big_child_index;
		}
		else
		{
			heap_ok = true;
		}
	}
}

int heapsort(int data[], size_t n)
// Library facilities used: algorithm, cstdlib
{
	int comps = 0;
	size_t unsorted;

	make_heap(data, n);

	unsorted = n;

	while (unsorted > 1)
	{
		--unsorted;
		swap(data[0], data[unsorted]);
		reheapify_down(data, unsorted);
	}

	int heapTotal = heapcomps;
	heapcomps = 0;

	return heapTotal;
}

int mergecomps = 0;
//MERGE SORT
void merge(int data[], size_t n1, size_t n2)
// Precondition: data is an array (or subarray) with at least n1 + n2 elements.
// The first n1 elements (from data[0] to data[n1 - 1]) are sorted from
// smallest to largest, and the last n2 (from data[n1] to data[n1 + n2 - 1])
// also are sorted from smallest to largest.
// Postcondition: The first n1 + n2 elements of data have been rearranged to be
// sorted from smallest to largest.
// NOTE: If there is insufficient dynamic memory, then bad_alloc is thrown.
// Library facilities used: cstdlib
{
	int* temp;          // Points to dynamic array to hold the sorted elements
	size_t copied = 0; // Number of elements copied from data to temp
	size_t copied1 = 0; // Number copied from the first half of data
	size_t copied2 = 0; // Number copied from the second half of data
	size_t i;           // Array index to copy from temp back into data
	// Allocate memory for the temporary dynamic array.
	temp = new int[n1 + n2];

	// Merge elements, copying from two halves of data to the temporary array.
	while ((copied1 < n1) && (copied2 < n2))
	{
		if (data[copied1] < (data + n1)[copied2])
		{
			temp[copied++] = data[copied1++];        // Copy from first half
		}
		else
		{
			temp[copied++] = (data + n1)[copied2++]; // Copy from second half
		}
	}

	// Copy any remaining entries in the left and right subarrays.
	while (copied1 < n1)
	{
		temp[copied++] = data[copied1++];
		mergecomps++;
	}
	while (copied2 < n2)
	{
		temp[copied++] = (data + n1)[copied2++];
		mergecomps++;
	}

	// Copy from temp back to the data array, and release temp's memory.
	for (i = 0; i < n1 + n2; i++)
	{
		data[i] = temp[i];
	}
	delete[] temp;
}

int mergesort(int data[], size_t n)
// Precondition: data is an array with at least n components.
// Postcondition: The elements of data have been rearranged so
// that data[0] <= data[1] <= ... <= data[n-1].
// NOTE: If there is insufficient dynamic memory, thenbad_alloc is thrown.
// Library facilities used: cstdlib
{
	size_t n1; // Size of the first subarray
	size_t n2; // Size of the second subarray


	if (n > 1)
	{
		// Compute sizes of the subarrays.
		n1 = n / 2;
		n2 = n - n1;

		mergesort(data, n1);         // Sort from data[0] through data[n1-1]
		mergesort((data + n1), n2);  // Sort from data[n1] to the end

		// Merge the two sorted halves.
		merge(data, n1, n2);
	}
	return mergecomps;
}

