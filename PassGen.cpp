#include <iostream>
#include <ctime>
using namespace std;
const char box[] = "0123456789!@#$%^&*_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n = 0;
int lang = 99;
void random();
void input();
void langu();
void info();
int main()
{
	setlocale(0, "RUS");
	srand(time(0));
	n = 0;
	lang = 99;
	langu();

	
}
void langu() {
	if (lang != 0 && lang != 1) {
	cout << "0 - Русский" << endl << "1 - English" << endl << "Choose language(Выберите язык): ";
	cin >> lang;
	//cout << lang;
	langu();
	}
	else {
		info();
	}

}
	void input() {
		if (lang == 0)		cout << endl << "Количество символов(от 0 до 128): ";
		else if (lang == 1) cout << endl << "Number of symbols(from 0 to 128): ";
		cin >> n;
		cout << endl;
		int a = 0;
		int b = 128;
		if (n >= a && n <= b) random();
		else {
			if (lang == 0) cout << "Недопустимое значение!" << endl;
			else if (lang == 1) cout << "Invalid value!" << endl;
			input();
		}
		}
	void random() {
		if (lang == 0) cout << "Пароль: ";
		else if (lang == 1) cout << "Password: ";
			char a[128];
			for (int i = 0; i < n; i++) {
				a[i] = box[rand() % 69];
				cout << a[i];
			}
			cout << endl;
			input();
		}
	void info() {
		if (lang == 0) {
			string inform[2] = { " Asurov", " 0.3.0" };
			cout << "Разработчик:" << inform[0] << endl;
			cout << "Версия:" << inform[1] << endl;
		}
		else if (lang == 1) {
			string inform[2] = { " Asurov", " 0.3.0" };
			cout << "Created by:" << inform[0] << endl;
			cout << "Version:" << inform[1] << endl;
		}
		input();
	}