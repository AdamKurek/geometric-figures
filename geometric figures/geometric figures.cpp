// geometric figures.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include "stack.h"
#include <iostream>
#include"GeometricFigure.h"
#include <string>


GeometricFigure* newFigure() 
{
    int jaką;
    double a, b;
    std::cout << "jaką chcesz figure(1 = trójkąt 2=prostokąt 3=elipsa)";
    std::cin >> jaką;
    std::cout << "o jakiej podstawie";
    std::cin >> a;
    std::cout << "o jakiej wysokośći";
    std::cin >> b;
    switch (jaką)
    {
    case 1:
         return new triangle(a, b);
    case 2:
        return  new rectangle (a, b);
    case 3:
        return new ellipse (a, b);

       
    }
}


void workOn(GeometricFigure* a)
{
    std::cout << "jaką operacje chcesz zrobić? (1 podaj podstawe, 2 podaj wysokość, 3 podaj obwód, 4 podaj pole, 5 narysuj)" << std::endl;
    int operacja;
    std::cin >> operacja;
    switch ( operacja)
    {
     case 1:
         std::cout << a->getBase();
         break;
     case 2:
         std::cout << a->getAtribute();
         break; 
     case 3:
         std::cout << a->circuit();
         break;
     case 4:
         std::cout << a->area();
         break;
     case 5:
         a->draw();
         break;
    }
}


int main()
{

    bool u = true;
    while (u)
    {
        Stack<GeometricFigure*> mystack;
        int instrukcja;
        std::cout << "1=dodaj na stack" << std::endl << "2 wyjmij ze stacka i operuj na nim " << std::endl 
        << "3 operuj na ostatnim  " << std::endl << "4 usuń wierzchnie elementy" << std::endl << "5 wyczyść stack" << std::endl<<"6 zakończ" << std::endl;
        std::cin >> instrukcja;
        try {
            switch (instrukcja)
            {
            case 1:
                mystack.push(newFigure());
                break;
            case 2:
                workOn(mystack.pop());
                break;
            case 3:
                workOn(mystack.last());
                break;
            case 4:
                std::cout << "ile elementów chcesz usunąć?";
                int a;
                std::cin >> a;
                mystack.deletelast(a);
                break;
            case 5:
                mystack.clear();
                break;
            case 6:
                u = false;
                break;
            }
        }
        catch(int exception)
         {
            if (exception == 3)
            {
                std::cout << "nie możesz tego zrobić na pustym stacku"<<std::endl;
            }
            else
                std::cout << "jakiś dziwak błąd";
          }

    }

    //GeometricFigure* b = mystack.pop();
   // std::cout << *b;
}








      //  triangle a(10, 20);
      //  rectangle b(3, 3);
       // ellipse c(10, 10);
      //  b.draw();
       
      //  try
        //    ellipse a(10, 13);
    //   Stack<GeometricFigure*> mystack;
     //  mystack.push(&a);
      // GeometricFigure* b=mystack.pop();
       //std::cout << *b;
        //    std::cout << a;
        /*catch (int g)
       {
            if (g == 3)
               std::cout << "twój stack jest pusty";
           else
                std::cout << "nieznany błąd";
       }*/
        

        
