// *************************************
// David Busch
// Date: Dec. 7, 2017
// College class implementation (Lab name, ie. LabIX)
// Stores and displays information about a college class.
// *************************************

#include "CollegeClass.h"
#include <iostream>

using namespace std;

//! Constructor
//! Assign default values to variables.
CollegeClass::CollegeClass()
{
	name = "";
	course_code = "";
}

//! Display class name function
//! Display the class name information with labels.
void CollegeClass::DisplayName()
{
	cout << "Class name: " << name << endl;
	cout << "Class code: " << course_code << endl;
}