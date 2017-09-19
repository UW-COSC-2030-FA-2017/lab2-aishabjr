// ListProcessor.cpp
//Aisha Balogun Mohammed
// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;

	cout << "There are " << cows.size() << " elements in the cows list\n" << endl;
	cows.insertAsLast(14.586);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "There are " << cows.size() << " elements in the cows list\n" << endl;
	cout << "The sum of the doubles in the cows list is: " << cows.sum() << "\n" << endl;


	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;
	cout << "There are " << cows.size() << " elements in the cows list\n" << endl;
	cows.insertAsLast(99.86);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "There are " << cows.size() << " elements in the cows list\n" << endl;
	cout << "The sum of the doubles in the cows list is: " << cows.sum() << "\n" << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	
	cout << "The sum of the doubles in the horses list is: " << horses.sum() << "\n" << endl;
	cout << "There are " << horses.size() << " elements in the horses list\n" << endl;  

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "There are " << cows.size() << " elements in the cows list\n" << endl;
	horses.insertAsLast(186);
	cout << "Horses list  :  " << horses << endl << endl;
	cout << "There are " << horses.size() << " elements in the horses list\n" << endl;
	cout << "The sum of the doubles in the horses list is: " << horses.sum() << "\n" << endl;

	cout << "There are " << cows.size() << " elements in the cows list\n" << endl;
	cows.insertAsLast(19.2);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "There are " << cows.size() << " elements in the cows list\n" << endl;
	cout << "The sum of the doubles in the cows list is: " << cows.sum() << "\n" << endl;


	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;


	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "There are " << pigs.size() << " elements in the pigs list\n" << endl;
	cows.insertAsLast(28.96);
	cout << "Pigs list  :  " << pigs << endl << endl;
	cout << "There are " << pigs.size() << " elements in the pigs list\n" << endl;
	cout << "The sum of the doubles in the pigs list is: " << pigs.sum() << "\n" << endl;

	cout << "End of code" << endl;

	return 0;
}
