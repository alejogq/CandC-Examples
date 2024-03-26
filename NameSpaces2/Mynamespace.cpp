#include "Mynamespace.h"
#include <iostream>
using namespace std;


namespace MyNamespace{

    void Car::doors(){
        cout<<"doors: "<<Ndoor<<endl;

    }

    int Car::doors2(){
        return Ndoor;
    }


}