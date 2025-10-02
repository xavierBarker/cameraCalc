#include <iostream>
#include <radialStandard.h>

int main() {

    int filmBackWidth;
    int filmBackHeight;
    double aspectRatio;
    double pixelAspectRatio;
    double focalLength;
    double cameraScale;



    std::cout << "program running" << std::endl;


    radialStandard* radialCamera = new radialStandard();


    filmBackWidth = radialCamera->getResolution();
    focalLength = radialCamera->getFocalLength();
    aspectRatio = radialCamera->getAspectRatio();
    filmBackHeight = radialCamera->calculateFilmBackHeight(filmBackWidth, aspectRatio);

    std::cout << "filmBack width is set to: " << filmBackWidth << std::endl;
    std::cout << "filmBack height is set to: " << filmBackHeight << std::endl;
    std::cout << "focal length is set to: " << focalLength << std::endl;



    delete radialCamera;

}