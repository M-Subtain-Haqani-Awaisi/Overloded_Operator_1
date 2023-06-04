//Modify the time class from Exercise 3 in Chapter 6 so that instead of a function
//add_time() it uses the overloaded + operator to add two times. Write a program to test
//this class.
// C++ program to implement + operator
// overloading to add two timestamps

#include <iostream>
using namespace std;

// Time class template
class Time {
private:
	int HR, MIN, SEC;

	// Defining functions
public:
	Time():HR(0),MIN(0),SEC(0)
	{
		
	}
	// Functions to set the time
	// in the Time class template
	Time(int H, int M, int S)
	{
		HR = H;
		MIN = M;
		SEC = S;
	}
	void get_time()
	{
		cout<<"Enter hours";
		cin>>HR;
		cout<<"Enter minutes";
		cin>>MIN;
		cout<<"Enter Seconds";
		cin>>SEC;
	}

	// Function to print the time
	// in HH:MM:SS format
	void show_Time()
	{
		cout << endl
			<< HR << ":" << MIN << ":" << SEC;
	}

	// Function to normalize the resultant
	// time in standard form
	void normalize()
	{
		MIN = MIN + SEC / 60;
		SEC = SEC % 60;
		HR = HR + MIN / 60;
		MIN = MIN % 60;
		HR = HR%24;
	}

	// + Operator overloading
	// to add the time t1 and t2
	Time operator+(Time t)
	{
		Time temp;
		temp.SEC = SEC + t.SEC;
		temp.MIN = MIN + t.MIN;
		temp.HR = HR + t.HR;
		temp.normalize();
		if(HR>24)
	
		return (temp);
	}
};

// Driver code
int main()
{
	Time t1, t2, t3;
	t1.get_time();
	   t2.get_time();

	// Operator overloading
	t3 = t1 + t2;

	// Printing results
	t1.show_Time();
	t2.show_Time();
	t3.show_Time();

	return 0;
}

