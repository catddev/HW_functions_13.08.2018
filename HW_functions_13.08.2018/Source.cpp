#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>

using namespace std;

//1. Написать функцию, которая возвращает истину, если
// передаваемое значение положительное и ложь, если отрицательное.
bool positive(int x) {
	if (x >= 0) return true;
	else return false;
}
// 2. Написать функцию, которая в зависимости от выбора
// пользователя вызывает функции сложения, произведения,
// вычитания, деления двух чисел(эти функции тоже нужно написать самостоятельно).
double sum(double x, double y) {
	return x + y;
}
double deduct(double x, double y) {
	return x - y;
}
double multiply(double x, double y) {
	return x * y;
}
double divide(double x, double y) {
	return x / y;
}
double act(double x, double y) {
		cout << "choose type of an action:" << endl;
		cout << "1 (+), 2 (-), 3(*), 4(/)" << endl;
		int n = 0;
		cin >> n;
		if (n == 1) return sum(x, y);
		else if (n == 2) return deduct(x, y);
		else if (n == 3) return multiply(x, y);
		else if (n == 4) return divide(x, y);
		else
		{
			cout << "error" << endl;
			return 0;
		}
}
// 3. Написать функцию, выводящую на экран прямоугольник с
// высотой N и шириной K.
void print_figure(int x, int y) {
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}
// 4. Написать функцию, вычисляющую факториал переданного ей числа.
unsigned long long int fact(int x) {
	if (x == 0) return 1;
	else if (x < 0) return 0;

	int fact=1;
	for (int i = 1; i <= x; i++)
		fact *= i;
	return fact;
}


int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

	while (true)
	{
		cout << "Задача № ";
		cin >> tn;

		switch (tn)
		{
		case 1:
		{
			int x;
			cin >> x;
			cout << positive(x) << endl << endl;
		}
		break;
		case 2:
		{
			int x, y;
			cin >> x >> y;
			cout << act(x, y) << endl << endl;
		}
		break;
		case 3:
		{
			int N, K;
			cin >> N >> K;
			print_figure(N, K);
		}
		break;
		case 4:
		{
			int n;
			cin >> n;
			cout << fact(n) << endl << endl;
		}
		break;
		default:
			cout << "нет такой задачи" << endl << endl;
		}
	}
	system("pause");
	return 0;
}