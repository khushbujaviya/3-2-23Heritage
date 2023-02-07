/*2. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. 
Then create two bases class Zebra and Dolphin which write a message telling the age, the name and giving some extra information (e.g. place of origin).*/

#include<iostream>
using namespace std;
class animal{
	public:
		char name[20];
		int age;
		void set_value(){

			cout<<"enter animal name:";
			cin>>name;
			cout<<"enter animal age:";
			cin>>age;

		}
		void get_value(){
		cout<<name<<endl;
		cout<<age<<endl;
	}


};
class zebra:public animal{
	public:
		char color[20];
		void set_value(){
			animal::set_value();
		cout<<"color:";
		cin>>color;
		cout<<endl;
			}
		void get_value(){
			animal::get_value();
			cout<<color<<endl<<endl;

		}
};
class dolphin:public animal{
	public:
		int lag;
		void set_value(){
			animal::set_value();
		cout<<"enter animal leg: ";
		cin>>lag;
		cout<<endl;
		}
		void get_value(){
			animal::get_value();
			cout<<lag<<endl<<endl;

		}		
};
main(){
	zebra obj1;
	dolphin obj2;

	obj1.set_value();
	obj1.get_value();
	
	obj2.set_value();
	obj2.get_value();

}
