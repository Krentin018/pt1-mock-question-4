///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

#include <iostream>
#include <string.h>

using namespace std;

class Animal{
public:
	virtual void name()
	{

	}
	virtual void does()
	{

	}

};
class Bird : public Animal{
public:
	void name(){
		cout << "I iz Bird ;)"<<endl;
	}
	void does(){
		cout << "I does eat" << endl;
	}
};
class Dog: public Animal{
public:
	void name(){
		cout << "My name jeff" << endl;
	}
	void does(){
		cout << "I sell Drugs" << endl;
	}
};

int main()
{
	Animal *animalptr;
	Dog mydog;
	Bird mybird;

	animalptr = &mydog;
	animalptr->name();
	animalptr->does();

	animalptr = &mybird;
	animalptr->name();
	animalptr->does();
}