#include "StackDoubles.h"

stackDoubles::stackDoubles()
{
	top = -1;
}

bool stackDoubles::push(int x)
{
	if (top >= (MAX - 1)) {
		return false;
	}
	else {
		a[++top] = x;
		return true;
	}
	
}

double stackDoubles::pop()
{
	if (top < 0) {

		return 0.0;
	}
	else {
		int x = a[top--];
	}
}

bool stackDoubles::isEmpty()
{
	if (top == -1) {
		return true;
	}
	else
	{
		return false;
	}
}

void stackDoubles::display()
{
	if (isEmpty()) {
		cout << "\n---Stack is empty!---";
	}
	else {
		for (int i = 0; i <= top; i++) {
			cout << a[i] << "\n";
		}
	}
}

void stackDoubles::showTop()
{
	if (isEmpty()) {
		cout << "\nStack is Empty -- Try Again--";
	}
	else {
		cout << "Top element is:  " << a[top] << "\n";
	}
}

