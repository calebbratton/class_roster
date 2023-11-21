#ifndef ROSTER_H
#define ROSTER_H

#include "Student.h"

using namespace std;

class Roster
{
public:
  vector<string> GetRoster();
  void Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
  void remove(string studentID);
  void printAll();
  void printAverageDaysInCourse(string studentID);
  void PrintInvalidEmails();
  void PrintByDegreeProgram(DegreeProgram degreeProgram);

private:
  vector<Student &> classRosterArray;
}