#include <iostream>
#include <radialStandard.h>

int main() {

    int filmBackWidth;
    int filmBackHeight;
    double pixelAspectRatio;
    double focalLength;
    double cameraScale;



    std::cout << "program running" << std::endl;


    camera* radialCamera = new radialStandard();


    filmBackWidth = radialCamera->getResolution();
    focalLength = radialCamera->getFocalLength();


    std::cout << "filmBack width is set to: " << filmBackWidth << std::endl;
    std::cout << "focal length is set to: " << focalLength << std::endl;


    delete radialCamera;

}