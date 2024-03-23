#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	/*
	int k = 0;
	int i1, i2, i3;
	for (int i = 100; i <=999; i++)
	{
		i1 = 1 / 100;
		i2 = i % 10;
		i3 = (1 % 100) / 10;
		if (i1 == i2 || i2 == i3 || i3 == i1) k++;
	}
	cout << "Результат: " << k << "\n";
	*/
	/*
	int n1 = 0, n2 = 0, n3 = 0, summ = 0, a = 0;
	for (int i = 100; i <= 999; i++)
	{
		n1 = i / 100;
		n2 = (i / 10) % 10;
		n3 = i % 10;
		if (n1 != n2 && n2 != n3 && n1 != n3)
		{
			cout << i << endl;
		}
	}
	*/
	/*
	int i = 0, a = 0, k;

	cout << "Введите число: ";
	cin >> k;
	cout << endl;

	while (k > 0)
	{
		if (k % 10 != 3 && k % 10 != 6)
		{
			a *= 10;
			a += k % 10;
		}
		k /= 10;
	}

	cout << "Полученное число: ";

	while (a > 0)
	{
		cout << a % 10;
		a /= 10;
	}
	cout << endl << endl;
	*/
	/*
	int a = 0, an, k = 0, i = 1;
	cout << "Введите число  =";
	cin >> a;
	bool c;
	for (int i = 1; i <= a; i++)
	{
		c = ((a % (i)) == 0);

		if (c == 1)
		{
			cout << i << endl;
		}
	}
	*/
	/*
	int a, sum = 0;

	cin >> a;

	for (int b = a; b > 0; b /= 10)

	{

		sum += b % 10;

	}

	if (sum * sum * sum == a * a) cout << "Подходит" << endl;

	else cout << "Не Подходит " << endl;
	*/
	/*
	cout << "Введите n:";
	int n;
	cin >> n;
	cout << "ДЕЛИТЕЛИ: " << endl;
	n = (n < 0) ? -n : n;

	for (int i = -n; i <= n; i++) {
		if (i == 0) continue;
		if (n % i == 0) {
			cout << i << ' ';
		}
	}
	*/
	/*
	int num;
	cout << "Введите свой номер\n";
	cin >> num;

	for (int i = 1; i <= num; i++) 
	{
		if (num % i == 0)
			cout << i << "\n";
	}
	*/


		system("pause");
		return 0;
	
}

