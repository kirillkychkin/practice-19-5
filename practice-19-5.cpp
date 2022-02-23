// practice-19-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Animal
{
public:
    void Voice()
    {
        std::cout << "Animal voice!" << "\n";
    }
};
int main()
{
    Animal* Zoo[1];
    Animal lion;
    Zoo[0] = &lion;
    Zoo[0]->Voice();
}
