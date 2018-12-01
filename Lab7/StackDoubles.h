#pragma once
#include <iostream>
#define MAX 1000 
using namespace std;

class stackDoubles {
public:
	double a[MAX];
	stackDoubles();
	bool push(int x);
	double pop();
	bool isEmpty(); // same as top
	void display();	void showTop();
private:
	int top;
};