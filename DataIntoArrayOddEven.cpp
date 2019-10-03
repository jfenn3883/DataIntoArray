//Mitchell Gabel
//CSCI201-1
//Lab Assignment 06 - Q2
//Manipulating Data into Arrays

#include <iostream>
using namespace std;

int odd(int[]);
int even(int[]);
void print_odd(int[]);
void print_even(int[]);
void print_reverse(int[]);

int main()
{
	
	const int size =10;
	int A[size], i;
	
	//Gathering User Data
	cout << "Enter 10 integer values:" << endl;
	
	for (int i = 0; i < size; i ++)
	{
		cin >> A[i];
	}
	
	//Function Call into Main Function
	
	cout << " Number of Odd Integers = " << odd(A) << endl;
	cout << " Number of Even Integers = " << even(A) << endl;
	
	print_odd(A);
	print_even(A);
	print_reverse(A);
	
	return 0;
	
}

//Functions

//Number of Odd Numbers in Array
int odd(int A[])
{
	int count = 0;
	for(int i = 0; i < 10; i++)
		if(A[i] %2 == 1)
			count ++;
	return count;
}

//Number of Even Numbers in Array
int even(int A[])
{
	int count = 0;
	for(int i = 0; i < 10; i++)
		if(A[i] %2 == 0)
			count ++;
	return count;
}

//Print which #s are odd
void print_odd(int A[]) 
{           
                 
    //Loop reading values in Array 
    for(int i = 0 ; i < 10 ; i++)  
    { 
        // checking if a number is completely 
        // divisible by 2 
        if (A[i] %2 == 1) 
                      
         cout<< A[i] << " is odd."<< endl;
    } 
                  
} 

//Print which #s are even
void print_even(int A[]) 
{           
                 
    //Loop reading values in Array 
    for(int i = 0 ; i < 10 ; i++)  
    { 
        // checking if a number is completely 
        // divisible by 2 
        if (A[i] %2 == 0) 
                      
         cout<< A[i] << " is even."<< endl;
    } 
                  
} 

//Print the array in reverse
void print_reverse(int A[]) 
{           
             
    //Loop reading values in Array 
    for(int i = 9; i >= 0; i--) 
			
	cout << A[i] << "       " << endl;
} 