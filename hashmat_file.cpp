#include<iostream>
#include<cstdlib>
#include <fstream>

using namespace std;

int main(){
    ifstream f("sample.txt");
    
    int hashmat, opponent;
    
    while (f >> hashmat >> opponent) {
          cout <<abs(hashmat-opponent)<<endl;      
    }
    
    //fclose(f);
    system("pause");
    return 0;
}  
