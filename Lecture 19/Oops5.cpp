#include<bits/stdc++.h>
using namespace std;

//Classes: 4 Things: Automatically Invoked

//1.Constructor(Object banate ho)
//2.Copy Constructor(ek object ko dusre object me copy karte ho)
//3.Copy Assignment Operator(jab aap koi object jo dusre me copy karteho using = operator)
//Destructor(Ja bhi oject ka kaam khatam hojaaye.)



//1.Copy Constructor
class Car {
private:
	int price = 100000;
	int minimum = 50000;
public:
	int model_no;
	char name[100];
	string condition;

	Car() {
		//Default Constructor
		cout << "Inside default Constructor" << endl;
	}

	//Parameterised Constructor
	Car(int m, char* n, string c, int p) {
		cout << "Inside My own Parameterised Constructor" << endl;
		model_no = m;
		strcpy(name, n);
		condition = c;
		if (p < minimum) {
			// price = minimum;
		} else {
			price = p;
		}
	}

	Car(Car &x) {
		cout << "Inside my copy Constructor" << endl;
		model_no = x.model_no;
		strcpy(name, x.name);
		condition = x.condition;
		price = x.price;
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
		cout << endl;
	}
};

int main() {

	// Car c;

	// c.model_no = 21;
	// c.name[0] = 'Z';
	// c.name[1] = 'M';
	// c.name[2] = 'W';
	// c.name[3] = '\0';
	// c.set_price(90000000);

	// c.condition = "Very Good-2";
	// c.print();

	Car d(2, "BMW", "Very Good", 80000);
	d.print();

	Car e(d);//Copy Constructor invoke hojata hain.
	//E car ke ander d car ki saari values aajaye;

	e.print();
}




//Kaam kya karna hain:

//apne ko ek object ki saari values ko
//dusre onject ke ander daalni hain.
