#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

//Hum log BMW hain:
//EK car ka design bana rahe hain
//jisse aage jaake new car ke design banaiye jaasake

class Car {//We are just creating a design
	//there are certain properties which i don't want
	//anybody to access apart from me.
	//jis bande ne design likha hain.

	//main ye nahi chahta ki koi banda is class ke bahar
	//kuch attributes ko access kar paaaye.
	int price;
	int model_no;
	char name[100];
	string condition;

	void print() {
		cout << "The name of the Car is " << name << endl;
		cout << "The model_no of the Car is " << model_no << endl;
		cout << "The price of the Car is " << price << endl;
		cout << "The Condition of the Car is " << condition << endl;
	}
};

int main() {
	//aap apni pehli car create karna chahte ho:
	//Showroom:
	Car c;//Object of the class car.

	//koi bhi object ke through  class ki property fetch karna hain
	//toh you use .

	c.model_no = 2;
	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.price = 20000;
	c.condition = "Very Good";

	Car d;
	d.model_no = 100;
	d.name[0] = 'T';
	d.name[1] = 'M';
	d.name[2] = 'Z';
	d.price = 200000;
	d.condition = "Bad";

}

//Classe: Design: Create:


//ABZ: Backend Spring Boot:

//Team: Backend: Tech lead senior developers :

//App ek feature par kaam kar raha hu:
//feature ke ander change karo:
//Change: Change: permission chahiye deploy:
//tech lead: review:
//app kharab :
//Mujhe na ios ke integration:
//data base chahiye : student aur email id contacts education:

//fetch: daatabase(X).(delete karsakta)

//Marketting team ke head : Database chahiye:
//permission (x): database laake dena:
//database: copy hogi: