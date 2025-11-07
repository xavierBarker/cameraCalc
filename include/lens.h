#include <iostream>
#ifndef LENS_H
#define LENS_H

class lens
{
    public:
    lens(){};


    virtual int getFocalLength()
    {
            std::cout << "you ran the defalt get focal length function" << std::endl;

        return 0;
    }

};




#endif // LENS_H