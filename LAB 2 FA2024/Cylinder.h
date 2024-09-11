#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
private:
	const double PI = 3.14159265;
	double radius;
	double height;

public:
// Constructor
Cylinder (double r = 1.0, double h = 1.0);

// Getters and setters
double getRadius() const;
void setRadius(double r);

double getHeight() const;
void setHeight(double h);

// Methods to calculate volume and surface area
double volume() const;
double surfaceArea() const;

};

#endif // !CYLINDER_H

