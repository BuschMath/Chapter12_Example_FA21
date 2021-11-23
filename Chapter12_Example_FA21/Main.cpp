#include <iostream>
#include "CollegeClass.h"

using namespace std;

int main()
{
	CollegeClass Calculus;

	Calculus.SetName("Calculus");
	Calculus.SetCourseCode("MAT-210");

	Calculus.DisplayName();

	return 0;
}