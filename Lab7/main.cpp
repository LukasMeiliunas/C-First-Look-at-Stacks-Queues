#include "StackDoubles.h"
#include <iostream>
#include<list>
#include <queue>
#include<vector>
using namespace std;

int main() {
	//Q1
	stackDoubles s;
	s.push(1);
	s.push(3);
	s.push(4);
	s.push(5);
	s.display();
	s.showTop();
	//Q2
	cout << "\n";

	//Implementing a queue of doubles in a list
	queue<double,list<double>> myQ;
	myQ.push(5.0);
	myQ.push(3.0);
	myQ.push(4.4);
	myQ.push(1.4);
	/*Iteration does not work.
	while (!myQ.empty()) {
		cout << myQ.front() << endl;
		cout << myQ.back();
	}
	*/
	//q3
	//queue of doubles in a vector
	priority_queue<double, vector<double>> myQ1;
	myQ1.push(30.00);
	myQ1.push(35.00);
	myQ1.push(40.00);
	myQ1.push(34.00);
	while (!myQ1.empty()) { // is empty check is '' top '' is not null and prints out 
		cout << myQ1.top() << endl;
		myQ1.pop();
	}
	system("pause");
	return 0;

}