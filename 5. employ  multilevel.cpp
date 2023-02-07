//5. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)
#include<iostream>
using namespace std;

class A{
	public:
		int id;
		char name[20];
		char role[20];
		void setdata(){
			cout<<"enter id: ";
			cin>>id;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"enter role: ";
			cin>>role;
		}
		void getdata(){
			cout<<"id:"<<id<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"role: "<<role<<endl;
		}
	
};
class B :public A{
	public:
		int salary;
		int experience;
	void setdata(){
		A::setdata();
		cout<<"enter salary: ";
		cin>>salary;
		cout<<"enter experience: ";
		cin>>experience ;
		}
		void getdata(){
			A::getdata();
			cout<<"salary: "<<salary<<endl;
			cout<<"exprience: "<<experience<<endl;
		}
	};
class C :public B{
	public: 
		char comp_name[20];
		char address[20];
	void setdata(){
		B::setdata();
		cout<<"enter comp_name: ";
		cin>>comp_name;
		cout<<"enter address: ";
		cin>>address;
	}	
	void getdata(){
		B::getdata();
		cout<<"comp_name: "<<comp_name<<endl;
		cout<<"address: "<<address<<endl;
	}
			
};
class D:public C{
	public:
		char email[20];
		int contact;
		
	void setdata(){
		C::setdata();
		cout<<"enter email: ";
		cin>>email;
		cout<<"enter contact: ";
		cin>>contact;
		cout<<endl;
	}
	void getdata(){
		C::getdata();
		cout<<"email : "<<email<<endl;
		cout<<"contact:"<<contact<<endl<<endl;
	}
	
	
};
main(){

	D obj;

		obj.setdata();

		obj.getdata();
	
}
