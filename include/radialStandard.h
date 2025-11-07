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


    void init(int filmBackWidth, int filmBackHeight, double focalLength, double aspectRatio, dimentions distorted, dimentions undistorted, double cameraScale)
    {
                distorted = setDistResolution();
                undistorted = setUndistResolution();

                filmBackWidth = getFilmbackWidth();

                focalLength = getFocalLength();
                //aspectRatio = getAspectRatio();
                aspectRatio = distorted.x / distorted.y;
                filmBackHeight = calculateFilmBackHeight(filmBackWidth, aspectRatio);


 
                
    }


        int getFilmbackWidth()
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

        dimentions setDistResolution()
        {
            dimentions distorted = {0,0};
            std::cout << "what is your base width" << std::endl;
            std::cin >> distorted.x;

            std::cout << "what is your base height" << std::endl;
            std::cin >> distorted.y;

            return distorted;
        }


        dimentions setUndistResolution()
        {

            dimentions undistorted = {0,0};
            std::cout << "what is your undistorted width" << std::endl;
            std::cin >> undistorted.x;

            std::cout << "what is your undistorted height" << std::endl;
            std::cin >> undistorted.y;

            return undistorted;
        }

        double calculateCameraScale(dimentions distorted, dimentions undistorted)
        {
            double cameraScale = distorted.x / undistorted.x;
            return cameraScale;
        }


        void printLensDetails(int filmBackWidth, double focalLength, double aspectRatio, dimentions distorted, dimentions undistorted, double cameraScale)
        {
            std::cout << "camera scale is : " << cameraScale << std::endl;

            std::cout << "undistorted size is : " << undistorted.x << " by " << undistorted.y << std::endl;

            std::cout << "base size is : " << distorted.x << " by " << distorted.y << std::endl;

            std::cout << "focal length is : " << focalLength << std::endl;

            std::cout << "aspect ratio is : " << aspectRatio << std::endl;
        }

    };





#endif