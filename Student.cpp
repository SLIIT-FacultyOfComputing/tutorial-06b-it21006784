#include "Student.h"
#include<iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stdId,char Sname[]) 
{
  studentid = stdId;
  strcpy(name,Sname);
}

// Display StudentId and Name
void Student::display()
{
  cout << "Student ID : "<< studentid<<endl;
  cout << "Name : "<<name;
}
