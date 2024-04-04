#include<iostream>
using namespace std;

class Engine{
    public:
    string name="v12"; //default value

};

class Wheels{
    public:
    string brand="firestone"; //default

};

class Car{
    public:
        Engine engine;
        Wheels wheels[4];

    public:
    Car(){
    }   

    Car(Engine _engine, Wheels _wheels[]){
        engine = _engine;
        for(int i=0;i<4;i++){
            wheels[i]=_wheels[i];
        }
    }   

    virtual void print(){
        cout<<"Car elements: "<<endl 
            <<"Engine: "<< engine.name<<endl
            <<"Wheels: "<< wheels[0].brand<<endl;
    }

};

class Bus: public Car{

    public:
    void print() override{
        cout<<"BUS  elements: "<<endl 
            <<"Engine: "<< engine.name<<endl
            <<"Wheels: "<< wheels[0].brand<<endl;
    }
};


int main(){
    Engine v12;
    Wheels newwheel;
    newwheel.brand="ford-wheel";

    Wheels mywheels[4]={newwheel,newwheel,newwheel,newwheel};
    Car mycar;
    Car newcart(v12,mywheels);
    mycar.print();
    newcart.print();

    Bus mybus;
    mybus.print();

}