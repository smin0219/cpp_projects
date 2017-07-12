#include "function.h"



/*
	char ch1='A', ch2='Z';
	swap(&ch1, &ch2);
	std::cout<<ch1<<' '<<ch2<<std::endl;

	double dbl1=1.111, dbl2=5.555;
	swap(&dbl1, &dbl2);
	std::cout<<dbl1<<' '<<dbl2<<std::endl;
*/

void swap(int* num1, int*num2){
	int temp = 0;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	return;
}

int main(int argc, char** argv){
	int num1=20, num2=30;
	swap(&num1, &num2);
	std::cout<<num1<<' '<<num2<<std::endl;
	return 0;
}
