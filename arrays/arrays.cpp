#include<iostream>
using namespace std;

int main()
{
	int A[5];
	A[0] = 12;
	A[1] = 15;
	A[2] = 25;
	// initializes array values
	int A2[] = {2,4,6,8,10,12,14}; 
	// size 10 but only init. seven values. 
	int A3[10] = {2,4,6,8,10,12,14};
	int n;
	// int A4[n] = { 1,2,3,4 }; // Error: you can create but not initializes
	cin >> n;
	//int A5[n];  // Error: it should be a constant value. 

	//cout << "size A4 array is" << sizeof(A5) << endl;

	
	// initializes to 0 elements 8 ,9 and 10. 
	for (int i = 0; i <=9; i++)
	{
		cout << " " <<A3[i]; // 0,2,4,6,8,10,14,0,0,0
	}

	cout << endl;

	// C++ loop
	for (int x : A)
	{
		cout << " " << x;
	}



	cout << endl;
	cout << sizeof(A) << endl; // 20
	cout << sizeof(A[1]) << endl; //4
	printf("%d\n", A[2]); //25

	cout << A3[6] << endl; //14
	printf("%d\n", A3[6]); //14
	 


	return 0;
}