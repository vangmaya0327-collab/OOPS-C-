#include<iostream> 
using namespace std; 
class account{
string name;
int accno;
float balance; 
public: 
	void setdetails() 
	{ 
	cout<<"enter account number:";
	cin>> accno;
	cout<< "enter balance:";
	cin>> balance;
	} 
	void display() {
		cout<<"name:"<<name<<"accno:"<< accno<<"balance:"<<balance<< endl;
	}
};
	int main() {
		account c1,c2;
		cout<< "enter details for customer1:\n";
		c1.setdetails();
		cout<< "enter details for customer2:\n";
		c2.setdetails();
		cout<< "\n customer account details:\n";
		c1.display();
		c2.display();
		return 0;
	}
