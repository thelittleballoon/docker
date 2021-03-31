#include <iostream>
#include "conversion.h"

Figi::Figi(const char& figi)
	: d_char(figi)
{
	std::cout << "constructor called" << std::endl;
}

Figi::Figi(const Figi& figi)
	: d_char(figi.d_char)
{
	std::cout << "copy constructor called" << std::endl;

ls

Figi& Figi::operator=(const Figi& figi)
{
	if(this != &figi){

		d_char = figi.d_char;
		std::cout << "assignment constructor called" << std::endl;
	}
	return *this;
}
