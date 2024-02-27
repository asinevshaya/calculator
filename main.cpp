#include<iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");

	char inputThird{};
	float inputFirst{}, inputSecond{}, sum{};
	string math;

	/*
	Описание переменных
	inputFirst - первая математическая переменная
	inputSecond - вторая математическая переменная
	inputThird - переменная определяющая математиеское действие
	math - математическое действие
	sum - результат выражения
	*/

	cout << "Введите первую переменную: ";
	cin >> inputFirst;
	cout << "\nВведите вторую переменную: ";
	cin >> inputSecond;
	cout << "\nВыберите математическое действие:\n1. Сложение (+)\n2. Вычитание (-)\n3. Умножение (*)\n4. Деление (/)\n\nВвод: ";
	cin >> inputThird;
	if (inputThird > 4 || inputThird < 1) {
		cout << "Вы ввели неверное значение!\n\t\tЯ сломаллся :(\n";
	}
	else {
		switch (inputThird) {
		case 1:
			sum = inputFirst + inputSecond;
			math = "+";
			break;
		case 2:
			sum = inputFirst - inputSecond;
			math = "-";
			break;
		case 3:
			sum = inputFirst * inputSecond;
			math = "*";
			break;
		case 4:
			sum = inputFirst / inputSecond;
			math = "/";
			break;
		}
		cout << "\nВывод: " << inputFirst << math << inputSecond << "=" << sum << endl;
	}
}