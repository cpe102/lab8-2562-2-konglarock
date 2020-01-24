#include<iostream>
using namespace std;

//Write the function printO() here
int printO(int N,int M){
	if (N<=0 or M<=0)
	{
		cout<<"Invalid input";
	}
	else
	{
		for (int i=0 ; i < N; i++)
	{
		for (int J = 0 ; J < M; J++)
		{
			cout<<"O";
		}
		cout<<"\n";
	}


	}
	
	
	
}

int main(){
	
	printO(3,3);
	cout << "\n";
	
	printO(2,6);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
