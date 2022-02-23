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

class Cat : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Meeooow!" << "\n";
    }
};

class Lion : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Rrrooooar!" << "\n";
    }
};
int main()
{
    const int N = 3;
    Animal* Zoo[N];
    Dog dog;
    Cat cat;
    Lion lion;

    Zoo[0] = &lion;
    Zoo[1] = &dog;
    Zoo[2] = &cat;

    for (int i = 0; i < N; ++i)
    {
        Zoo[i]->Voice();
    }
}
