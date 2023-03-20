//
// File: OfferedCourse.h
// Description: Course information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
  // DONE: Declare private data members
private:
  string instructorName;
  string courseLocation;
  string courseTime;
  // DONE: Declare mutator functions -
  //      SetInstructorName(), SetLocation(), SetClassTime()
public:
  void SetInstructorName(string instructorSet);
  void SetLocation(string locationSet);
  void SetClassTime(string timeSet);

  // DONE: Declare accessor functions -
  //      GetInstructorName(), GetLocation(), GetClassTime()
  string GetInstructorName() const;
  string GetLocation() const;
  string GetClassTime() const;
};

#endif