#include "io.h"
void Level05()
{

	int N, M, Basket[100] = {};
	int i, j, k;

	cin >> N >> M;
	for (int u = 0; u < M; u++)
	{

		cin >> i >> j >> k;
		for (int u = i - 1; u < j ; u++)
		{

			Basket[u] = k;
		}
	}


	for (int u = 0; u < N; u++) {

		cout << Basket[u]<< " ";
	}
}
/*
5 4
1 2 3
3 4 4
1 4 1
2 2 2 

*/