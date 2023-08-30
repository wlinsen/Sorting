#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int a[N];
int n;
int dh;
void shellSort()
{
	while(dh >= 1)
	{
		for(int i = 1 + dh; i <= n; i++)
		{
			a[0] = a[i];
			int j = i - dh;
			while(j > 0 && a[j] > a[0])
			{
				a[j  +  dh] = a[j];
				j -= dh;
			}
			a[j + dh] = a[0];
		}
		
		dh /= 2;
	}
}

int main()
{	//20 18 35 12 10 49 50 10
	n = 8;
	dh = n /2;
	for(int i = 1;i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	shellSort();
	for(int i = 1; i <=n ; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}