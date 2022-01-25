//student.h
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

//defines the standard input output stream objects
#include <iostream>
//allows the uses of basic string handling templates
#include <string>
//used to work on strings
#include <sstream>



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
		Student();
		Student(student); //overload constructor
        void setGPA(std::string GPA);
		std::string getGPA();
		void setCreditHours(std::string CH);
		std::string getCreditHours();
		void setBirth(std::string Birth);
		std::string getBirth();
		void setGrad(std::string Grad);
		std::string getGrad();
		void setAddress(std::string Address);
		std::string getAddress();


}; //end of class def
