#include <iostream>
#include <string>
#include <array>

using namespace std;

#include "student.h"

Student::Student() {
	firstName = "Unknown";
	lastName = "unknown";
	age = 0;
	studentID = "unknown";
	daysInCourse1 = 0;
	daysInCourse2 = 0;
	daysInCourse3 = 0;
	degree = "unknown";

	return;
}

// Setters for all of the data input fields
void Student::SetFirstName(string firstName) {
	firstName = firstName;
	return;
}

void Student::SetLastName(string lastName) {
	lastName = lastName;
	return;
}

void Student::SetAge(int age) {
	age = age;
	return;
}

void Student::SetId(string studentID) {
	studentID = studentID;
	return;
}

void Student::SetEmail(string emailAddress) {
	emailAddress = emailAddress;
	return;
}

void Student::SetDay1(int daysInCourse1) {
	daysInCourse1 = daysInCourse1;
	return;
}

void Student::SetDay2(int daysInCourse2) {
	daysInCourse2 = daysInCourse2;
	return;
}

void Student::SetDay3(int daysInCourse3) {
	daysInCourse3 = daysInCourse3;
	return;
}

void Student::SetDegree(string degree) {
	degree = degree;
	return;
}

// Getters for all the data input fields
string Student::GetFirstName() const {
	return firstName;
}

string Student::GetLastName() const {
	return lastName;
}

int Student::GetAge() const {
	return age;
}

string Student::GetId() const {
	return studentID;
}

string Student::GetEmail() const {
	return emailAddress;
}

int Student::GetDay1() const {
	return daysInCourse1;
}

int Student::GetDay2() const {
	return daysInCourse2;
}

int Student::GetDay3() const {
	return daysInCourse3;
}

string Student::GetDegree() const {
	return degree;
}

//****************************************************
void Student::Print() {
	cout << firstName << lastName << age << studentID << daysInCourse1 <<
		daysInCourse2 << daysInCourse3 << degree;

	return;
};