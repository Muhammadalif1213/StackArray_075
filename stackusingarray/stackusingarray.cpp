#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}

	void push() {
		int element;
		cout << "Enter an Element : ";
		cin >> element;
		if (top == 4) {
			cout << "Number of data exceed the Limit" << endl;
			return ;
		}

		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << " ditambahkan(pushed)" << endl;

		
	}

	void pop() {
		
	}

	
};
