#include <iostream>
using namespace std;

int main(){
	
	for(int i = 100; i >= 1; i--)
	{
		cout << "\n";
		cout << i;
	}
	
	int num = 100;
	
	while(num >= 1){
		cout << "\n";
		cout << num;
		num--;
	}
	
	int num = 100;
	
	do{
		cout << "\n";
		cout << num;
		num--;
	}while(num >= 1);
	
	return 0;
}
