#ifndef MYNAMESPACE_H
#define MYNAMESPACE_H

#include <string>

namespace MyNamespace{


    class Car{

    private:
        int Ndoor=5;

    public:
        std::string brand;
        std::string model="2";
        int year=1995;

        void doors();
        int doors2();

    };

}

#endif