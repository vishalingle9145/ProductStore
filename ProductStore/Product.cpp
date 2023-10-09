#include <iostream>
#include "Product.h"
using namespace std;

Product::Product()
{
}

Product::Product(int id, string title, string desc, double price, int like)
{
	this->id = id;
	this->title = title;
	this->desc = desc;
	this->price = price;
	this->like = like;
}

Product::~Product()		//destructor
{
}
