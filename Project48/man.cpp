#include "util.h"
#include "logic.h"

int main() {
	int size;

	cout << "Imput size of array: ";
	cin >> size;

	int* array = new int[size];

	init(array, size, -50, 100);

	cout << "Array: " << convert(array, size) << endl;

	cout << "Sum between extreme elements is: "
		<< sum_element_between_extremes(array, size) << endl;

		delete[]array;

	return 0;
}