#include <bits/stdc++.h>
using namespace std;
const int N = 10000;
int a[N];
void select_sort(int a[], int n)
{
	for(int i = 0; i< n-1; i++)
	{
		int min = i;
		for(int j = i+ 1; j<n; j++)
			if(a[j] < a[min]) min = j;
			
		if(min != i) swap(a[i], a[min]);
	}
}


int main()
{
	int n = 8;
	for(int i = 0; i < n ; i++) scanf("%d", &a[i]);
	select_sort(a, n);
	for(int i = 0; i< n; i++) printf("%d ", a[i]);
	
	
	return 0;
}