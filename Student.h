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
  void SetFirstName(string fName);
  string GetFirstName();
  void SetLastName(string lName);
  string GetLastName();
  string GetFullName();
  void SetStudentID(string id);
  string GetStudentID();
  void SetEmail(string studentEmail);
  string GetEmail();
  void SetDaysToComplete(vector<int> dtc);
  vector<int> GetDaysToComplete();
  void SetDegree(DegreeProgram degree);
  DegreeProgram GetDegree();
  void Print(string itemToPrint);

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
