#pragma once
#ifndef __CARTESIAN_POINT__
#define __CARTESIAN_POINT__
#include <string>

class CartesianPoint
{
public:

	/* Constructor: Used to initialize objects
	*	- always the same name as the class
	*	- never have a return type
	*	- called automatically when an obj is instantiated
	*	- should set values for each member variable
	*/
	CartesianPoint(int x = 1, int y = 1);

	//Destructors
	~CartesianPoint();

	//Copy Constructor
	CartesianPoint(const CartesianPoint& point_two);

	//Operator Overloads
	double operator-(const CartesianPoint& point_to) const;
	bool operator==(const CartesianPoint& point_to) const;
	CartesianPoint operator+(const CartesianPoint& point_two) const;

	// --------------------------------------------------------------------------------
	/* Accessors: Used to query the state of the object
	*	- never modifies the object
	*	- should specify const at the end of the prototype/header
	*/

	// get x
	int GetX() const;

	// get y
	int GetY() const;

	// -------------------------------------------------------------------------------
	/* Mutator(s): Used to change the state of the object
	*	- should contain logic to ensure object remains in a valid state.
	*	- typically sets a member variable to a parameter
	*/

	// set x
	void SetX(int x);

	// set y,
	void SetY(int y);

	// set point (both x and y)
	void SetPoint(int x, int y);


	// get the distance between this point and a second point
	double GetDistanceTo(const CartesianPoint& point_to) const;

	// convert the obj to a string
	std::string ToString() const;


private:
	// private data members for the dimensions of the point
	int m_x; // x-axis (horizontal) value
	int m_y;  // y-axis (vertical) value

};
#endif // defined (__CARTESIAN_POINT__)


