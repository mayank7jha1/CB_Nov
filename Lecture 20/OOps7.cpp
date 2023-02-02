#include<bits/stdc++.h>
using namespace std;

//2.Copy Constructor
class Car {
private:
	int price = 100000;
	int minimum = 50000;
public:
	int model_no;
	char name[100];//Static Array
	string condition;
	char* fuel;//Dynamic Array
	char check[100];

	Car() {
		//Default Constructor
		cout << "Inside default Constructor" << endl;
	}

	//Parameterised Constructor
	Car(int m, char* n, string c, int p, char* z) {
		cout << "Inside My own Parameterised Constructor" << endl;
		model_no = m;
		strcpy(name, n);
		condition = c;
		if (p < minimum) {
			// price = minimum;
		} else {
			price = p;
		}
		fuel = new char[strlen(z) + 1];
		strcpy(fuel, z);

	}

	Car(Car &x) {
		cout << "Inside my copy Constructor" << endl << endl;
		model_no = x.model_no;
		strcpy(name, x.name);
		condition = x.condition;
		price = x.price;
		fuel = new char[strlen(x.fuel) + 1];
		strcpy(fuel, x.fuel);
	}

	void set_price(int x) {
		if (x < minimum) {
			price = minimum;
		} else {
			price = x;
		}
	}

	//Getter:
	int get_price() {
		return price;
	}

	void print() {
		cout << "The name of the Car is " << name << endl;
		cout << "The model_no of the Car is " << model_no << endl;
		cout << "The price of the Car is " << price << endl;
		cout << "The Condition of the Car is " << condition << endl;
		cout << "Fuel of the Car is of type " << fuel << endl;
		cout << endl;
	}
};

int main() {

	Car d(2, "BMW", "Very Good", 80000, "Litre");
	//d.print();
	Car e(d);
	//e.print();

	d.name[0] = 'M';

	d.fuel[0] = 'Z';
	d.fuel[1] = 'T';
	d.print();
	cout << endl;
	e.print();

}



//Concept: Static array copy se copy karte ho:
//changes it will remain to its object only.

//Dynamic Array me changes karte ho:
//har jagah change hona chahiye

//Deep Copy and Shallow Copy

//Shallow Copy:
//Dynamic Memory: Heap bani:
//pointer address

//Deep copy