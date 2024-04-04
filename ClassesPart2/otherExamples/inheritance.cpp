#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void draw(){
        cout<<"this is a shape"<<endl;
    }
};

class Circle: public Shape{
    public:
    void draw() override{
        cout<<"this is a Circle"<<endl;
    }
};

int main(){
    Shape myshape;
    myshape.draw();
    Circle mycircle;
    mycircle.draw();
}