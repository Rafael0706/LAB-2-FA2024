/*
Rafael Gallegos Cespedes
Computer Science Fall 2024
Due: Sep 17, 2024
Lab 2 Exploring Output and Classes

*/
#include <iostream>
#include "Cylinder.h"

int main() {
	//Hardocoded values
	double radius = 5.0;
	double height = 10.0;

	// Create a cylinder object
	Cylinder cylinder(radius, height);

	// Output cylinder properties and calculations
	std::cout << "Cylinder properties:" << std::endl;
	std::cout << "Radius: " << cylinder.getRadius() << std::endl;
	std::cout << "Height: " << cylinder.getHeight() << std::endl;
	std::cout << "Volume: " << cylinder.volume() << std::endl;
	std::cout << "Surface Area: " << cylinder.surfaceArea() << std::endl;

	return 0;
}