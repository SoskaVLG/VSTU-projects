#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x, n, k,prod;		// prod - произведение

	cout << "\n Введите число x\n> ";
	cin >> x;
	cout << "\nВведите число k \n> ";
	cin >> k;
	n = 1; 
	prod = 1;

	while (n <= k)
	{
		prod *= ((n / 2) + x);
		cout << "\nПри n = " << n << "\t P = " << prod << "\n";
		n++; 
	}

	system("pause");
	return 0;
}
