#include <iostream>
#include <iomanip>
using namespace std;


int i;
int tPrice;
int j;

void NewLine(){
	char s;
	do{cin.get(s);}while(s!='\n');
}

struct Customer{
	struct Name{
		char firstName[20];
		char lastName[20];
	}name;
	
	struct Order{
		int day;
		int month;
		int year;
		int quant;
		struct Item{
			int ID;
			char itemName[20];
			int Price;
		};
		Item item[3];
	}order;
	
	double contNo;
};


int main(){
	Customer cust[3];
	for (i=0;i<3;i++){
		cout<<"CUSTOMER INFORMATION"<<i+1<<endl;
		cout<<"First Name: ";
		cin.getline(cust[i].name.firstName,29);
		cout<<"Last Name: ";
		cin.getline(cust[i].name.lastName,29);
		//cout<<"Contact No.: ";
		//cin>>cust[i].contNo;
		cout<<"ORDER DATE: "<<endl;
		cout<<"Day: ";
		cin>>cust[i].order.day;
		cout<<"Month: ";
		cin>>cust[i].order.month;
		cout<<"Year: ";
		cin>>cust[i].order.year;
		cout<<"ENTER 3 ITEMS: "<<endl;
		for (j=0;j<3;j++){
		    cout<<"ID: ";
		    cin>>cust[i].order.item[j].ID;
	    	NewLine();
    	    cout<<"Name: ";
    		cin.getline(cust[i].order.item[j].itemName,29);
    		cout<<"Price: ";
    		cin>>cust[i].order.item[j].Price;
    		cout<<"Quantity: ";
    		cin>>cust[i].order.quant;
    		cout<<endl;
		}
		NewLine();
}
	j=0;
	cout<<"SUMMARY REPORT"<<endl;
	cout<<" #"<<setw(30)<<"Customer Name"<<setw(20)<<"Order Date"<<setw(15)<<"Items"<<setw(15)<<"Price"<<setw(15)<<"Quantity"<<endl;
	for (i=0;i<3;i++){
		cout<<" "<<i+1<<setw(23)<<cust[i].name.lastName<<","<<setw(6)<<cust[i].name.firstName<<setw(11)<<cust[i].order.day<<"/"<<cust[i].order.month<<"/"<<cust[i].order.year<<endl;
    	for (j=0;j<3;j++){
    		cout<<setw(67)<<cust[i].order.item[j].itemName<<setw(15)<<cust[i].order.item[j].Price<<setw(15)<<cust[i].order.quant<<endl;
    		tPrice += cust[i].order.item[j].Price;
		}
		cout<<setw(96)<<"TOTAL PRICE: "<<tPrice<<endl;
	}
	
	return 0;
	
}


