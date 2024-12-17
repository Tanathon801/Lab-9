#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double x;
    double z;
    double c;
    
	cout << "Enter initial loan: ";
	cin >> x;
	cout << "Enter interest rate per year (%): ";
	cin >> z;
	cout << "Enter amount you can pay per year: ";
	cin >> c; 

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	double i;
	int t = 1;
	i = x;
	do {
	double o; 
	o = i;
	
	double y;
	y = o*(z/100);
	double u;
	u = o+y;
	if(u < c){
	   c = u;
	}
	i = u-c;

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << t; 
	cout << setw(13) << left << o;
	cout << setw(13) << left << y;
	cout << setw(13) << left << u;
	cout << setw(13) << left << c;
	cout << setw(13) << left << i;
	cout << "\n";	
		o = i;
		t++;
	} while (i != 0);
	return 0;
}
