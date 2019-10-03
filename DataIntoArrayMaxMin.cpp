//Mitchell Gabel
//CSCI201-1
//Lab Assignment 06
//Manipulating Data into Arrays

#include <iostream>
using namespace std;


int main()
{
	
	//Declaring Array/Variable
	
	const int size =10;
	int A[size], i;
	
	//Gathering User Data
	cout << "Enter 10 integer values:" << endl;
	
	for (int i = 0; i < size; i ++)
	{
		cin >> A[i];
	}
	
	int sum = 0; 
	
	//Finding the Sum and Average
	
	for (i = 0; i < size; i ++)
	sum = sum + A[i];
	cout << "Sum = " << sum << endl;
	cout << "Average = " << float (sum/size) << endl;
	
	//Finding the Max
	
	int max = A[0];
	
	for (i = 1; i < size; i ++)
	if ( A[i] > max)
	max = A[i];
	cout << "Max = " << max << endl;
		
	//Finding the Min	
		
	int min = A[0];
	
	if (A[i] < min)
	min = A[i];
	cout << "Min = " << min << endl;
		
	return 0;

}
