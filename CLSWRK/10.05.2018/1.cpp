#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <string>

using namespace std;
class Vehicle {
private:
	string Name;
	int MaxSpeed;
public:
	//Конструктор с параметрами:
	Vehicle(string Name, int MaxSpeed ) { 
		this->Name = Name;		
		this->MaxSpeed = MaxSpeed;		
	}
	//Конструктор без параметров:
	Vehicle() {
		this->Name = "Audi";
		this->MaxSpeed = 100;
	}
	void SetName(string Name) {
		this->Name = Name;
		this->Name.shrink_to_fit();
	}
	string GetName() {
		return this->Name;
	}
	void SetMaxSpeed(int MaxSpeed) {
		this->MaxSpeed = MaxSpeed;
		
	}
	int GetMaxSpeed() {
		return this->MaxSpeed;
	}
	//Метод, обновляющий модель
	void UpdateModel() {
		this->MaxSpeed += 10;
	}
	void UpdateModel(int Speed) {
		this->MaxSpeed += Speed;
	}
	//Метод, возвращающий стоимость
	int Cost() {
		return this->MaxSpeed * 100;
	}
	int Cost(int Num) {
		return this->MaxSpeed * Num;
	}
	void Info() {
		cout << "Название: " << this->Name
			<< " Максимальная скорость: " << this->MaxSpeed
			<< " Стоимость: " << this->Cost() << endl;

	}
	~Vehicle() {
		//Деструктор
	}
};
class PremiumClass :public Vehicle {

public:
	PremiumClass(string Name, int MaxSpeed) :Vehicle(Name, MaxSpeed) {}
	PremiumClass() :Vehicle() {}

	void UpdateModel() {
		Vehicle::UpdateModel(5);
	}
	int Cost() {
		return  GetMaxSpeed() * 250;
	}
	~PremiumClass() {
		//Деструктор
	}
};

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Vehicle *V1, *V2;
	V1 = new Vehicle("Ford", 140);
	V1->Info();
	V2 = new Vehicle();
	V2->Info();

	PremiumClass *P1;
	P1 = new PremiumClass("Bentley", 160);
	P1->Info();	

	V1->UpdateModel();
	V2->UpdateModel();
	P1->UpdateModel();

	V1->Info();
	V2->Info();
	P1->Info();

	system("pause");
	return(0);
}

