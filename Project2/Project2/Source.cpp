#include <iostream>
#include <conio.h>
#include <climits>

using std::cout;
using std::endl;
using std::cin; // ����� ����� ���� ������ ������ � ��������� � ������


int main()
{
	setlocale(LC_ALL, "Russian");

	cout << " \t\t****BMI****\n\n";
	double BMI, Height, Weight;
	cout << " ������� ���� � ������ � ��� � �� : " << endl;
	cin >> Height >> Weight;
	BMI = Weight / (Height * Height);
	cout << " BMI = " << BMI << endl;

	_getch();
	return 0;
}