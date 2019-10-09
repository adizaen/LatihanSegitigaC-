#include <iostream>
using namespace std;

int main()
{
	int angka;
	cout << "Masukkan angka : "; cin >> angka;
	
	for(int i=0; i < angka; i++)
	{
		for(int j=0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	cout << endl; 
	
	for(int i=0; i < angka; i++)
	{
		for(int j=angka; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i=0; i < angka; i++)
	{
		for(int k=angka-1; k > i; k--)
		{
			cout << " ";
		}
		for(int j=0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i=0; i < angka; i++)
	{
		for(int k=angka; k > angka-i; k--)
		{
			cout << " ";
		}
		for(int j=angka; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}
