#pragma once
#include <string>
#include <array>
#include <iostream>
using namespace std;

#include "softwarestudent.h"
//constructor
SoftwareStudent::SoftwareStudent() {
	string degree = "unknown";
}

//constructor with parameters
SoftwareStudent::SoftwareStudent(string degree) {
	softwareDegree = degree;
}

void SoftwareStudent::SetSoftwareStudent(string degree) {
	
}

string SoftwareStudent::GetSoftwareStudent() const {
	return softwareDegree;
}



void SoftwareStudent::Print() {
	cout << studentId << " " << firstName << " " << lastName
	<< " " << email << " " << age << " " << days << " " << degree;

	return;
}

