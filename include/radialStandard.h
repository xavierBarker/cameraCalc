#include <iostream>
#include "camera.h"
#include "lens.h"
#include "resolution.h"
#ifndef RADIALSTANDARD_H
#define RADIALSTANDARD_H



class radialStandard : public camera, public lens
{
    public:
    radialStandard()
    {
        std::cout << "radialStandard camera lens class constructed" << std::endl;
    }

    ~radialStandard()
    {
        std::cout << "radialStandard camera lens class destructed" << std::endl;
    }


    void init(int filmBackWidth, int filmBackHeight, float focalLength, float aspectRatio, dimentions distorted, dimentions undistorted)
    {
                filmBackWidth = getResolution(distorted);
                focalLength = getFocalLength();
                aspectRatio = getAspectRatio();
                filmBackHeight = calculateFilmBackHeight(filmBackWidth, aspectRatio);
                
    }


        int getResolution(dimentions distorted)
    {
        int width;
        std::cout << "what is your filmback width" << std::endl;
        std::cin >> width;

        return width;
    }

        double getAspectRatio()
    {
        double aspectRatio;
        std::cout << "what is your aspect ratio" << std::endl;
        std::cin >> aspectRatio;

        return aspectRatio;
    }

        int getFocalLength() override
    {
        int focalLength;
        std::cout << "what is your focal length" << std::endl;
        std::cin >> focalLength;

        return focalLength;
    }

        int calculateFilmBackHeight(int filmBackWidth,  double aspectRatio, double pixelAspectRatio = 1)
        {

            int filmBackHeight = static_cast<int>(filmBackWidth * (1/aspectRatio) * pixelAspectRatio);
            return filmBackHeight;
        }



    
};

#endif