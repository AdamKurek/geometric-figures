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
	//friend std::iostream& operator<<(std::iostream& os,const GeometricFigure& jd);
	virtual void draw();
};

	class triangle:
	public GeometricFigure
	{
	public:
		triangle(double base, double atribute);
		virtual double area();
		virtual double circuit();
		//friend std::iostream& operator<<(std::iostream& os, triangle& jd);
		void draw();
	};
	class rectangle :
		public GeometricFigure
	{
	public:
		rectangle(double base, double atribute);
		double area();
		double circuit();
		// friend std::iostream& operator<<(std::iostream& os, rectangle& jd);
		void draw();
		friend std::iostream& operator<<(std::iostream& os,const rectangle& jd);
	};
	class ellipse:
	public GeometricFigure
	{
	public:
		ellipse(double base,double atribute);
		double area();
		double circuit();
		//friend std::iostream& operator<<(std::iostream& os, circle& jd);
	 void draw();
	};


