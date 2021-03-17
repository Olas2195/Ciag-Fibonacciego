#include <iostream>

/*Ci¹g fibonacziego*/

using namespace std;

int liczba;
long fib(int n){
	long licz1=1, licz2=1, suma=0;
	for(int i=3; i<=n; i++){
		suma=licz1+licz2;
		licz1=licz2;
		licz2=suma;
	}
	return licz2;
}

int main(int argc, char** argv) {
	cout<<"Podaj liczbe: ";
	cin>>liczba;
	cout<<fib(liczba)<<endl;	
	return 0;
}
