#include "Student.h"

using namespace std;

Student::Student(string id, string fName, string lName, string initEmail, int initAge, vector<int> dtc, string degree)
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
void Student::SetStudentID(string id)
{
  studentID = id;
}

void Student::SetFirstName(string fName)
{
  firstName = fName;
}

void Student::SetLastName(string lName)
{
  lastName = lName;
}

void Student::SetEmail(string initEmail)
{
  email = initEmail;
}

void Student::SetDaysToComplete(vector<int> dtc)
{
  daysToComplete = dtc;
}

void Student::SetDegree(string degree)
{
  degreeProgram = degree;
}

// getters
string Student::GetStudentID()
{
  return studentID;
}

string Student::GetFirstName()
{
  return firstName;
}

string Student::GetLastName()
{
  return lastName;
}

string Student::GetEmail()
{
  return email;
}

vector<int> Student::GetDaysToComplete()
{
  return daysToComplete;
}

string Student::GetDegree()
{
  return degreeProgram;
}