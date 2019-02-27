#include <string>
#include <array>
#include <iostream>
using namespace std;

#include "securitystudent.h"
//constructor
 SecurityStudent::SecurityStudent() {
	string degree = "unknown";
}

 //constructor with parameters
 SecurityStudent::SecurityStudent(string degree) {
	 securityDegree = degree;
 }

 void SecurityStudent::SetSecurityStudent(string degree) {
 }

 string SecurityStudent::GetSecurityStudent() const {
	 return securityDegree;
 }



void SecurityStudent::Print() {
	cout << studentId << " " << firstName << " " << lastName
	<< " " << email << " " << age << " " << days << " " << degree;

	return;
}
