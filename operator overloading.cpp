#include<iostream>
using namespace std;

class temp{
	private:
		int count;
	public:
		temp():count(0){
			
		}
		
		void inc(){
			count++;
		}
		temp operator ++(){
			count++;
			temp t1;
			t1.count = count;
			return t1;
		}
			temp operator ++(int){
		     count++;
			temp t2;
			t2.count = count;
			return t2;
		}
		void print_value(){
			cout<<"the value of count is: "<<count<<endl;
			
		}
};

int main(){//1,2,2,2,3
	temp t1,t2,t3;
 	++t1;
 	t1.print_value();
 	cout<<"========================"<<endl;
	t2 = ++t1;
	t1.print_value();
	t2.print_value();
	cout<<"========================"<<endl;
	t2++;
	t1.print_value();
	t2.print_value();
	cout<<"========================"<<endl;
	t3 = t2++;
	t2.print_value();
	t3.print_value();
	cout<<"========================"<<endl;
}
