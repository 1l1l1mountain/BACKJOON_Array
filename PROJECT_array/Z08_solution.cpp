#include "io.h"
void Reverse(int * Array,int i,int j ) 
{
	//i,j�� �ε���	
	int Tmp[100] = {};
	for (int k =i ;  k< j+1; k++)
	{
		Tmp[k] = Array[k];

	}
	int Size = j - i + 1;
	for (int k = 0; k < Size; k++)
	{
		Array[j] = Tmp[i];
		i++;
		j--;
	}
}	
void Level08() 
{
	int N, M;
	cin >> N >> M;
	int i, j;
	
	int* Array;
	

	//�����Է�
	Array = new int[N];
	for (int k = 0; k < N; k++) //�迭 �����Է�
	{
		Array[k] = k+1;
	}


	//���Լ�
	for (int k = 0; k < M; k++)
	{

		cin >> i >> j;
		Reverse(Array, i-1, j-1);
	} 
	

	//���
	for (int k = 0; k < N; k++)
	{

		cout << Array[k]<<" ";
	} //���
	delete[] Array;
}