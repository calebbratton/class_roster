#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>
#include "Degree.h"

using namespace std;

class Student
{
public:
  Student(string id, string fName, string lName,
          string email, int age, vector<int> dtc, DegreeProgram degree);
  void setFirstName(string fName);
  string getFirstName();
  void setLastName(string lName);
  string getLastName();
  void setStudentID(string id);
  string getStudentID();
  void setEmail(string studentEmail);
  string getEmail();
  void setDaysToComplete(vector<int> dtc);
  vector<int> getDaysToComplete();
  void setDegree(DegreeProgram degree);
  string getDegreeString();
  DegreeProgram getDegree();
  // void Print(string itemToPrint);

private:
  string studentID;
  string firstName;
  string lastName;
  string email;
  int age;
  vector<int> daysToComplete;
  DegreeProgram degreeProgram;
};

#endif
