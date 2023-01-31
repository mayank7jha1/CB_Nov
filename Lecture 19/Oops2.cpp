#include<bits/stdc++.h>
using namespace std;

//Car Design Creater ho
class Car {//Public ,private
private:
	int price;
public:
	int model_no;
	char name[100];
	string condition;

	void print() {
		cout << "The name of the Car is " << name << endl;
		cout << "The model_no of the Car is " << model_no << endl;
		cout << "The price of the Car is " << price << endl;
		cout << "The Condition of the Car is " << condition << endl;
		cout << endl;
	}
};

int main() {

	Car c;//Object of the class car.

	c.model_no = 2;//Iski value ko change kar rahe ho.
	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.name[3] = '\0';
	c.price = 20000;
	c.condition = "Very Good";
	c.print();

	Car d;
	d.model_no = 100;
	d.name[0] = 'T';
	d.name[1] = 'M';
	d.name[2] = 'Z';
	d.name[3] = '\0';
	d.price = 200000;
	d.condition = "Bad";
	d.print();

}

