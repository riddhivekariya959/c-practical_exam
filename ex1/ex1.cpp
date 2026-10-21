#include<iostream>
using namespace std;

class book{
	
	public:
	string title;
	string author;
	int publishedyear;
	
};

int main(){
	
	book b[3];
	
	for(int i=0; i<3; i++){
		cout<<"enter title , auther and publishedyear :";
		cin>>b[i].title>>b[i].author>>b[i].publishedyear;
	}
	cout<<"book details:";
	
	 for (int i = 0; i < 3; i++)
    {
        cout << "Title: " << b[i].title << endl;
        cout << "Author: " << b[i].author << endl;
        cout << "Published Year: " << b[i].publishedyear << endl;
    }

	
	return 0;
}
