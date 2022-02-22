//Amit Khatri
//2-21-2022

//Section 6 Challenge

/* 
	Franks Carpet Cleaning Service
	Charges:
		$25 per small room
		$35 per large room
	Sales tax rate: 6%
	Estimates are valid for 30 days

Prompt the user for the number of small and large room they 
would like cleaned. and provide an estimate such as 

Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: 110
Tax: 6.6
=============================================
Total Estimate: 116.6
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int small_room_price = 25;
const int large_room_price = 35;
const float sales_tax = .06;

int main(void){
	
	int num_of_small_rooms;
	int num_of_large_rooms;
	int cost;
	float tax;
	float estimate;

	cout << "Please enter the number of small rooms you would like cleaned" << endl;
	cin >> num_of_small_rooms;

	cout << "Please enter the number of large rooms you would like cleaned" << endl;
	cin >> num_of_large_rooms;

	cout << "\n\nEstimate for carpet cleaning services:" << endl;
	cout << "Number of small rooms: " << num_of_small_rooms << endl;
	cout << "Number of large rooms: " << num_of_large_rooms << endl;
	cout << "Price per small room: $" << small_room_price << endl;
	cout << "Price per large room: $" << large_room_price << endl;

	cost = (small_room_price * num_of_small_rooms) + (large_room_price * num_of_large_rooms);
	tax = cost * sales_tax;
	estimate = cost + tax;

	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "==================================" << endl;
	cout <<"Estimate: $" << estimate << endl;

	return 0;
}
