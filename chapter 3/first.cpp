#include<iostream> 
using namespace std; 
class student{
string name;
int roll;
float marks; 
public: 
	void setdetails(string n, int r, float m) 
	{ 
	name = n;
	roll = r;
	marks = m;
	} 
	void display() {
		cout<<"name:"<<name<<"\troll:"<< roll<<"\tmarks:"<<marks<< endl;
	}
};
	int main(){
		student s1, s2 ,s3;
		s1.setdetails("vyshnavi", 101 , 89.5);
		s2.setdetails("purnima", 102, 92.3);
		s3.setdetails("varsha", 103, 76.0);
		cout << "student records:\n";
		s1.display();
		s2.display();
		s3.display();
		return 0;
	}
