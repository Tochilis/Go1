#include <iostream>

using namespace std;

int* ptr;
int var = 7;
int foo = 21;
int& ref = var;

int main()
{
	cout << "POINTERS EXAMPLE:" << "\n\n";
	cout << var << "\n";;
	ptr = &var; //address of variable var
	ptr = &foo;
	cout << "Address of var is " << ptr << "\n";
	cout << "Value from address " << ptr << " is " << *ptr << "\n\n";

	cout << "REFERENCE: \n";
	//cout << &ref;

}