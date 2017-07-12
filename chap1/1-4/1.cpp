#include <iostream>
//#define SQUARE(x) ((x)*(x))
using namespace std;

// define and inline is similar, but inline
// need to declair specific type for the input

inline int SQUARE(int x)
{
	return x*x;
}

int main(int argc, char** argv)
{
	int a = 0;
	cout<<"Enter any integer: ";
	cin>>a;
	cout<<"Squared value: "<<SQUARE(a)<<endl;
	return 0;
}
