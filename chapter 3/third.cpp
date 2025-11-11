#include<iostream> 
using namespace std; 
class car{
string model;
string company;
float price; 
public: 
	void setdetails() 
	{ 
	cout<<"enter model:";
	cin>> model;
	cout<< "enter company:";
	cin>> company;
	cout<< "enter price:";
	cin>> price;
	} 
	void display() {
		cout<<"model:"<<model<<"company:"<< company<<"price:"<<price<< endl;
	}
};
	int main() {
		car c1,c2,c3;
		cout<< "enter details for car1:\n";
		c1.setdetails();
		cout<< "enter details for car2:\n";
		c2.setdetails();
		cout<< "enter details fpr car3:\n";
		c3.setdetails();
		cout<< "\n car showroom inventory:\n";
		c1.display();
		c2.display();
		c3.display();
		return 0;
	}
