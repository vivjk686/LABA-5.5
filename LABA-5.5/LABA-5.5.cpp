// Lab_05_5.cpp
// < Shakh Vlad >
// Лабораторна робота № 5.5
// Рекурсивні функції
// Варіант 32

#include <iostream>

using namespace std;

// Рекурсивна функція для обчислення найбільшого спільного дільника НСД(n, m)
// з визначенням рівня (level) та глибини (depth) рекурсії
int gcd(int n, int m, int level, int &depth)
{
	if (level > depth)
		depth = level;

	cout << "level = " << level << "; n = " << n << ", m = " << m << endl;

	if (m == 0)
		return n;

	int r = n % m;
	if (r == 0)
		return m;
	else
		return gcd(m, r, level + 1, depth);
}

#ifndef UNIT_TESTING
int main()
{
	int n, m;

	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	if (n <= 0 || m <= 0)
	{
		cout << "Числа n та m мають бути натуральними (n > 0, m > 0)!" << endl;
		return 1;
	}

	int depth = 0;
	int result = gcd(n, m, 1, depth);

	cout << "-----------------------------------" << endl;
	cout << "НСД(" << n << ", " << m << ") = " << result << endl;
	cout << "depth = " << depth << endl;
	cout << "-----------------------------------" << endl;

	return 0;
}
#endif
