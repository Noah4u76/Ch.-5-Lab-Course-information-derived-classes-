//
// File: Course.h
// Description: Course information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
	// DONE: Declare private data members
private:
string courseTitle;
string courseNum;

	// DONE: Declare mutator functions 
	//       SetCourseNumber(), SetCourseTitle()
public:
void SetCourseNumber(string numSet);
void SetCourseTitle(string titleSet);

	// DONE: Declare accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()
string GetCourseNumber() const;
string GetCourseTitle() const;

	// DONE: Declare PrintInfo()
void PrintInfo() const;

};

#endif
