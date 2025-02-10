/*Name:Daisy Rop
Reg No:Bscit-05-0038\2024
Campus:Thika Road Campus
GitUsername:Daisy Rop */

#include<iostream>
using namespace std;

class BankAccount{
	private:
		string Accountholder;
		double Balance;
		
		public:
			void setAccountholder(string a){
				Accountholder=a;
			}
			string getAccountholder(){
				return Accountholder;
			}
			void setBalance(double b){
				Balance=b;
			}
			double getBalance(){
				return Balance;
		
			}
};

int main(){
	BankAccount B1;
	B1.setAccountholder("Daisy");
	cout<<"Accountholder:"<<B1.getAccountholder()<<endl;
	B1.setBalance("200,000.56756");
	cout<<"Balance:"<<B1.getBalance()<<endl;
	
	return 0;
}
