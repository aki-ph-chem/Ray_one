#include<iostream>

struct Person{

    Person(char* name,int age)
	:name(name),age(age)
    {}

   int age;
   char* name;
};

std::ostream& operator <<(std::ostream& out, Person d){

    return out << d.age << ' ' << d.name <<'\n';
}

int main(void){

    Person akari("Akari",15);
    std::cout << akari;

    Person yukari("Yukari",13);
    std::cout << yukari;


    return 0;
}
