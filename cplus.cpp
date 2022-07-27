******************************************************************************************************************************
***************************             PROGRAMMING EXERCISE                **************************************************
******************************************************************************************************************************

** Candidate name: 

/* Choose one of the programming exercises: */


/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>                Exercise 1:             <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/

/* What does the following program do? */
/* What would you improve? */


#include <iostream>

using namespace std;

int tFunction(int parameter);

class Phone {

    public:
	    double cost;   
	    int slots; 
};

class people{

	public:
		int graduationyear;
		int children;

	private:
		char name = "John";
		int age = 20;

	public:
	/****************************************************/
	/***              getters                         ***/
	/****************************************************/

	int getAge(void)
	{
		return age;
	}

	char getName(void)
	{
		return name;
	}

	/****************************************************/
	/***              setters                         ***/
	/****************************************************/
}

int main() {
    
	Phone Y6;        
	Phone Y7;        

	Y6.cost = 100.0;
	Y6.slots = 2;

	Y7.cost = 200.0;
	Y7.slots = 2;
	cout << "Cost of Huawei Y6 : " << Y6.cost << endl;
	cout << "Cost of Huawei Y7 : " << Y7.cost << endl;

	cout << "Number of card slots for Huawei Y6 : " << Y6.slots << endl;
	cout << "Number of card slots for Huawei Y7 : " << Y7.slots << endl;

	return 0;
}

