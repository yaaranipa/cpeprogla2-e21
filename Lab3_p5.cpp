#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
	char str1[100];
	char str2[100];
	char str3[100];
	int i,j;
	
	
	cout<<"enter your 3 words: ";
	cin>>str1>>str2>>str3;
	
	j=strlen(str1);
	
	for(i=0;i<j;i++){
		str1[i]=tolower(str1[i]);
		str1[0]=toupper(str1[0]);
		cout<<str1[i];
	}
	j=strlen(str2);
	cout<<" ";
	
	for(i=0;i<j;i++){
		str2[i]=tolower(str2[i]);
		str2[0]=toupper(str2[0]);
		cout<<str2[i];
	}
	j=strlen(str3);
	cout<<" ";
	
	
	for(i=0;i<j;i++){
		str3[i]=tolower(str3[i]);
		str3[0]=toupper(str3[0]);
		cout<<str3[i];
	}
	
	
	return 0;
}
