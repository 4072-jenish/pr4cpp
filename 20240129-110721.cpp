/*
Q1. WAP to create a Message class with a constructor that takes a single string with a default value. 
Create a private member string, and in the constructor simply assign the argument string to your internal string. 
Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the object, and one that takes a string argument,
which it prints in addition to the internal message.
*/
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
