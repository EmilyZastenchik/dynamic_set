#include <iostream>
#include <cstdlib>
#include "set.h"

using namespace std;
/* 
Emily Zastenchik
Assignment 4
SDM

Problem - Create a Set class that stores integers in an array located in dynamic memory
The integers in a set cannot repeat and the order of integers are irrelevant.

Analysis - 
member data
	elements	-	pointer to an array of integers
	size	-	pointer to an int
member functions
	default constructor	
		Set()	 initializes private member data		
	destructor	
		~Set()		removes data stored in the heap/free store
	copy constructor	
		Set(const Set&)		makes a copy of values stored in dynamic memory
	assignment operator	
		Set& operator=(const Set&)	checks for self-assignment / deletes old values and assigns existing values in dynamic memory

Design -
test function - created outside of main function to test default constructor, copy constructor, assignment operator, and destructor
a function -  user inputs values for set and add additional values if permitted 
*/

void a();
void test();
int main()
{
	//test();
	a();
	

	return 0;
}
void a()
{
	int quant = 0;
	cout << "Enter amount of values in set: " ;
	cin >> quant;
	cout << endl;
	int array[quant];
	
	cout << "Enter values for the set: " << endl;
	for(int i = 0; i < quant; i++)
		cin >> array[i];
		
	Set a(array, quant);
	
	int check = 0;
	string SENTINEL = "no";
	string add_more = " ";
	string ans = " ";
	
	cout << "Add values to set? " << endl;
	cin >> add_more;
	while(add_more!= SENTINEL)
	{
	cout << "Enter an integer to add value in set: ";
	cin >> check;

	if(a.contains(check) == 0)
		a.add(check);
		//cout << "YES, " << check << " is in the set." << endl;
	else
		cout << "Sorry, " << check << " is already in the set." << endl;
		
	cout << "Add another value? (Enter  or .)" << endl;
	cin >> ans;
	if(ans != "yes")
	break;
	}
	cout << a << endl;			
}
void test()
{
	Set A;	//default constructor
	int arr[5] = {3, 16, 45, 9, 0};
	Set a(arr, 5);	
	cout << a << endl;
	
	int ay[5] = {23, 4, 13, 0, 2};
	Set b(ay, 5);
	cout << b << endl;
	
	b = a;	//assignment operator
	cout << a << endl;
	
	cout << b[3] << endl;	//overload [] operator
	Set c(a);	//copy constructor
	cout << c << endl;
	
	a.add(2);		//add fn
	cout << a << endl;
	
	cout << a.contains(0) << endl;	//contains (1 YES, 2 NO)
	cout << a.contains(1) << endl;
	cout << a.contains(2) << endl; 
	
	cout << a.get_size() << endl;	//get_size fn
	
}


