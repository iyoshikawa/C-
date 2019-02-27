#ifndef DEGREE_H
#define DEGREE_H

#pragma once
#include <iostream>
#include <string>
#include <array>
#include "student.h"

using namespace std;

class Degree : public Student {
public:
	void SetSecurityStudent(string degree);
	void SetNetworkStudent(string degree);
	void SetSoftwareStudent(string degree);
	string securityStudent;
	string networkStudent;
	string softwareStudent;
private:
	string softwareDegree;

};

const string studentData[] = {
	"A1","John","Smith","John1989@gmail.com", 20, {30,35,40},"SECURITY",
	"A2","Suzan,Erickson","Erickson_1990@gmailcom", 19, {50,30,40 }, "NETWORK",
	"A3","Jack","Napoli","The_lawyer99yahoo.com", 19, {20,40,33},"SOFTWARE",
	"A4","Erin","Black","Erin.black@comcast.net", 22, {50,58,40},"SECURITY",
	"A5","Ian","Yoshikawa","iyoshi1@wgu.edu", 29, {30, 30, 30},"SOFTWARE"
};

//int main() {
	//enum Degree { Security, Networking, Sofware }

	//return 0;
//};


#endif // !degree.h