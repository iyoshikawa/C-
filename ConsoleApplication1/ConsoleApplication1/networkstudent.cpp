#include <string>
#include <array>
#include <iostream>
using namespace std;

#include "networkstudent.h"
//constructor
NetworkStudent::NetworkStudent() {
	string degree = "unknown";
}

//constructor with parameters
NetworkStudent::NetworkStudent(string degree) {
	networkDegree = degree;
}

void NetworkStudent::SetNetworkStudent(string degree){
}

string NetworkStudent::GetNetworkStudent() const {
	return networkDegree;
}

void NetworkStudent::Print() {
	cout << studentId << " " << firstName << " " << lastName
	<< " " << email << " " << age << " " << days << " " << degree;

	return;
}

