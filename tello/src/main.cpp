#include "tello.hpp"
#include <iostream>
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"

int main()
{
    Tello tello;
    if (!tello.connect()) {
        return 0;
    }
    
    tello.takeoff();
    

    tello.land();

    return 0;
}