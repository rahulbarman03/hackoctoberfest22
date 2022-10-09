#include <iostream>
#include "clubCard.h"
using namespace std;

int main(){
	clubCard mem1("Gryffindor", "2,West Church Road, Ottawa", 228);
	mem1.setName("Harry");
	mem1.setID(28543);
	mem1.setCreate(00.21);	//January 21st
	mem1.setEXP(06.21);	//Period of 6 months
	mem1.setFeeStatus(230);
	
	string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September","October", "November", "December"};
	mem1.printHolderDetails();
	cout << "Member Since: " << month[mem1.getCreate()] << endl;
	cout << "Total Fees: " << mem1.getFee() << "$" << endl;
	mem1.getFeeStatus();
	
	cout << "Member Till: " << month[mem1.getEXP()] << endl;
	
	return 0;
}
