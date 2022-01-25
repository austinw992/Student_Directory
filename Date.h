//date.h
#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

//defines the standard input output stream objects
#include <iostream>
//allows the uses of basic string handling templates
#include <string>
//used to work on strings
#include <sstream>

#include "student.h"

class Date {
	private:
		std::string birthDate;
		std::string gradDate;

	public:
		Date();
		std::string getBirth();
		void setBirth(std::string Birth);
		std::string getGrad();
        void setGrad(std::string Grad);


}; //end of class def
