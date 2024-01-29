#include<iostream>

using namespace std;

class Distense{

	int feet;
	int inch;
    
	public:
		void Setdata(int feet,int inch){
        
this->feet=feet;
			this->inch=inch;
            
		}
        
		void Getdata(){
			cout<<feet<<" Feet "<<inch<<" Inch "<<endl;
		}
        
		Distense operator+(Distense num){
         
			int Feet=feet+d2.feet;
        	float Inch=inch+d2.inches;
            
			if(Inch>=12.0) {
            
            	Inch-=12.0;
            	newFeet++;
                
        	}
		}
		
};
int main(){

	Distance d1,d2,d3;
    
	d1.Setdata(2,3);
	d2.Setdata(4,5);
    
	d1.Getdata();
	d2.Getdata();
    
	d3=d1+d2;
	d3.Getdata();
    
    return 0;
    
}