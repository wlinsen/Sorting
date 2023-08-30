#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int a[N];
int n;
void bubbleSort()
{
	for(int i = 1; i< n; i++)
	{
		for(int j= n; j >= i+ 1; j--)
		{
			if(a[j] < a[j -1]) swap(a[j], a[j -1]);
		}
	}
}

int main()
{	//20 18 35 12 10 49 50 10
	n = 8;
	for(int i = 1;i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	bubbleSort();
	for(int i = 1; i <=n ; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}