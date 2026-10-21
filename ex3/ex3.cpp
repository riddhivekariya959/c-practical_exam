#include<iostream>

using namespace std;

class animal{
	private:
		string name;
		string sound;
		
		public:
			void setdata(string n , string s){
				name=n;
				sound=s;
			}
			
			string getname()
			{
				return name;
			}
			
			string getsound()
			{
				return sound;
			}
			
			virtual void makesound(){
				cout<<sound<<endl;
			}
};

class dog: public animal
{
	public:
		void makesound(){
			cout<<"dog says woof!"<<endl;
		}
};


class cat: public animal
{
	public:
		void makesound(){
			cout<<"dog says meow!"<<endl;
		}
};

int main(){
	
	dog d;
	cat c;
	
	d.setdata("dog","woof");
    c.setdata("cat","meow");
	
	cout<<d.getname()<<":";
	d.makesound();
	
		cout<<c.getname()<<":";
	c.makesound();
	
	return 0;
	}
