#include <iostream>
#include "Header_DZ13.h"
#include "Header_DZ14.h"

using namespace DZ13;
using namespace DZ14;

int main()
{
    Developer d1("Vasya");
    Developer d2("Lyosha");
    Developer d3("Kolya");
    Designer ds1("Tanya");
    Designer ds2("Masha");
    Boss b1("Vadym Vadymovich");

    d1.print();
    d2.print();
    d3.print();
    ds1.print();
    ds2.print();
    b1.print();

    std::cout << std::endl << std::endl;


    Fruit* fruits[3] = 
    {
        new Apple(2, 50, 2),
        new Banana(3, 40, true),
        new Grape(1, 100)
    };

    for (int i = 0; i < 3; i++)     
        fruits[i]->print();
    

    for (int i = 0; i < 3; i++) 
        delete fruits[i];
    
}
//--------------------------------------------------------------------------------------------------
void Employee::print()
{
    std::string pos;

    switch (position)
    {
        case 1 :
        {
            pos = "Developer";
            break;
        }
        case 2:
        {
            pos = "Designer";
            break;
        }
        case 3:
        {
            pos = "Boss";
            break;
        }
        default :
        {
            pos = "Unknown position";
        }
    }
    std::cout << "Name: " << name << " salary = " << salary << " Position: " << pos << std::endl;
}
//--------------------------------------------------------------------------------------------------

std::string Apple::getColour() const
{
    std::string col;

    switch (colour)
    {
        case 1:
        {
            col = "Green";
            break;
        }
        case 2:
        {
            col = "Yellow";
            break;
        }
        case 3:
        {
            col = "Red";
            break;
        }
        default:
        {
            col = "Unknown colour";
        }
    }
    return col;
}

void Apple::print() const
{    
    std::cout << "Type: " << name << " Weight: " << weight << " Price: " << price << " Colour: " << getColour() << std::endl;
}

void Banana::print() const
{
    std::cout << "Type: " << name << " Weight: " << weight << " Price: " << price << " Is ripe: " << getRipe() << std::endl;
}

void Grape::print() const
{
    std::cout << "Type: " << name << " Weight: " << weight << " Price: " << price << std::endl;
}