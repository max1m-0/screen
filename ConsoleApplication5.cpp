#include "pch.h"
#include <iostream>
using namespace std;

class Calculator
{
public:
	int Addition(int N,int *arr)
	{
	    return(arr[N] + arr[N + 1]);
	}
	int Subtraction(int N, int *arr)
	{
		return(arr[N] - arr[N + 1]);
	}
	int Division(int N, int *arr)
	{
		return(arr[N] / arr[N + 1]);
	}
	int Multiplication(int N, int *arr)
	{
		return(arr[N] * arr[N + 1]);
	}
	int Power(int N, double power_of_number, int *arr)
	{
		return(pow(arr[N], power_of_number));
	}
	void setNumb( int temporary)
	{
		cout << temporary << endl;
	}
};

int main()
{
	int N, power_of_number, operation, temporary = 0, number, iteration, for_more_operations;
	Calculator  Math;
//	X3.getQuantity(quantity);
	cout << "Enter number of numbers " << endl;
	cin >> number;
	int *arr = new int[number];
	for (int i = 0; i < number; i++)
	{
		cout <<i+1<< " number = ";
		cin >> arr[i];
	}
//	X3.fillArray(quantity,arr);
	cout << "Enter number of operations with your " << N + 1 << " number" << endl;
	cin >> iteration;
		for (N = 0; N < iteration; N++)
		{
			cout << "what operation you choose" << endl;
			cout << "1 - Addition " << endl << "2 - Division " << endl << "3 - Power " << endl << "4 - Multiplication " << endl << "5-Subtraction" << endl;
			cin >> operation;
			switch (operation)
			{
			case 1:
				temporary = Math.Addition(N, arr);
				Math.setNumb(temporary);
				arr[N+1] = temporary;
				break;
			case 2:
				temporary = Math.Division(N, arr);
				Math.setNumb(temporary);
				arr[N+1] = temporary;
				break;
			case 3:
				cout << "Enter power of yor number " << N + 1 << " ";
				cin >> power_of_number;
				temporary = Math.Power(N, power_of_number, arr);
				Math.setNumb(temporary);
				arr[N] = temporary;
				break;
			case 4:
				temporary = Math.Multiplication(N, arr);
				Math.setNumb(temporary);
				arr[N+1] = temporary;
				break;
			case 5:
				temporary = Math.Subtraction(N, arr);
				Math.setNumb(temporary);
				arr[N+1] = temporary;
				break;
			}
			cout << "Is it all operations with this number? 1 - yes 2 - no";
			cin >> for_more_operations;
			if (for_more_operations = 2)
			{
			 --N; --iteration;
			}
		}
}