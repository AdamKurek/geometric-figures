// geometric figures.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include "stack.h"
#include <iostream>
#include"GeometricFigure.h"







    int main()
    {
     
       
        try
        {
        Stack<ellipse> mystack;
        mystack.push(ellipse(11,15));
      // mystack.push(rectangle(20,7));
       // mystack.push(ellipse(14,19));
        ellipse   a= mystack.pop();
        a.draw();
         }
        catch (int g)
        {
            if (g == 3)
                std::cout << "twój stack jest pusty";
            else
                std::cout << "nieznany błąd";
        }
        

    }
