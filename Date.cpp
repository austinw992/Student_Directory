/*
 * File: Date.cpp
 * Author: Austin Wang
 * Date Created: 2 October 2020
 * Purpose: Create Class Date
 */

//defines the standard input output stream objects
#include <iostream>
//allows the uses of basic string handling templates
#include <string>
//used to convert strings
#include <sstream>
#include <fstream>

#include "Date.h"


class Date {
	private:
		std::string birthDate;
		std::string gradDate;

	public:
		Date::Date(){
            Date::birth = Student();
            Date::grad = Student();
		} //end of constructor

        void Date::setBirth(int b) {

			Date::Birth = b

		} //end of setBirth

		std::string Date::getBirth(){

			return student.getBirth;

		} //end of getBirth

		void Date::setGrad(int g) {

			Date::Grad = g

		} //end of setGrad

		std::string Date::getGrad(){

			return student.getGrad;

		} //end of getGrad





}; //end of date class
