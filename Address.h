//address.h
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

//defines the standard input output stream objects
#include <iostream>
//allows the uses of basic string handling templates
#include <string>
//used to work on strings
#include <sstream>

#include "student.h"

class Address {
	private:
		std::string addressOne;
		std::string addressTwo;
		std::string city;
		std::string state;
		std::string zip;

	public:
		Address:Address();
		std::string getAddressOne();
		void setAddressOne(std::string Address1);
		std::string getAddressTwo();
		void setAddressTwo(std::string Address2);
		std::string getCity;
		void setCity(std::string City);
		std::string getState;
		void setState(std::string State);
		std::string getZip;
		void setZip(std::string Zip);

}; //end of class def
