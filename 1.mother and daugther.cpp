/*1. WAP with a mother class and an inherited daugther class.
Both of them should have a method void display ()that prints a message (different for mother and daugther).
 In the main define a daughter and call the display() method on it.*/
 
#include<iostream>
using namespace std;

class mother{
	
	public:
		void setdata(){
			cout<<"hello"<<endl;
			
		}

};
class daugther:public mother{
	public:
		void display(){
			cout<<"what are you doing now"<<endl;
		}
	
};
main(){
	daugther obj;
	obj.setdata();
	obj.display();
}
