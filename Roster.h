#ifndef ROSTER_H
#define ROSTER_H

#include "Student.h"
#include "Degree.h"

using namespace std;

class Roster
{
public:
  vector<string> getRoster();
  void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
  void remove(string studentID);
  void printAll();
  void printAverageDaysInCourse(string studentID);
  void printInvalidEmails();
  void printByDegreeProgram(DegreeProgram degreeProgram);

private:
  vector<Student *> classRosterArray;
};

#endif