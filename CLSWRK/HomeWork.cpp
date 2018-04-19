#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <iomanip>

using namespace std;
class Student {
	private:
		char*Name;
		char *Birth;
		char* Adress;
		char* Phone;
		char* Facult;
		int Cource;
	public:
		Human (char*Name, char *Birth, char* Adress, char* Phone, char* Facult, int Cource){
			this-> Name = new char[strlen(Name)+1];
			strcpy (this->Name, Name);
			this-> Birth = new char[strlen(Birth)+1];
			strcpy (this->Birth, Birth);
			this-> Adress = new char[strlen(Adress)+1];
			strcpy (this->Adress, Adress);
			this-> Phone = new char[strlen(Phone)+1];
			strcpy (this->Phone, Phone);
			this-> Facult = new char[strlen(Facult)+1];
			strcpy (this->Facult, Facult);
			this->Cource = Cource;			
		}
		Human (){
			this-> Name = new char[strlen("Èìÿ")+1];
			strcpy (this->Name, "Èìÿ");
			this-> Birth = new char[strlen("Äàòà")+1];
			strcpy (this->Birth, "Äàòà");
			this-> Adress = new char[strlen("Àäðåñ")+1];
			strcpy (this->Adress, "Àäðåñ");
			this-> Phone = new char[strlen("Òåëåôîí")+1];
			strcpy (this->Phone, "Òåëåôîí");
			this-> Facult = new char[strlen("Ôàêóëüòåò")+1];
			strcpy (this->Facult, "Ôàêóëüòåò");
			this->Cource = Cource;				
		}
		void SetName(char*Name){
			delete [] this-> Name;
			this-> Name = new char [strlen(Name)+1];
			strcpy(this->Name, Name);
		}
		char * GetName(){
			


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

