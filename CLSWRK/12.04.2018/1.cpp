#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

struct Rectangle{
	private:
		int A;
		int B;
	public:
		void SetA(int A){
			this->A=A;
		}
		void SetB(int B){
			this->B=B;
		}
		int Perimeter (){
			return((this->A+this->B)*2);
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

