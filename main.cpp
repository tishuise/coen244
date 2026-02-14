#include <iostream>
using namespace std;

class Animal {

    public:
        virtual void speak() { cout << "Animal makes a sound\n"; }
};

class Dog : public Animal {

    public:
        void speak() final override { cout << "Dog barks\n"; }
};

class Cat : public Animal {

    public:
        void speak() override { cout << "Cat meows\n"; }
};

class BabyDog : public Dog {

    public:
        // void speak() override { cout << "Idk";}           cannot override final since speak in Dog is final
};

class Walker : public Animal {};
class Swimmer : public Animal {};

class Amphibian : virtual public Walker, virtual public Swimmer {

    public:
        int age;
};
