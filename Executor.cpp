#include "Executor.h"

int** fill(int** arr, int str, int stb)
{
	arr = new int*[stb];
	for (int i = 0; i < stb; i++)
		arr[i] = new int[str];
	for (int i = 0; i < stb; i++)
		for (int j = 0; j < str; j++)
			arr[i][j] = rand() % 41 + 10;
	return arr;
}

void out(int** arr, int str, int stb)
{
	for (int i = 0; i < stb; i++) {
		for (int j = 0; j < str; j++)
			std::cout << arr[i][j] << " ";
		std::cout << "\n";
	}
}
