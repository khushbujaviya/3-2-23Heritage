//3. WAP to read and print employee information using multiple inheritance.
#include<iostream>
using namespace std;

class basic_info{

	public:
		char name[20];
		int age;
		char degree[30];
		int contact;
		
	void setdata(){
		cout<<"enter employee name: ";
		cin>>name;
		cout<<" enter employee age: ";
		cin>>age;
		cout<<"enter degree of education: ";
		cin>>degree;
		cout<<"enter contact no: ";
		cin>>contact;
		}
	void getdata(){
		cout<<"employee name: "<<name<<endl;
		cout<<"employee age: "<<age<<endl;
		cout<<"employee degree: "<<degree<<endl;
		cout<<"employee contact no: "<<contact<<endl;
	}
};

class second{
	public:
		int experience_year;
		char skill[30];
		char maturity[30];
	void setdata1(){
		cout<<"enter experience_year: ";
		cin>>experience_year;
		cout<<"enter extra skill: ";
		cin>>skill;
		cout<<"enter maturity: ";
		cin>>maturity;
	}
	void getdata1(){
		cout<<"employee experience_year: "<<experience_year<<endl;
		cout<<"employee extra skill: "<<skill<<endl;
		cout<<"employee maturity: "<<maturity<<endl;
	}
};
class final:public basic_info,public second{
	public:
		int salary;
		int time;
		char answear[10];
		
	void setdata2(){
		cout<<"enter employee salary: ";
		cin>>salary;
		cout<<"enter employee time: ";
		cin>>time;
		cout<<"enter employ answear: ";
		cin>>answear;
		cout<<endl;
	}
	void getdata2(){
		cout<<"employee salary: "<<salary<<endl;
		cout<<"employee time: "<<time<<endl;
		cout<<"employee answer: "<<answear<<endl<<endl;
		}
};
main(){
	final obj;
	obj.setdata();
	obj.setdata1();
	obj.setdata2();
	
	obj.getdata();
	obj.getdata1();
	obj.getdata2();
}
	
		
		
