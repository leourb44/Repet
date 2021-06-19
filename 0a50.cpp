#include <iostream>
using namespace std;

int main(){
	
	for(int i = 0; i <= 50; i++){
		cout << "\n";
		cout << i; 	
	}
	
	int num = 1;
	
	while(num <= 20){
		cout << "\n";
		cout << num * num;
		num++;
	}
	
	int num = 1;
	
	do{
		cout << "\n";
		cout << num * num;
		num++;
	}while(num <= 20);
	
	return 0;
}
