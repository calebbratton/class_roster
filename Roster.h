#ifndef ROSTER_H
#define ROSTER_H

#include "Student.h"

using namespace std;

class Roster
{
public:
  vector<string> GetRoster();

private:
  vector<Student &> classRosterArray;
}