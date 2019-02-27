#pragma once
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDNET_H

#include <iostream>
#include <string>
#include <array>
#include "student.h"
using namespace std;

class SecurityStudent : public Student {
public:
	SecurityStudent(string degree);
	SecurityStudent();
	void SetSecurityStudent(string degree);
	string GetSecurityStudent() const;
	void Print();
private:
	string securityDegree;
};
#endif