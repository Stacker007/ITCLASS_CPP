#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>


using namespace std;
class Human {
	private:
		char *Name;
		int Age;
		double Salary;
	public:
		Human (char* Name, int Age, double Salary){
			this ->Name=new char[strlen (Name)+1];
			strcpy (this-> Name, Name);
			this->Salary = Salary;
			this->Age = Age;
			
		}
		Human (){
			this->Name = new char[5];
			strcpy(this->Name, "Èâàí");
			this-> Age = 1980;
			this -> Salary = 1000;
			
		}
		void SetName(char*Name){
			delete [] this->Name;
			this->Name = new char [strlen(Name)+1];
			strcpy(this->Name, Name);
		}
		char* GetName(){
			return this->Name;
		}
		void SetAge(int Age){
			this->Age = Age;
		}
		int GetAge(){
			return this->Age;
		}
		void SetSalary(double Salary){
			this->Salary = Salary;
		}
		double GetSalary(){
			return this->Salary;
		}
		void Info(){
			cout << "Èìÿ "<< this->Name << " Ã.Ð. "<< this-> Age<< " Ç.Ï. " << this-> Salary<< endl;
			
		}
		~Human(){
			cout<< "Ðàáîòàåò äåñòðóêòîð"<< endl;
			delete [] this-> Name;
		}
};


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Human **H;
	int n;
	cout << "Ââåäèòå êîëè÷åñòâî ëþäåé" << endl;
	cin >> n;
	while (n<1||n>10){
		cout << "Îøèáêà ââîäà"<< endl;
		cin >> n;
	}
	H= new Human*[n];
	
	
	for (int i; i<n; i++){
		cout << "Ââåäèòå èíôî î "<< i+1 << " ÷åëîâåêå"<< endl;
		cout<< "Ââåäèòå èìÿ "<< endl;	
		while (cin.get()!='\n') ;
		//cin.get();
		char*Name = new char[256];
		cin.getline(Name, 256 );
		cout<< "Ââåäèòå ãîä "<< endl;
		int Year;
		cin >> Year;
		cout<< "Ââåäèòå çï "<< endl;
		double Salary;
		cin >> Salary;
		H[i] = new Human(Name, Year, Salary);
		H[i]->Info();
	}
	
	return(0);
}

