#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

class Product
{
	private:
		int id;
		string title;
		string desc;
		double price;
		int like;
	
	public:
		Product();
		Product(int id, string title, string desc, double price, int like);
		~Product();
	protected:
};

#endif
