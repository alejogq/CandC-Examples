
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Define a type called cat that is an structure
typedef struct Cat{
    char name[20];
    int age;
} cat;
//Define a type called person that is an structure
typedef struct Person{
    char name[20];
    int age;
    cat cat;
} Person;//person1
//function prototype
void printinfo(Person person);
int main() {
    cat mycat;                      // we create a variable of type cat
    strcpy(mycat.name,"blurry");
    mycat.age=2;
    Person person1;                 //we create a variable of type Person
    strcpy(person1.name,"John");
    person1.age=12;
    person1.cat=mycat;
    printinfo(person1);
    //printf("person: %s, with age: %d, has a cat with name: %s that is %d years old\n\n ",person1.name, person1.age, person1.cat.name, person1.cat.age);
}

void printinfo(Person person){
    printf("person: %s, with age: %d, has a cat with name: %s that is %d years old\n\n ",person.name, person.age, person.cat.name, person.cat.age);
}
