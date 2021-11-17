#include "table.h"

table::table()
{
	height = 3;
	width = 6;
	length = 28;
}

table::~table()
{
}

void table::SetHeight(float height_)
{
	height = height_;
}

void table::SetWidth(float width_)
{
	width = width_;
}

void table::SetLength(float length_)
{
	length = length_;
}

float table::GetHeight()
{
	return height;
}

float table::GetWidth()
{
	return width;
}

float table::GetLength()
{
	return length;
}