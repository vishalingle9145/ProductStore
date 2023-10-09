#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include <iostream>
#include "Product.h"
using namespace std;

class ProductManager
{
	public:
		ProductManager();
		
		bool Insert(Product p);
		bool Delete(int id);
		bool Update(Product p);
		bool Retrieve(Product p);
		
		~ProductManager();
	protected:
};

#endif
