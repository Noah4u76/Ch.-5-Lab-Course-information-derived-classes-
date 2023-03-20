//
// File: Course.cpp
// Description: Course information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "Course.h"

	// DONE: Define mutator functions - 
	//       SetCourseNumber(), SetCourseTitle()
void  Course::SetCourseNumber(string numSet) {
  courseNum = numSet;
}
void  Course::SetCourseTitle(string titleSet) {
  courseTitle = titleSet;
}
	// DONE: Define accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()
string Course::GetCourseNumber() const{
  return courseNum;
}
string Course::GetCourseTitle() const{
  return courseTitle;
}
	// DONE: Define PrintInfo()
void Course::PrintInfo() const{
  cout << "Course Information:" << endl;
  cout << "   Course Number: " << GetCourseNumber() << endl;
  cout << "   Course Title: " << GetCourseTitle() << endl;
}