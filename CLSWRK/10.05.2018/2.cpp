#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>


using namespace std;

class Human {

	string Name;

	
	Human(string Name) {
		
		this->Name = Name;
	}
};
//class Student :public Human {};
class Student :public virtual  Human {
	int Mark;
	Student(string Name, int Mark) :Human(Name) {
		
		this->Mark = Mark;
	}
};
//class Worker :public Human {};
class Worker :public virtual Human {
	int Salary;
	Worker(string Name, int Salary) :Human(Name) {
		
		this->Salary = Salary;
	}
};


class SuperMan :public Student, public Worker {
	string CoatColor;
	SuperMan(string Name, int Mark, int Salary, string CoatColor) : Student(Mark), Worker(Salary) {
		this->CoatColor = CoatColor;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SuperMan *S1;
	S1 = new SuperMan("Leo", 10, 150, "blue");
	cout << S1->Name << endl;
	system("pause");
	return 0;
}
