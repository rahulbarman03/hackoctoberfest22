#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int counter = 0;

class clubCard {
	private:	//attributes related to clubs
		string ClubName, ClubAddress;
		int annualFee;
	
	private:	//attributes related to card holders
		string CardHolderName;
		int CardID;
		float DateofCreation, DateofExpiration; //integers are months and decimals are days
		bool isFeePaid = false;
		int remainFee = 0;
		
	public:
		clubCard(string name, string addr, int fee){
			cout << "----------------------" << endl;
			cout << setw(17) << "Club Details" << endl << endl;
			cout << "Name: " << name << endl;
			cout << "Address: " << addr << endl;
			cout << "Entry Fee: " << fee << "$" << endl;
			cout << "----------------------" << endl << endl;
			
			ClubName = name;
			ClubAddress = addr;
			annualFee = fee;
			counter++;
		}	
		
		void setName(string name) { CardHolderName = name; }
		
		void setID(int id) { CardID = id; }
		
		void setCreate(int create) { DateofCreation = create; }
		
		void setEXP(int exp) { DateofExpiration = exp; }
		
		void setFeeStatus(int amnt) {		//considering payment once
			if(amnt == annualFee) {
				isFeePaid = true;
			}
			remainFee -= amnt;
			remainFee += annualFee;
		}
		
		void printHolderDetails(){
			cout << "Holder Name: " << CardHolderName << endl;
			cout << "Card ID: " << CardID << endl;
		}
		
		int getCreate(){ return DateofCreation; }
		
		int getEXP(){ return DateofExpiration; }
		
		int getFee(){	//logics on fee
			return annualFee;
		}
		
		void getFeeStatus(){
			if(isFeePaid == true && remainFee == 0){
				cout << "Fee Status: Paid" << endl;
			}
			else if(isFeePaid == false && remainFee > 0) {
				cout << "Fee Status: Pending" << endl;
				cout << "Pending Amount: " << remainFee << "$" << endl;
			}
			else if(remainFee < 0){
				cout << "Fee Status: Paid" << endl;
				cout << "Remaining Change: " << abs(remainFee) << "$" << endl;
			}
		}
};
