#include<iostream>

using namespace std;

class person
{
private:
string name;
int age;
string address;

public:
person(string n, int a , string ad){
	
	name =n;
	age=a;
	address=ad;
}
void setname(string n){
	name=n;
}	

void setage(int a){
	age=a;
}	

void setaddress(string ad){
	address=ad;
}

string getname(){
	return name;
}	

int getage(){
	return age;
}	

string getaddress(){
	return address;
}

void display(){
	
	cout<<"name:"<<getname()<<endl;
	cout<<"age:"<<getage()<<endl;
	cout<<"address:"<<getaddress()<<endl;
}	
};

int main(){
	int n,age;
	string name, address;

cout << "\n enter number of persion:";
cin >> n;

for (int i=0; i<n; i++){
	cout<<"\n enter name, age and address:";
	cin>> name>> age>> address;
	
	person p(name, age, address);
	p.display();	
}

return 0;
}



