#ifndef SET_H
#define SET_H

using namespace std;
class Set
{
	public:
		Set();	//default constructor
		Set(int[], int);
		~Set();		//destructor
		Set(const Set&);	//copy constructor
		Set& operator=(const Set&);	//assignment operator
		void add(int n);
		int& operator [](int);
		int operator [](int) const;
		
		bool contains(int n) const;
		int get_size() const;
		
		friend ostream& operator<<(ostream& out, const Set&);
		
	private:
		int* elements;
		int* size;	
};


#endif
