#pragma once

inline int main()
{
    triangle a;
    std::cout << a.area();



    try {
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
            std::cout << "nieznany b³¹d";
    }


}