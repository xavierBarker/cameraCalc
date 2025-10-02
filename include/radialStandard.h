#include <iostream>
#include <camera.h>
#ifndef RADIALSTANDARD_H
#define RADIALSTANDARD_H



class radialStandard : public camera 
{
    public:
    radialStandard()
    {
        std::cout << "regualr camera class constructed" << std::endl;
    }

    ~radialStandard()
    {
        std::cout << "regualr camera class destructed" << std::endl;
    }



        int getResolution()
    {
        int width;
        std::cout << "what is your filmback width" << std::endl;
        std::cin >> width;

        return width;
    }

        virtual int getFocalLength()
    {
        int focalLength;
        std::cout << "what is your filmback width" << std::endl;
        std::cin >> focalLength;

        return focalLength;
    }
};

#endif