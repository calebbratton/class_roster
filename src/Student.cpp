#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string id, string fName, string lName, string initEmail, int initAge, vector<int> dtc, DegreeProgram degree)
{
  studentID = id;
  firstName = fName;
  lastName = lName;
  email = initEmail;
  age = initAge;
  daysToComplete = dtc;
  degreeProgram = degree;
}

// setters
void Student::setStudentID(string id)
{
  studentID = id;
}

void Student::setFirstName(string fName)
{
  firstName = fName;
}

void Student::setLastName(string lName)
{
  lastName = lName;
}

void Student::setEmail(string initEmail)
{
  email = initEmail;
}

void Student::setDaysToComplete(vector<int> dtc)
{
  daysToComplete = dtc;
}

void Student::setDegree(DegreeProgram degree)
{
  degreeProgram = degree;
}

// getters
string Student::getStudentID()
{
  return studentID;
}

string Student::getFirstName()
{
  return firstName;
}

string Student::getLastName()
{
  return lastName;
}

string Student::getEmail()
{
  return email;
}

vector<int> Student::getDaysToComplete()
{
  return daysToComplete;
}

DegreeProgram Student::getDegree()
{
  return degreeProgram;
}

void Student::print()
{
  cout << studentID << "\t First Name : " << firstName << "\t Last Name : " << lastName << "\t Age : " << age << "\t daysInCourse : {" << daysToComplete.at(0) << "," << daysToComplete.at(1) << "," << daysToComplete.at(2) << "}\t Degree Program : " << getDegreeString(getDegree()) << endl;
}