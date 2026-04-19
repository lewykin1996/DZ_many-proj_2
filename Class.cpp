#include <iostream>
#include <string>
#include "Counter.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	string answer;
	int startValue = 0;

	cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
	cin >> answer;

	if (answer == "yes") {
		cout << "Введите начальное значение счётчика: ";
		cin >> startValue;
	}

	Counter counter(startValue);

	char command;

	while (true) {
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> command;

		if (command == '+') {
			counter.increment();
		}
		else if (command == '-') {
			counter.decrement();
		}
		else if (command == '=') {
			cout << counter.get_value() << endl;
		}
		else if (command == 'x') {
			cout << "До свидания!" << endl;
			break;
		}
	}

	return 0;
}




