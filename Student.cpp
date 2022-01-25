/*
 * File: Student.cpp
 * Author: Austin Wang
 * Date Created: 2 October 2020
 * Purpose: Create Class Student
 */

//defines the standard input output stream objects
#include <iostream>
//allows the uses of basic string handling templates
#include <string>
//used to convert strings
#include <sstream>
#include <fstream>

#include "Student.h"
#include "Date.h"
#include "Address.h"


class Student {

	private:
		std::string firstName;
		std::string lastName;
		std::string gpa;
		std::string creditHours;
		Date* birthDate;
		Date* gradDate;
        Address* address1;

	public:
		Student(){

		}

		Student(student){

		} //overload constructor

		void setGPA(string){

		}
		std::string getGPA(){

		}
		void setCreditHours(std::string CH){

		}
		std::string getCreditHours(){

		}

		//pointers of the assignment

		std::string getBirth(){

		}

		std::string getGrad(){

		}

		std::string getAddress(){

		}



}; //end of student class
