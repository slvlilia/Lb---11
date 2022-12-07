#include <iostream>

#include <windows.h>

using namespace std;

void main()

{

	SetConsoleCP(1251);

	SetConsoleOutputCP(1251);



	double x, y; // координати

	char otv;

	do

	{

		cout << "x=";

		cin >> x;

		cout << "y=";

		cin >> y;

		cout << "\nТочка з координатами x=" << x << " и y=" << y;

		if ((y >= 1 - x) && (x * x + y * y <= 1))

			cout << " попадає ";

		else cout << " не попадає";

		cout << "\n Далі (Y/N)?";

		cin >> otv;

	} while (otv == 'y');





	cout << endl;

	system("pause");

}