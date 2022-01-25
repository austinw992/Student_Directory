/*
 * File: Address.cpp
 * Author: Austin Wang
 * Date Created: 2 October 2020
 * Purpose: Create Class Address
 */


//defines the standard input output stream objects
#include <iostream>
//allows the uses of basic string handling templates
#include <string>
//used to convert strings
#include <sstream>
#include <fstream>

#include "Address.h"

class Address {
	private:

		std::string addressOne;
		std::string addressTwo;
		std::string City;
		std::string State;
		std::string Zip;

	public:
		Address::Address(){

            Address::street = Student();
            Address::city = Student();
            Address::state = Student();
            Address::code = Student();

		} //end of constructor


        void Address::setAddressOne(std::string Address1) {

			std::string Address::addressOne = a;

		} //end of setAddressOne


		std::string Address::getAddressOne(){

			return a.getAddressOne;

		} //end of getAddressOne

		void Address::setAddressTwo(std::string Address2){

		   std::string Address::addressTwo = b;

		} //end of setAddressTwo

		std::string Address::getAddressTwo(){

            return b.getAddressTwo;

        } //end of getAddressTwo

		void Address::setCity(std::string City){

            std::string Address::city = c;

		} //end of setCity

		std::string Address::getCity(){

            return c.getCity;

        } //end of getCity

        void Address::setState(std::string State){

            std::string Address::State = s;

		} //end of setState

		std::string Address::getState(){

            return s.getState;

        } //end of getState

        void Address::setZip(std::string Zip){

            std::string Address::Zip = z;

		} //end of setZip

		std::string Address::getZip(){

            return z.getZip;

		} //end of getZip





}; //end of Address Class
