#include "Roster.h"

using namespace std;

vector<string> Roster::getRoster()
{
  return classRosterArray;
};

void Roster::add(string initId, string fName, string lName, string initEmail, int initAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree)
{
  Student *student = new Student(initId, fName, lName, initEmail, initAge, vector<int>{daysInCourse1, daysInCourse2, daysInCourse3}, degree);
  classRosterArray.push_back(student);
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

void Roster::printAll()
{
  for (Student *student : classRosterArray)
  {
    cout << *student.getFirstName();
  }
}

void Roster::printAverageDaysInCourse(string studentID)
{
  for (Student *student : classRosterArray)
  {
    if (student.getStudentID() == studentID)
    {
      cout << sum(student.getDaysToComplete()) / student.getDaysToComplete().size() << endl;
      break;
    }
  }
};
void Roster::printInvalidEmails(){

};

void checkEmail(string email)
{
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
  for (Student *student : classRosterArray)
  {
    if (student.getDegree() == degreeProgram)
    {
      cout << sum(student.getDaysToComplete()) / student.getDaysToComplete().size() << endl;
      break;
    }
  }
};