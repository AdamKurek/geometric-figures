#include "GeometricFigure.h"
#include <cmath>
#include<iostream>
double GeometricFigure::area()
{
    //po co to jest?
    return 0.0;
}

double GeometricFigure::circuit()
{
    //po co to jest?????
    return 0.0;
}

double GeometricFigure::getBase()
{
    return base;
}

double GeometricFigure::getAtribute()
{
    return atribute;
}



triangle::triangle(double base, double atribute)
{
    this->base = base;
    this->atribute = atribute;
}


double triangle::area()
{
    return base*atribute/2;
}

double triangle::circuit()
{
    return base+(sqrt( pow(base/2,2)*pow(atribute,2)));
}



rectangle::rectangle(double base, double atribute)
{
    this->base = base;
    this->atribute = atribute;
}


double rectangle::area()
{
    return base*atribute;
}

double rectangle::circuit()
{
    return 2*(base+atribute);
}


/*rectangle::operator<<(ostream& os, const rectangle& p)
{
    return os << '[' << p.x << ',' << p.y << ',' << p.z << ']';
}

void rectangle::operator<<()
{
    std::cout << "JD";
}*/




circle::circle(double base)
{
    this->base = base;
    atribute = base / 2;
}
double circle::area()
{
    return atribute*atribute*3.14;
}

double circle::circuit()
{
    return 6.28*base;
}

std::iostream& operator<<(std::iostream& os,GeometricFigure& jd)
{
    os << "JD";
    return os;
}



