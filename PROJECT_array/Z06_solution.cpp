#include "io.h"
void Level06()
{

	int N, M, Basket[101] = {};
	int i, j,tmp;

	


	cin >> N >> M;
	for (int u = 0; u < N+1; u++)
	{
		Basket[u] = u;
		//인덱스를 바구니 번호로 매핑
	}

	for (int u = 0; u < M; u++)
	{

		cin >> i >> j;
		
		tmp = Basket[i];
		Basket[i] = Basket[j];
		Basket[j] = tmp;


	}


	for (int u = 1; u < N+1; u++) {

		cout << Basket[u] << " ";
	}

}