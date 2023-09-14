#include "io.h"
void Level09()
{

	int N;
	double* Array;

	cin >> N;
	Array = new double[N];
	for (int i = 0; i < N; i++)
	{
		cin >> Array[i];
		
	}
	
	double Max= 0;
	for (int i = 0; i < N; i++)
	{

		if (Array[i] > Max) Max = Array[i];

	}
	for (int i = 0; i < N; i++)
	{

		Array[i] = Array[i] / Max * 100;

	}
	double Average=0;
	for (int i = 0; i < N; i++)
	{
		Average = Average + Array[i];
		
	}
	Average /= N;
	cout << Average;


	delete[] Array;
}