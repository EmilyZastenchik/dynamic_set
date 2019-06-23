# dynamic_set
Assignment 4 Intro programming 2

Emily Zastenchik
Assignment 4
SDM

Problem - 

Create a Set class that stores integers in an array located in dynamic memory
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
        Set& operator=(const Set&)	
        checks for self-assignment / deletes old values and assigns existing values in dynamic memory

Design -

    test function
    - created outside of main function to test default constructor, copy constructor, assignment operator, and destructor
    
    a function 
    -  user inputs values for set and add additional values if permitted 
