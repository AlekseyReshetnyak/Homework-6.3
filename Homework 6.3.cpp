#include "Executor.h"

int main()
{
	int** arr = 0;
	arr = fill(arr, 10, 10);
	out(arr, 10, 10);
	for (int i = 0; i < 10; i++)
		delete[] arr[i];
	delete[] arr;
}