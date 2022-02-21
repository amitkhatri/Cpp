// Amit Khatri
// 2-21-2022
//
// Create a C++ program that asks the user for their favorite number
// between 1 and 100. Then read this number from the console and print
// it back

#include <iostream>
int main(void){

	int number;

	std::cout<<"Hello! Please enter your favorite number!"<<std::endl;
	
	std::cin>>number;

	std::cout<<"Amazing! That's my favorite number too!"<<std::endl;
	std::cout<<"No, really! "<<number<<" is my favorite number"<<std::endl;

	return 0;
}
	
