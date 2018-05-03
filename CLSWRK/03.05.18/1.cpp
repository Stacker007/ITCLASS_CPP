#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>

using namespace std;
class Human {
private:
	string Name;
	int Age;
public:
	Human(string Name, int Age ) {
		this->Name = Name;
		
		this->Age = Age;
		cout << "Работает конструктор с параметрами класса человек" << endl;
	}
	Human() {
		this->Name = "Иван";
		this->Age = 1980;
		cout << "Работает конструктор без параметров класса человек" << endl;
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
	
	void Info() {
		cout << "Имя " << this->Name << " Г.Р. " << this->Age <<  endl;

	}
	~Human() {
		cout << "Работает деструктор класса человек" << endl;
	}
};
class Student :public Human {
private:
	double midMark;
public:
	Student(string Name, int Age, double sr) :Human (Name, Age) {
		this->midMark = sr;
		cout << "Работает конструктор с параметрами класса студент";
	}
	Student() :Human() {
		this->midMark = 2;
		cout << "Работает конструктор без параметров класса студент";
	}
	double GetMidMark(){
		return this->midMark;
	}
	void SetMidMark(double midMark) {
		this->midMark = midMark;
	}
	void InfoStudent() {
		cout << "Имя " << this->GetName() << " Г.Р. " << this->GetAge << " Средний балл " << this->midMark;
	}
	~Student() {
		cout << "Работает деструктор класса студент";
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
		H[i] = new Human(Name, Year);
		H[i]->Info();
	}

	return(0);
}

