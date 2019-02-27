#pragma once
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDNET_H

#include <iostream>
#include <string>
#include <array>
#include "student.h"
using namespace std;

class NetworkStudent : public Student {
public:
	NetworkStudent(string degree);
	NetworkStudent();
	void SetNetworkStudent(string degree);
	string GetNetworkStudent() const;
	void Print();
private:
	string networkDegree;
};


#endif
