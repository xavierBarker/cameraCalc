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



    virtual int getResolution()
    {

        std::cout << "you ran the defalt get resolution function" << std::endl;

        return 0;
    }

    virtual int getFocalLength()
    {
            std::cout << "you ran the defalt get focal length function" << std::endl;

        return 0;
    }


    virtual int calculateFilmBackHeight()
    {
        std::cout << "you ran the defalt calculate film back height function" << std::endl;

        return 0;
    }
};

#endif