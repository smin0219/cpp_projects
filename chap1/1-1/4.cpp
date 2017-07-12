#include <iostream>

int main (int argc, char** argv){
	const int base = 50;
	const float incentive = 0.12;

	int profit = 0;
	int income = 0;

	while(profit != -1){	
		std::cout << "Enter the profit for this month: ";
		std::cin >> profit;
		if(profit !=-1){
			income = base+profit*incentive;
			std::cout << "Income for this month: " << income;
			std::cout << std::endl;
		}
		else{
			std::cout<<"Ending program...\n";
		}
	}

	return 0;

}
