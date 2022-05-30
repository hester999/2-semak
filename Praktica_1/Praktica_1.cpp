#include <iostream>
#include <windows.h>

using namespace std;

void mass_a() {
	int a;
	int i = 0;

	cout << "Введите размер массива a: ";
	cin >> a;


	cout << "Заполните  массив a : " << endl;
	int* new_a = new int[a];

	for (int i = 0; i < a; i++) {
		cin >> new_a[i];
	}
	cout << "Массив а" << endl;
	for (int i = 0; i < a; i++) {

		cout << new_a[i] << endl;
	}

	int len_a = sizeof(*new_a);

	cout << "___________________________________________" << endl;

	int max_a = new_a[0];

	for (int i = 0; i < len_a; ++i) {

		if (new_a[i] > max_a) {
			max_a = new_a[i];
		}


	}
	cout << "Max b: " << max_a << endl;

	int s;

	for (i; i < a; i++) {

		s = new_a[i] - max_a;
		cout << s << endl;
	}
}

void mass_b(){
	int b;
	int i = 0;

	cout << "Введите размер массива b: ";
	cin >> b;

	cout << "Заполните  массив b : " << endl;
	int* new_b = new int[b];

	for (int i = 0; i < b; i++) {
		cin >> new_b[i];
	}
	cout << "Массив b" << endl;
	for (int i = 0; i < b; i++) {

		cout << new_b[i] << endl;
	}

	int len_b = sizeof(*new_b);

	cout << "___________________________________________" << endl;

	int max_b = new_b[0];

	for (int i = 0; i < len_b; ++i) {

		if (new_b[i] > max_b) {
			max_b = new_b[i];
		}


	}
	cout << "Max b: " << max_b << endl;

	int s;

	for (i; i < b; i++) {

		s = new_b[i] - max_b;
		cout << s << endl;
	}

}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*int a;
	int b;
	int i =  0;

	cout << "Введите размер массива a: ";
	cin >> a;

	cout << "Введите размер массива b: ";
	cin >> b;*/

	/*cout << "Заполните  массив a : " << endl;
	int* new_a = new int[a];

	for (int i = 0; i < a; i++) {
		cin >> new_a[i];
	}
	cout << "Массив а" << endl;
	for (int i = 0; i < a; i++) {
		
		cout << new_a[i] << endl;
	}*/


	/*cout << "Заполните  массив b : " << endl;
	int* new_b = new int[b];

	for (int i = 0; i < b; i++) {
		cin >> new_b[i];
	}
	cout << "Массив b" << endl;
	for (int i = 0; i < b; i++) {

		cout << new_b[i] << endl;
	}

	int len_b = sizeof(*new_b);
	
	cout << "___________________________________________" << endl;

	int max_b = new_b[0];

	for (int i = 0; i < len_b; ++i) {
		
		if (new_b[i] > max_b){ 
			max_b = new_b[i];
		}


	}
	cout << "Max b: " << max_b << endl;

	int s;

	for (i; i < b; i++) {

		s = new_b[i] - max_b;
		cout << s << endl;
	}*/

	mass_a();
	mass_b();


	return 0;
};
