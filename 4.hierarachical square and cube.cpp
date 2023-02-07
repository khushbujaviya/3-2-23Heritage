//4. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.
#include<iostream>
using namespace std;
class data{
	public:
		int a;
		void setdata(){
			cout<<"enter value a:";
		cin>>a;
		}
	};
class square:public data{
	public:
		int squ;
		void setdata(){
			data::setdata();
			squ=a*a;
		}
		void getdata(){
			cout<<"squ: "<<squ<<endl<<endl;
		}
};
class cube:public data{
	public:
		int cube;
		void setdata(){
			data::setdata();
			cube=a*a*a;
		}
		void getdata(){
			cout<<"cube: "<<cube<<endl;
		}
};
main(){
	square obj;
	cube obj1;
	
	obj.setdata();
	obj.getdata();
	obj1.setdata();
	obj1.getdata();
}
