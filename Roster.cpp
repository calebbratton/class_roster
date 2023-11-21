#include "Roster.h"
#include <iostream>
#include <numeric>

using namespace std;

vector<Student *> Roster::getRoster()
{
  return classRosterArray;
};

void Roster::add(string initId, string fName, string lName, string initEmail, int initAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree)
{
  vector<int> dtc;
  dtc.push_back(daysInCourse1);
  dtc.push_back(daysInCourse2);
  dtc.push_back(daysInCourse3);

  Student *student = new Student(initId, fName, lName, initEmail, initAge, dtc, degree);

  classRosterArray.push_back(student);
};

void Roster::remove(string id)
{
  unsigned int i = 0;
  bool found = false;
  while (i < classRosterArray.size() - 1)
  {
    Student *student = classRosterArray.at(i);
    if (student->getStudentID() == id)
    {
      delete student;
      classRosterArray.erase(classRosterArray.begin() + i);
      found = true;
      break;
    }
    ++i;
  }
  if (!found)
  {
    cout << "Student with ID: " << id << " not found." << endl;
  }
};

void Roster::printAll()
{
  cout << "All Students:" << endl;
  for (Student *student : classRosterArray)
  {
    student->print();
  }
}

void Roster::printAverageDaysInCourse(string studentID)
{
  for (Student *student : classRosterArray)
  {
    if (student->getStudentID() == studentID)
    {
      int sum = 0;
      vector<int> dtc = student->getDaysToComplete();
      for (int i = 0; i < dtc.size(); ++i)
      {
        sum += dtc.at(i);
      }

      cout << student->getFirstName() << " " << student->getLastName() << "'s Average Days In Course: " << sum / dtc.size() << endl;
      break;
    }
  }
};

void Roster::printInvalidEmails()
{
  cout << "Invalid email addresses: ";
  for (Student *student : classRosterArray)
  {
    if (!isValidEmail(student->getEmail()))
    {
      cout << student->getEmail() << ", ";
    }
  }
  cout << endl;
};

bool Roster::isValidEmail(string email)
{
  size_t atPos = email.find('@');
  size_t dotPos = email.rfind('.');
  bool hasNoSpaces = email.find(' ') == string::npos;

  return (atPos != string::npos && dotPos != string::npos && atPos < dotPos && hasNoSpaces);
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
  cout << "Students enrolled in " << Student::getDegreeString(degreeProgram) << " :" << endl;
  for (Student *student : classRosterArray)
  {
    if (student->getDegree() == degreeProgram)
    {
      student->print();
    }
  }
};