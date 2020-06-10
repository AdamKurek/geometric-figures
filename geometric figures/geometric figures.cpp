// geometric figures.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include "stack.h"
#include <iostream>
#include"GeometricFigure.h"



std::iostream& operator<<(std::iostream& os, rectangle& jd)
{
    os << jd.base << jd.area();
    return os;
}




    int main()
    {
        rectangle a(3,4);
        std::cout << a.area();
        std::cout << a.circuit()<<a;

        try{
        Stack mystack;
        mystack.push(3);
        mystack.push(5);
        mystack.push(5);
        //   try {
        std::cout << mystack.pop() << std::endl;
        std::cout << mystack.pop() << std::endl;
        std::cout << mystack.pop() << std::endl;
        std::cout << mystack.pop() << std::endl;
        std::cout << mystack.pop() << std::endl;

        }
        catch (int g)
        {
            if (g == 3)
                std::cout << "twój stack jest pusty";
            else
                std::cout << "nieznany błąd";
        }
        

    }
