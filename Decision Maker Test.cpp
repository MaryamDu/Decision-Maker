#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

struct stack
{
	string data;
	stack* next;
};

stack* top = NULL;

//add options
void push(string n)
{
	stack* temp = new stack;
	temp->data = n;
	temp->next = top;
	top = temp;
}

void search(stack* t, int index)
{

	stack* temp = t;

	int count = 0;
	while (temp != NULL) {
		if (count == index) {
			cout << (temp->data);
		}
		count++;
		temp = temp->next;
	}
}

int main()
{
	srand(time(NULL));
	int num;
	string option;

	cout << "Please input the number of options." << endl;
	cin >> num;
	cout << "List the options you'd like to decide from." << endl;


	for (int i = 0; i <= num; i++) 
	{
		getline(cin, option);
		push(option);
	}

	int opNum = rand() % num;
	cout << "You should: ";
	search(top, opNum);


	return 0;
}
