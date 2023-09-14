#include "io.h"
void Level07()
{
	int Array[10], Rest[42] = {};

	for (int i = 0; i < 10; i++)
	{
		cin >> Array[i];
		Array[i] = Array[i] % 42;
		
		for (int j = 0; j < 42; j++)
		{

			if (Array[i] == j) Rest[j]++;
		}
	}

	int Count = 0;
	for (int i = 0; i < 42; i++)
	{
		if (Rest[i] > 0) Count++;
	}

	cout << Count;


}