#include<iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream f("input.txt");
	
	int x, z,total=0;
	
	while(f>>z){
		
		for (int x=0;x<z;x++){
			if(x%3==0 || x%5==0){
			total=total + x;	
			}
		}
		
	}
	
	cout<<total;
	
}
	

	
	

