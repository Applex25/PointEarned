// MidPointAssigmentPractice.cpp : This file contains a code that can let the user known how much points do they have for the purchased books in the month.

#include <iostream>
using namespace std;
	
	string pointsObtanied(int books);

	int main()
{
	// Declaring the variables .
	int books;

	// Asking the user to enter the number of books purchased .
	cout << "Enter the number of books you have purchased this month ";
	// Saving the number into the variable.
	cin >> books;

	// Printing the function with the points obtanied.
	cout << pointsObtanied(books);

}
	// Declaring the function.
	string pointsObtanied(int books) {

		string points;
		// Using Switch conditional to execute one condition from multiple conditions, in this case the points that the user have earned.
		switch (books)
		{
			// in the cases I put the number of books that the user have purchased, in this case 0, 1, 2 and 3.
			// in each case it display the number of points that the user have earned. The same for default.
		case 0:
			points = "You have earned 0 points \n";
			break;
		case 1:
			points = "You have earned 5 points \n";
			break;
		case 2:
			points = "You have earned 15 points \n";
			break;
		case 3:
			points = "You have earned 30 points \n";
			break;
			// For default it takes the number >=4 as a conditional.
		default:
			points = "You have earned 60 points \n";


		}
		// return the result of the conditional
		return points;
		}
	
	
		
	
	
	
	

	

