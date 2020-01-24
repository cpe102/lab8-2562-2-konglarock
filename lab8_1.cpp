#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	int i=0 ,year=1;
	double interest, money ,monYear;
	cout << "Enter initial loan: ";
	cin >> money;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> monYear;


	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	
	double INter , tole , Newbalance;

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect



	while ( money !=0)
	{
		INter=(interest/100)*money;
		tole=INter+money;
		
		if (money<monYear)
		{
			monYear=tole;
			Newbalance=0;
		}
		else
		{
			Newbalance=tole-monYear;
		}
		
		
		//money=Newmon;
		//Newmon=(interest/100)*money+money-monYear;
	
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << money;
		cout << setw(13) << left << INter;
		cout << setw(13) << left << tole;
		cout << setw(13) << left << monYear;
		cout << setw(13) << left << Newbalance;
		cout << "\n";
		year++;
		money=Newbalance;
		


	}	

	
	
	
	return 0;
}
