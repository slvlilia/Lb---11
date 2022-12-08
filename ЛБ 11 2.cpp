
#include <conio.h>
#include <iostream>
using namespace std;
void main()
{
	const n = 3; m = 4;
	int A[n][m];
	int i, j, max, x, y;
	cout << "Ввести елементи масива" < endl;
	for (i = 0; i < n; i++)
	for (j = 0; j < m; j++)
	cin >> A[i][j]; max = A[0][0];
	x = 0; y = 0;
	for (i = 0; i < n; i++) for (j = 0; j < m; j++)
		if (A[i][j] > max) { max = A[i][j]; x = i; y = j; }
	cout « "max елемент = "«max«" "«" Знаходиться на позиції "«х«":"«у; 
	system("Pause");}