#pragma once
#include <iostream>
class GeometricFigure
{
	public:
	double base;
	double atribute;
	virtual double area();
	virtual double circuit();
	virtual double getBase();
	virtual double getAtribute();
//	friend GeometricFigure;
};

	class triangle:
	public GeometricFigure
	{
	public:
		triangle(double base, double atribute);
		double area();
		double circuit();
		friend std::iostream& operator<<(std::iostream& os, triangle& jd);
	//friend GeometricFigure;
	};
	class rectangle :
		public GeometricFigure
	{
	public:
		rectangle(double base, double atribute);
		double area();
		double circuit();
		//operator<<(ostream& os, const rectangle& p);
	//	void operator<<();
	//friend GeometricFigure;
	//	ostream& operator<<(std::ostream& os, /*const*/ rectangle& jd);
		 friend std::iostream& operator<<(std::iostream& os, rectangle& jd);
	};
	class circle:
	public GeometricFigure
	{
	public:
		circle(double base);
		double area();
		double circuit();
		friend std::iostream& operator<<(std::iostream& os, circle& dt);
	//friend GeometricFigure;
	};


