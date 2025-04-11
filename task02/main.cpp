#include <iostream>
#include <string>
using namespace std;


int main() {

	const int N = 15, M = 10;
	int matrix[N][M];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}

	int min = matrix[0][0];
	int max = matrix[0][0];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
	}

	cout << "Min value is: " << min << endl;
	cout << "Max value is: " << max << endl;

	system("pause");

	return 0;
}