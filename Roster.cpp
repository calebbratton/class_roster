#include "Roster.h"

vector<string> Roster::GetRoster();
void Roster::Add(string initId, string fName, string lName, string initEmail, int initAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree)
{
  Student student(initId, fName, lName, initEmail, initAge, vector<int>{daysInCourse1, daysInCourse2, daysInCourse3}, degree);
  classRosterArray.push_back(student &);
};
void Roster::remove(string id)
{
  unsigned int i = 0;
  while (i < classRosterArray.size() - 1)
  {
    if (classRosterArray.at(i).GetStudentID() == id)
    {
      classRosterArray.erase(i);
      break;
    }
    ++i;
  }
};
void Roster::printAll();
void Roster::printAverageDaysInCourse(string studentID);
void Roster::PrintInvalidEmails();
void Roster::PrintByDegreeProgram(DegreeProgram degreeProgram);