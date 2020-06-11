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

void GeometricFigure::draw()
{
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

void triangle::draw()
{


        //        /\
        //       /  \
        //      /____\

   /* for (int i=0; i < ( base ) - 1;i++)
        std::cout << " ";
    std::cout<<"/"<<'\\'<< std::endl;
    */


   
    for (double lit = (atribute / base); lit < atribute+ (atribute / base)-1; lit++)
    {
        for (int i = 0; i < base - (lit * (base / atribute)); i++)
            std::cout << " ";
        std::cout << "/";
        int temp = (base / atribute) * lit;
          for (int i = 0; i < (temp*2) -2; i++)
            std::cout << " ";
        std::cout << "\\" << std::endl;
    }


    std::cout << "/";
    for (int i = 0; i < (base*2) - 2; i++)
        std::cout << "_";
    std::cout << "\\";

    
    /*
    
    V1
    
    void triangle::draw()
    {
            //        /\
            //       /  \
            //      /____\

        for (int i=0; i < ( base ) - 1;i++)
            std::cout << " ";
        std::cout<<"/"<<'\\'<< std::endl;
        

        for (int lit = 0; lit < atribute; lit++)
        {
            for (int i = 0; i < base - (lit * (base / atribute)); i++)
                std::cout << " ";
            std::cout << "/";
            //for (int i = 0; i < ((base/atribute)*lit*2) -2; i++)
                std::cout << " ";
            std::cout << "\\" << std::endl;
        }


        std::cout << "/";
        for (int i = 0; i < (base * 2) - 2; i++)
            std::cout << "_";
        std::cout << "\\";


    }*/
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

void rectangle::draw()
{
    std::cout << ",";
    for (int i = 0; i < (2 * base)-2; i++)
        std::cout << "_";
    std::cout << "," << std::endl;

    for (int i = 0; i < atribute - 2; i++)
    {
        std::cout << "|";
        for (int j = 0; j < 2 * base - 2; j++)
            std::cout << " ";
        std::cout << "|" << std::endl;
    }

    std::cout<<'\'';
    for (int i = 0; i < (2 * base)-2; i++)
        std::cout << "-"; 
    std::cout << '\'';


    /*
    V1

    for(int i=0;i<2*base;i++)
    std::cout << "_";
    std::cout << std::endl;
    for (int i = 0; i < atribute - 2; i++)
    {
        std::cout << "|";
        for (int j = 0; j < 2*base - 2; j++)
            std::cout << " ";
        std::cout << "|" << std::endl;
    }
    for (int i = 0; i < 2*base; i++)
        std::cout << "-";*/

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
    return 6.28*atribute;
}

std::iostream& operator<<(std::iostream& os,const GeometricFigure& jd)
{
    os << "JD";
    return os;
}

std::iostream& operator<<(std::iostream& os, const rectangle& jd)
{
    os << jd.base;
    return os;
}

std::iostream& operator<<(std::iostream& os, circle& jd)
{
    os << "JD disa";
    return os;
}


