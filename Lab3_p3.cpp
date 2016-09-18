#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str1[100];
	char str2[100];
	cout<<"Enter your two words"<<endl;
	cin>>str1;
	cin>>str2;
	
    strcat(str1," ");
	cout<<strcat(str1,str2);
	
	return 0;
}
