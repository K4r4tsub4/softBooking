/*
 * Reservation.cpp
 *
 *  Created on: May 14, 2019
 *      Author: karatsuba
 */

#include "Reservation.h"

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


Reservation::Reservation() {
	// TODO Auto-generated constructor stub

}

void Reservation::set_email_add(string email){

	email_add = email;
}
void Reservation::set_first_name(string f_name){

	first_name = f_name;
}
void Reservation::set_last_name(string l_name){

   last_name = l_name;
}

string Reservation::get_booking_id()const{

	return booking_id;
}
string Reservation::get_email_add()const{

	return email_add;
}
string Reservation::get_first_name()const{

	return first_name;
}
string Reservation::get_last_name()const{

	return last_name;
}
void Reservation::book(){
	 string first_name,last_name,email;

	 string index;

	 cout <<"First Name                                : "; cin >> first_name;

	 cout <<"Last Name                                 : "; cin >> last_name;

     cout <<"Email address                             : "; cin >> email;

     cout <<"Booking Id (on your transport program)    : ";cin >> index;

    set_first_name(first_name);

    set_last_name(last_name);

    set_email_add(email);

    set_index(index);


}
void Reservation::set_index(string idx){

	booking_id = idx;
}
void Reservation::record(string path){

	//path is the file where our reservation will be stored

	ofstream file(path,ios_base::app);

	if(file.is_open()){

		file <<"Name : " <<get_first_name() <<" "<< get_last_name() << " ----> " << " Email address : "<< get_email_add() << " ----> " << "Booking Id : " << " -----> "<< get_booking_id() << endl;
	}

	cout << endl;
	cout << setw(50) << "Booking successfully done ! "<< endl;
}
Reservation::~Reservation() {
	// TODO Auto-generated destructor stub
}

