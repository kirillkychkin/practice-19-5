// practice-19-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Animal
{
public:
    virtual void Voice()
    {
        std::cout << "Animal voice!" << "\n";
    }
};

class Dog : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Woof!" << "\n";
    }
};
int main()
{
    Animal* Zoo[2];
    Animal lion;
    Dog dog;
    Zoo[0] = &lion;
    Zoo[1] = &dog;
    Zoo[0]->Voice();
    Zoo[1]->Voice();
}
