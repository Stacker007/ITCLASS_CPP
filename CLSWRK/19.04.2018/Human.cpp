#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


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
		}
	
	
};


int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	struct Rectangle R1;
	int a,b;
	puts("Ââåäèòå ðàçìåðû ñòîðîí ïðÿìîóãîëüíèêà");
	scanf("%d%d", &a, &b);
	R1.SetA(a);
	R1.SetB(b);
	printf("Ïåðèìåòð ðàâåí %d\n", R1.Perimeter());
	getch();	
	return(0);
}

