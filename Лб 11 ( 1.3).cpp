

#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int fun(int n, int m);
main()
{
	int s, n, m;
	s = fun(n, m);
	return 0;
}
int fun(int n, int m)
{
	int a[30], j, i;
	int x, y, z, h = 0;
	cout << "введіть числа -";
	cin >> n >> m;
	j = 1;
	for (i = n; i <= m; i++)
		x = i % 2;
	y = i % 3;
	z = i % 5;
	if ((x != 0) && (y != 0) && (z != 0))
	{
		a[j] = i; j++;
	}
	for (i = 1; i <= j; i++)
		cout << a[i] << " ";
	getch();
	return (z);
}