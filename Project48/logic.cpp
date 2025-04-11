#include "logic.h"

int absolut(int number) {
	return number < 0 ? -number : number;
}

int get_min_first_indexint(int* array, int size) {
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (absolut(*(array + i)) < absolut(*(array + index))) {
			index = 1;
		}
	}

	return index;
}

int get_max_last_indexint(int* array, int size) {

	int index = size - 1;

		for (int i = size - 2; i >= 0; i--)
		{
			if (absolut(*(array + i)) > absolut(*(array + index))) {
				index = i;
			}
		}

	return index;
}

int sum_element_between_extremes(int* array, int size) {
	int imin = get_min_first_indexint(array, size);
	int imax = get_max_last_indexint(array, size);

	int sum = 0;

	if (imin > imax) {
		int t = imin;
		imin = imax;
		imax = t;
	}

	for (int i = imin + 1; i < imax; i++)
	{
		sum += *(array + i);
	}

	return sum;
}