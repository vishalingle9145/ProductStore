#include <iostream>
#include "Product.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Product p;
//	ProductManager pm;
	
//	pm.Insert(p);
	//pm.Delete(1);
	int choice;
	do{
		
	cout<<"1. InsertData\n 2. DeleteData\n 3. UpdateData\n 4. RetrieveData\n";
	
	cout<<"Enter Your choice: ";
	cin>>choice;
	
}while(choice != 0);
	
	
	return 0;
}
