#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>

using namespace std;
class Human {
private:
	string Name;
	int Age;
	double Salary;
public:
	Human(string Name, int Age, double Salary) {
		this->Name = Name;
		this->Salary = Salary;
		this->Age = Age;
		cout << "Работает конструктор с параметрами" << endl;

	}
	Human() {
		this->Name = "Иван";
		this->Age = 1980;
		this->Salary = 1000;
		cout << "Работает конструктор без параметров" << endl;
	}
	void SetName(string Name) {
		this->Name = Name;
		this->Name.shrink_to_fit();
	}
	string GetName() {
		return this->Name;
	}
	void SetAge(int Age) {
		this->Age = Age;
	}
	int GetAge() {
		return this->Age;
	}
	void SetSalary(double Salary) {
		this->Salary = Salary;
	}
	double GetSalary() {
		return this->Salary;
	}
	void Info() {
		cout << "Имя " << this->Name << " Г.Р. " << this->Age << " З.П. " << this->Salary << endl;

	}
	~Human() {
		cout << "Работает деструктор" << endl;

	}
};


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Human **H;
	int n;
	cout << "Введите количество людей" << endl;
	cin >> n;
	while (n < 1 || n>10) {
		cout << "Ошибка ввода" << endl;
		cin >> n;
	}
	H = new Human*[n];


	for (int i = 0; i < n; i++) {
		cout << "Введите информацио о  " << i + 1 << " человеке" << endl;
		cout << "Введите имя " << endl;
		while (cin.get() != '\n');
		//cin.get();
		char*Name = new char[256];
		cin.getline(Name, 256);
		cout << "Введите год " << endl;
		int Year;
		cin >> Year;
		cout << "Введите зп " << endl;
		double Salary;
		cin >> Salary;
		H[i] = new Human(Name, Year, Salary);
		H[i]->Info();
	}

	return(0);
}

