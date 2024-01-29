#include<iostream>
#include<string.h>

using namespace std;

class Default{
    char defaultm[100];
	public:
	void MSG(){
        	cout<<"Enter Message : "<<endl;
        	cin>>defaultm;
    }
	void Print(){
        cout<<defaultm<<endl;
    }
	void Print(char c){
    
        cout<<defaultm<<" "<<c<<endl;
        
    }
};

int main(){

    char c[30];
    
    MSG m1;
    
	cout<<"Enter any Message : ";
    cin>>c;
    
	m1.Print();
    m1.Print(c);
    
	return 0;
}