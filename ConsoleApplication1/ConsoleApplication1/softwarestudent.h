#pragma once
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include <iostream>
#include <string>
#include <array>
#include "student.h"
using namespace std;

class SoftwareStudent : public Student {
public:
	SoftwareStudent(string degree);
	SoftwareStudent();
	void SetSoftwareStudent(string degree);
	string GetSoftwareStudent() const;
	void Print();
private:
	string softwareDegree;
};
#endif // !SOFTWARESTUDENT_H
