/*
 * Reservation.cpp
 *
 *  Created on: May 14, 2019
 *      Author: karatsuba
 */

#include "Reservation.h"

#include <iostream>
#include <fstream>

using namespace std;

int Reservation::count = 1;
Reservation::Reservation() {
	// TODO Auto-generated constructor stub
	id = 0;
	index = 0;

}
Reservation::Reservation(string f_name,string l_name,string email,int ind):first_name(f_name),last_name(l_name),email_add(email){

	id = count;
	count++;
	index = ind;
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
int Reservation::get_id()const{

	return id;
}
int Reservation::get_index()const{

	return index;
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
	 cout <<"First Name     : "; cin >> first_name;

	 cout <<"Last Name      : "; cin >> last_name;


     cout <<"Email address : "; cin >> email;

    set_first_name(first_name);
    set_last_name(last_name);
    set_email_add(email);

}
void Reservation::record(string path,int idx){

	ofstream file(path,ios_base::app);

	if(file.is_open()){

		file <<"Name : " <<get_first_name() <<" "<< get_last_name() << " ----> " << " Email address : "<< get_email_add() << " ----> " << "index : "<< get_index() << " ----> " << "Booking Id " << get_id() << endl;
	}
}
Reservation::~Reservation() {
	// TODO Auto-generated destructor stub
}

