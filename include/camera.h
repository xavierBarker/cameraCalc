#include <iostream>
#ifndef CAMERA_H
#define CAMERA_H



class camera 
{
    public:
    camera()
    {
        std::cout << "regualr camera class constructed" << std::endl;
    }

    ~camera()
    {
        std::cout << "regualr camera class destructed" << std::endl;
    }
};

#endif