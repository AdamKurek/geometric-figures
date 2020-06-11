// geometric figures.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include "stack.h"
#include <iostream>
#include"GeometricFigure.h"







    int main()
    {
        ellipse e(5,10);
       // std::cout << a.area();
        e.draw();
           std::cout << std::endl;
     //  e.draw();
       
        /*try
        {
        Stack<int> mystack;
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
        }*/
        

    }
