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
			
			virtual void displayDetails(){
				cout<<"name:"<<name<<endl;
				cout<<"sound:"<<sound<<endl;
			}
};

class dog: public animal
{
	public:
		void displayDetails() override{
			cout<<"animal type: dog"<<endl;
			cout<<"name:tommy"<<endl;
			cout<<"sound:woof!"<<endl;
		}
};


class cat: public animal
{
	public:
		void displayDetails() override{
			cout<<"animal type: cat"<<endl;
			cout<<"name:kitty"<<endl;
			cout<<"sound:meow!"<<endl;
		}
};
int main(){
	
	dog d;
	cat c;
	
	d.setdata("tommy","woof");
    c.setdata("kitty","meow");
	
animal *a[2];
a[0]=&d;
a[1]=&c;

for(int i=0; i<2; i++){
	a[i]->displayDetails();
	cout << endl;
}
	
	return 0;
	}
