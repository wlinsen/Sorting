#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int a[N];
int n;
void insertSort()
{
	for(int i = 2; i<= n; i++)
	{
		a[0] = a[i];
		int j = i -1;
		while(a[j] > a[0])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = a[0];
	}
}

int main()
{	//20 18 35 12 10 49 50 10
	n = 8;
	for(int i = 1;i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	insertSort();
	for(int i = 1; i <=n ; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}