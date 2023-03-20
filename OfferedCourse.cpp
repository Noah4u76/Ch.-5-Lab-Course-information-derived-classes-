//
// File: OfferedCourse.cpp
// Description: Course information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "OfferedCourse.h"

// DONE: Define mutator functions -
//      SetInstructorName(), SetLocation(), SetClassTime()
void OfferedCourse::SetInstructorName(string instructorSet){
  instructorName = instructorSet;
}
void OfferedCourse::SetLocation(string locationSet){
  courseLocation = locationSet; 
}
void OfferedCourse::SetClassTime(string timeSet){
  courseTime = timeSet;
}
// TODO: Define accessor functions -
//      GetInstructorName(), GetLocation(), GetClassTime()
string OfferedCourse::GetInstructorName() const{
  return instructorName;
}
string OfferedCourse::GetLocation() const{
  return courseLocation;
}
string OfferedCourse::GetClassTime() const{
  return courseTime;
}