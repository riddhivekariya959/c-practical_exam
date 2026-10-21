#include<iostream>
using namespace std;

class shape{
	public:
		virtual void area()=0;
		virtual void draw()=0;
};

class cricle: public shape{
	private:
		float radius;
		
		public:
			cricle(float r)
			{
				radius=r;
			}
			
			void area() override{
		cout<<"cricle area:"<<3.14*radius*radius<<endl;
		}
		
			void draw() override{
		cout<<"Drawing Circle"<<endl;
		}
};

class rectangle: public shape{
	private:
		float length , width ;
		
		public:
			rectangle(float l , float w)
			{
				length=l;
			    width=w;
			}
			
			void area() override{
		cout<<"recatangle area:"<<length*width<<endl;
		}
		
			void draw() override{
		cout<<"Drawing Rectangle"<<endl;
		}
};

int main(){
	cricle c(5);
	rectangle r(4,6);
	
	shape *s[2];
	
	 s[0]=&c;
	 s[1]=&r;
	 
	 
	 for(int i=0; i<2; i++){
	 	s[i]->area();
	 	s[i]->draw();
	 	
	 	    cout << endl;
	 	
	
	}
	 
}
