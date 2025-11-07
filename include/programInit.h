#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <list>


#include "radialStandard.h"

#ifndef PROGRAMINIT_H

#define PROGRAMINIT_H


class programInit
{
    public:


        enum lensType
        {

        RADIALSTANDARD,
        FISHEYE,
        ANAMORPHIC,
        UNPICKED

        };

        programInit(){};

        ~programInit(){};

        programInit(int filmBackWidth, int filmBackHeight, float focalLength, float aspectRatio, dimentions distorted, dimentions undistorted, float cameraScale)
        {

            std::cout << "what do you need? "<< std::endl;
            std::cout << "avaialbe choices: "<< std::endl;

            std::list<std::string> lensChoices = {"RADIALSTANDARD", "FISHEYE", "ANAMORPHIC", "UNPICKED"};
            for (std::string lensChoice : lensChoices)
            {
                 std::cout << lensChoice << std::endl;
            }
            std::string temp;


            enum lensType currentLens = UNPICKED;
            std::cin>>temp; 
            currentLens = stringToEnum(temp);

            switch (currentLens)
            {
                case RADIALSTANDARD: 

                    std::cout << "you selected Radial Standard" << std::endl;

                    CL = new radialStandard();

                    CL->init(filmBackWidth, filmBackHeight, focalLength, aspectRatio, distorted, undistorted, cameraScale);

                    cameraScale = CL->calculateCameraScale(distorted, undistorted);

                    CL->printLensDetails(filmBackWidth, focalLength, aspectRatio, distorted, undistorted, cameraScale);

                break;

                default:

                std::cout << "no applicable lens selected, program exiting" << std::endl;

                break;
            }   
        }


        lensType stringToEnum(std::string temp)

        {
            if (temp == "RADIALSTANDARD") { return RADIALSTANDARD;} 
            
            else if (temp == "FISHEYE") { return FISHEYE; } 

            else if (temp == "ANAMORPHIC") { return ANAMORPHIC; }
            
            else  { return UNPICKED; }

        }

    private:

    radialStandard* CL;

    


};


#endif //PROGRAMINIT_H