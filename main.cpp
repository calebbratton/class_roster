#include "./src/Roster.h"
#include "./src/Degree.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  cout << "Course: Scripting and Programming - Applications - C867" << endl
       << "Programming Language: C++" << endl
       << "WGU Student ID: 001438983" << endl
       << "Name: Caleb Bratton" << endl;
  cout << endl;

  Roster classRoster;
  const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "001438983,Caleb,Bratton,cbratt6@wgu.edu,30, 12, 20, 10,SOFTWARE"};
  for (string student : studentData)
  {
    stringstream s_stream(student);
    vector<string> res;
    while (s_stream.good())
    {
      string substr;
      getline(s_stream, substr, ',');
      res.push_back(substr);
    }

    DegreeProgram dp;
    if (res.at(8) == "SECURITY")
    {
      dp = SECURITY;
    }
    else if (res.at(8) == "SOFTWARE")
    {
      dp = SOFTWARE;
    }
    else
    {
      dp = NETWORK;
    }

    classRoster.add(res.at(0), res.at(1), res.at(2), res.at(3), stoi(res.at(4)), stoi(res.at(5)), stoi(res.at(6)), stoi(res.at(7)), dp);
  }
  cout << endl;

  classRoster.printAll();
  cout << endl;

  classRoster.printInvalidEmails();
  cout << endl;

  for (Student *student : classRoster.getRoster())
  {
    classRoster.printAverageDaysInCourse(student->getStudentID());
  };

  cout << endl;
  classRoster.printByDegreeProgram(SOFTWARE);
  cout << endl;

  classRoster.remove("A3");
  cout << endl;

  classRoster.printAll();
  cout << endl;

  classRoster.remove("A3");

  return 0;
}