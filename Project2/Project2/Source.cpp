#include <iostream>
#include <conio.h>
#include <climits>

using std::cout;
using std::endl;
using std::cin; // чтобы можно было писать данные в программе в ручную


int main()
{
	setlocale(LC_ALL, "Russian");

	cout << " \t\t****BMI****\n\n";
	double BMI, Height, Weight;
	cout << " ¬ведите рост в метрах и вес в кг : " << endl;
	cin >> Height >> Weight;
	BMI = Weight / (Height * Height);
	cout << " BMI = " << BMI << endl;

	_getch();
	return 0;
}