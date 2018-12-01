#pragma once
#include <iostream>
#define MAX 1000 
using namespace std;

class stackDoubles {
public:
	double a[MAX]; // max size 
	
	stackDoubles();
	
	bool push(int x);
	
	double pop();
	
	bool isEmpty(); //checks if stack is empty, if it is empty returns false
	
	void display();
	
	void showTop();

private:
	int top;
};
