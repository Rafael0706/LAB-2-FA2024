#include "Cylinder.h"
#include <cmath> // for M_PI

// Constructor
Cylinder::Cylinder(double r, double h) : radius(r), height(h) {}

//Getters and setters
double Cylinder::getRadius() const {
	return radius;

}

void Cylinder::setRadius(double r) {
	radius = r;

}

double Cylinder::getHeight() const {
	return height;

}

void Cylinder::setHeight(double h) {
	height = h;

}

// Method to calculate volume
double Cylinder::volume() const {
	return PI * radius * radius * height;
}

// Method to calculate surface area
double Cylinder::surfaceArea() const {
	return 2 *PI * radius * (radius + height);
}



