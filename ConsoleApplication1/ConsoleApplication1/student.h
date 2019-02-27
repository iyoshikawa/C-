#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

//Setters
class Student {
public:
	Student(); // default constructor
	void SetId(string studentID);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetAge(int age);
	void SetEmail(string emailAddress);
	void SetDay1(int daysInCourse1);
	void SetDay2(int daysInCourse2);
	void SetDay3(int daysInCourse3);
	void SetDegree(string degree);
	

	string GetId() const;
	string GetFirstName() const;
	string GetLastName() const;
	int GetAge() const;
	string GetEmail() const;
	int GetDay1() const;
	int GetDay2() const;
	int GetDay3() const;
	string GetDegree() const;
	virtual void Print();

private:
	string firstName;
	string lastName;
	string studentID;
	int age;
	string emailAddress;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	string degree;
};
#endif // !"STUDENT_H"
