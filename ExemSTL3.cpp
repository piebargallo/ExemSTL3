// C++ code to demonstrate working of iota()

#include<iostream>
#include<numeric> // for iota()

using namespace std;

// Driver code
int main() {

	// Initializing array with 0 values
	int ar[4] = {0};

	// Using iota() to assign values
	iota(ar, ar+4, 13);

	// Displaying the new array
	cout << "The new array after assigning values is : ";
	
	for (int i = 0; i < 4 ; i++)
		cout << ar[i] << " ";

	return 0;

} // End driver
