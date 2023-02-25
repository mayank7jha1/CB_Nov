#include<bits/stdc++.h>
using  namespace std;


void Print(forward_list<int>&f) {

	//You can iterate over a list using a iterator

	forward_list<int>::iterator it;

	for (it = f.begin(); it != f.end(); it++) {
		cout << (*it) << " -> ";
	}

	//auto : int:

	//For every element that is inside forward list aap kaam karo

	// for (auto x : f) {
	// 	cout << x << " -> ";
	// }

	cout << "NULL" << endl;;

}


int main() {

	forward_list<int>f;


	//assign funcion:

	// f.asign(56);
	// f.assign(92);
	// f.assign(101);

	f.assign({56, 105, 92});//Insert at tail

	//Multiple Inputs ko dalna

	// {}: Mulitple elements

	f.assign({111});//Purani ll ko replace kardiya

	f.assign(111, 10);//agar mujhe ek sath 10 ko 111 bar daalna hain






	//Assign insert at head / tail


	//Print(f);


	//Assign Functions: f.assign(5,10);
	//f.assign({12,13,14,15,19});//Tail




	//Agar aapke pass ek container hain

	vector<int>v = {1, 2, 3, 4, 5};
	//I want to insert all the valus of this vector into the forward list;


	f.assign(v.begin(), v.end());//Space

	forward_list<int>g(f.begin(), f.end());

	// g.assign(f.begin(), f.end());

	//Print(g);


	//Insert at head:

	g.push_front(21);
	Print(g);

	//g.push_back(13);
	//g.emplace_front(222);

	g.pop_front();


	g.remove(1);//Element ko remove kar deeta hain

	g.clear();//empty karne ko ll ko




	Print(g);

}


//Container:  Algorithms and Iterators:
//.begin()

//Documentations




//Insert_after


//CP:

//Trees: Revise:(recursion):
//Wednesday: // DSA:



//Binary Search:

//Array and Strings
//Recursion:



//DSA: LL trees stacks and queues maps




//DP: 50



