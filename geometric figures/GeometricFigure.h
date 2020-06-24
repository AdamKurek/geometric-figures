#pragma once
#include <iostream>
class GeometricFigure
{
	public:
	double base;
	double atribute;
	GeometricFigure();
	double getBase()const;
	double getAtribute()const;
	virtual double area()const =0;
	virtual double circuit()const =0;
	virtual void draw()const =0;
};

	class triangle:
	public GeometricFigure
	{
	public:
		triangle(double base, double atribute);
		 double area()const override;
		 double circuit()const override;//override;
		 void draw()const override;
	};
	class rectangle :
		public GeometricFigure
	{
	public:
		rectangle(double base, double atribute);
		 double area()const override;
		 double circuit()const override;

		  void draw()const override;
	
	};
	class ellipse:
	public GeometricFigure
	{
	public:
		ellipse(double base,double atribute);
		 double area()const override;
		 double circuit()const override;

		 void draw()const override;
	};


	 std::ostream& operator<<(std::ostream& os,  GeometricFigure const &  jd);