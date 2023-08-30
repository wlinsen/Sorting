#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int h[N], size;
int n, m;
void down(int u)
{
	int t = u;
	if(u * 2 <= size && h[u * 2] < h[t]) t = u * 2;
	if(u * 2 + 1 <= size && h[ u * 2 + 1] < h[t]) t = u * 2 +1;
	if(u != t)
	{
		swap(h[u], h[t]);
		down(t);
	}
}

void up(int u)
{
	while(u/2 && h[u /2] > h[u])
	{
		//swap;
		u >>= 1;
	}
}
int main()
{
	scanf("%d%d", &n,&m);
	for(int i = 1; i<= n; i++) scanf("%d", &h[i]);
	size = n;
	for(int i = n/ 2; i >= 1; i--) down(i);
	while(m--)
	{
		printf("%d ", h[1]);
		h[1] = h[size --];
		down(1);
	}
	return 0;
	
}