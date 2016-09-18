#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str1[100];
	char str2[100];
	int result;
	cout<<"Enter your two words"<<endl;
	cin>>str1;
	cin>>str2;

	
	
	switch(strcmp(str1,str2)){
		case -1:
			cout<<"negative";
			break;
		case 0:
			cout<<"equal";
			break;
		case 1:
			cout<<"positive";
			break;
	}
	
	return 0;
}
