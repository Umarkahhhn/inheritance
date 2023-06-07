#include <iostream>
using namespace std;

// Base class
class rickshaw{
	protected :
		void wheels()
		{
			cout << "it has 3 wheels"<<endl;
		}
		void gares()
		{
			cout<< "it has gares"<<endl;
		}
		void handle()
		{
			cout <<"it has 1 handle"<<endl;
		}
		void brakes()
		{
			cout << " it has breaks"<<endl;
		}
		void noice()
		{
			cout << " its noice"<<endl;
		}
		void design()
		{
			cout << " its design"<<endl;
		}
		
};
// Derived class
class cng_rickshaw : public rickshaw{
	public :
		void wheels()
		{
			cout << "it has 3 wheels"<<endl;
		}
		void gares()
		{
			cout<< "it has gares"<<endl;
		}
		void handle()
		{
			cout <<"it has 1 handle"<<endl;
		}
		void brakes()
		{
			cout << " it has breaks"<<endl;
		}
		void noice()
		{
			cout << "it has a loud sound when the engine get started"<<endl;
		}
		void design()
		{
			cout << "in this rickshaw engine need petrol to work"<<endl;
		}
};
class electerical_rickshaw : public rickshaw{
	public :
		void wheels()
		{
			cout << "it has 3 wheels"<<endl;
		}
		void gares()
		{
			cout<< "it has gares"<<endl;
		}
		void handle()
		{
			cout <<"it has 1 handle"<<endl;
		}
		void brakes()
		{
			cout << " it has breaks"<<endl;
		}
		void noice()
		{
			cout << "it has a low sound when the engine get started"<<endl;
		}
		void design()
		{
			cout << "it can be work by two ways"<<endl;
			cout<< "1) By charge its engine"<<endl;
			cout<< "2) Or by using petrol"<<endl;
		}
};

int main(){
	cng_rickshaw r1;
	r1.wheels();
	r1.gares();
	r1.handle();
	r1.brakes();
	r1.noice();
	r1.design();
	
	cout << " " <<endl;
	
	electerical_rickshaw r2;
	r2.wheels();
	r2.gares();
	r2.handle();
	r2.brakes();
	r2.noice();
	r2.design();
	
	return 0;
}