#include "CartesianPoint.h"

#include <sstream>
#include <string>
#include <cmath>
// Class definition section

// constructor for CartesianPoint
CartesianPoint::CartesianPoint(const int x, const int y): m_x(x), m_y(y)
{
	//SetPoint(x, y);
}
//Destructor
CartesianPoint::~CartesianPoint()
= default;

CartesianPoint::CartesianPoint(const CartesianPoint& point_two)
{
	SetPoint(point_two.GetX(), point_two.GetY());
}

//Operator Overloads
double CartesianPoint::operator-(const CartesianPoint& point_to) const
{
	// difference between x values
	const int xDelta = point_to.GetX() - m_x;

	// difference between y values
	const int yDelta = point_to.GetY() - m_y;

	// return the formula (based on Pythagorean theorem)
	return sqrt((xDelta * xDelta) + (yDelta * yDelta));
}

bool CartesianPoint::operator==(const CartesianPoint& other_point) const
{
	return (GetX() == other_point.GetX()) && (GetY() == other_point.GetY());
}

CartesianPoint CartesianPoint::operator+(const CartesianPoint& point_two) const
{
	CartesianPoint tempPoint;
	tempPoint.SetX(GetX() + point_two.GetX());
	tempPoint.SetY(GetY() + point_two.GetY());
	return tempPoint;
}


void CartesianPoint::SetPoint(int x, int y)
{
	SetX(x);
	SetY(y);
}

void CartesianPoint::SetX(int x)
{
	m_x = x;
}

void CartesianPoint::SetY(int y)
{
	m_y = y;
}

int CartesianPoint::GetX() const
{
	return m_x;
}

int CartesianPoint::GetY() const
{
	return m_y;
}


/** GetDistanceTo Method for CartesianPoint class
*	Determines the distance between this point and a second point.
*	@param	point_to: CartesianPoint
*	@return	the distance as a double
*/
double CartesianPoint::GetDistanceTo(const CartesianPoint& point_to) const
{
	// difference between x values
	const int xDelta = point_to.GetX() - m_x;

	// difference between y values
	const int yDelta = point_to.GetY() - m_y;

	// return the formula (based on Pythagorean theorem)
	return sqrt((xDelta * xDelta) + (yDelta * yDelta));
}

/** ToString Method for CartesianPoint class
*	Converts the obj to a string.
*	@return	the obj state as a string
*/

std::string CartesianPoint::ToString() const
{
	// declare a stringstream object
	std::stringstream strOut;

	// build the string
	strOut << "(" << m_x << ", " << m_y << ")";

	// return the string
	return strOut.str();
}