#include <iostream>
#include <conio.h>
#include <cmath>
void print()
{
	std::cout << " В одномірному масиві, що складається з дійсних елементів, обчислити номер максимального за модулем елемента масиву; суму елементів масиву, розташованих після першого додатного елемента." << std::endl;
}
using namespace std;
void main()
{
	const int n = 6;
	int a[n], min, s = 0;
	bool t = false;
	for (int i = 0; i < n; i++)
	{
		cout << "Введіть елемент" << endl;
		cin >> a[i];
		if (a[i] == 0) t = true;
		if (t == true)
			s += a[i];
	}
	
	cout << "Початковий масив" << endl;
	min= a[1];
	for (int i = 0; i < n; i++)
	{  
		cout << a[i] << "\t";
	if (abs(a[i]) < min) 
		min = a[i];
		
	}
      cout << endl;
	  cout << "Мін. елемент по модулю" << min << endl;
	  cout << "Сума елементів після 0" << s << endl;
	  int i, j, r;
	  i = 1;
	  if (n % 2 == 0) 
		  j = n - 2;
	  else
		  j = n - 1;
	  while (i < j)
	  {
		  r = a[i];
		  a[i] = a[j];
		  a[j] = r;
		  i += 2;
		  j -= 2;
	  }
	  cout << "Кінцевий масив " << endl;
	  for (int i = 0; i < n; i++)

	  cout << a[i] << "\t";
	   system("Pause");
}