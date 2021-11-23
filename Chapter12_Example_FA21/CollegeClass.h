// *************************************
// David Busch
// Date: Dec. 7, 2017
// College class header (Lab name, ie. LabIX)
// Stores and displays information about a college class.
// *************************************

#ifndef COLLEGECLASS_H	// Preprocessor if not defined statement. Ensures that CollegeClass is only loaded once.
#define COLLEGECLASS_H	// Defines COLLEGECLASS_H macro. Used to ensure that CollegeClass is only loaded once.

#include <string>

using namespace std;

class CollegeClass
{
public:

	//! Constructor
	//!
	//! Precondition:	None.
	//! Postcondition:	Object created.
	//! Arguments:		None.
	//! Notes:			Sets default values of empty strings for name and course_code. Use get functions to return values.
	CollegeClass();

	//! Sets new value for name. This is the name of the college class.
	//!
	//! Precondition:	Constructor has been called.
	//! Postcondition:	Value for new name is stored.
	//! Arguments:		string name_ : The name of the college class.
	void SetName(string name_) { name = name_; };

	//! Returns value stored for name. This is the name of the college class.
	//!
	//! Precondition:	Constructor has been called and string has been stored to name.
	//! Postcondition:	name is returned.
	//! Arguments:		None.
	string GetName() { return name; };

	//! Sets new value for course_code. Course prefix and number.
	//!
	//! Precondition:	Constructor has been called.
	//! Postcondition:	Value for new course_code is stored.
	//! Arguments:		string course_code_ : Course prefix and number.
	void SetCourseCode(string course_code_) { course_code = course_code_; };

	//! Returns value stored for course_code. Course prefix and number.
	//!
	//! Precondition:	Constructor has been called and string has been stored to course_code.
	//! Postcondition:	course_code is returned.
	//! Arguments:		None.
	string GetCourseCode() { return course_code; };

	//! Displays name and course_code to the screen with identifying labels.
	//!
	//! Precondition:	Constructor has been called, iostream library has been loaded, and strings have been stored to name and course_code.
	//! Postcondition:	Values displayed to the screen.
	//! Arguments:		None.
	void DisplayName();

private:
	string	name;				// Name of the college class.
	string	course_code;		// Course prefix and number.

};

#endif // !COLLEGECLASS_H

