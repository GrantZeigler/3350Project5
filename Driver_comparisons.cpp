
#include "allAlgorithms.h"
#include "number_data.h"
#include <fstream>
using namespace std;

void copyIntArray(int orig[], int copy[], int size)
{
	for (int i = 0; i < size; i++)
	{
		copy[i] = orig[i];
	}
}

int main()
{
	ofstream out;
	out.open("compsout.txt");

	
		int oneK[1000];
		int twoK[2000];
		int fourK[4000];
		int eightK[8000];
	


	out.close();
	return 0;
}
