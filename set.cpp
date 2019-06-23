#include <cstdlib>
#include <iostream>
#include "set.h"

using namespace std;


Set::Set()
{
	elements = NULL;
	size = new int(0);
}
Set::Set(int arr[], int s)
{
	size = new int (s);
	elements = new int [*size];	
	for(int i = 0; i < *size; ++i)
	elements[i] = arr[i];
}
Set::~Set()		//destructor
{
	cout << "elements deleted" << endl;
	delete elements;
	cout << "size deleted" << endl;
	delete size;
}
Set::Set(const Set& x)	//copy constructor
{
	size = new int (x.get_size());
	elements = new int [x.get_size()];	
	for(int i = 0; i < *size; ++i)
		elements[i] = x[i];
}
Set& Set::operator=(const Set& x)	//assignment operator
{
	if(this == &x)	//checks for self assignment
		return *this;
	else
	{
		delete elements;
		size = new int(x.get_size());
		elements = new int [x.get_size()];
		for(int i = 0; i < *size; ++i)
		elements[i] = x[i];
	}
}
void Set::add(int n)
{	
	elements[(*size)++] = n;
}
int& Set::operator [](int i)
{
	return elements[i];
}
int Set::operator [](int i) const
{
	return elements[i];
}
bool Set::contains(int n) const
{
	for(int i = 0; i < *size; i++)
	{

	if(elements[i] == n)
		return true;
	}
	return false;
}
int Set::get_size() const
{
	return *size;
}
ostream& operator<<(ostream& out, const Set& z)
{
	for(int i = 0; i < z.get_size(); ++i)
		out << z.elements[i] << '\t';
		out << endl;
	return out;
}


