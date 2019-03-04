#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

//Put Goal Coordinates And Run The Code
double x = 7;
double y = 4;

//Length of links
double l1 = 10;
double l2 = l1;//Only works for robots with 2 link robots with identical lengths

void getInverseKinematics(){

    double R = sqrt(x*x + y*y);
    double r = R/2;
    double alpha = atan2(y,x);
    double beta = acos(r/l1);
    double theta1 = alpha - beta;
    double theta2 = beta*2;

    cout << "Theta 1 : " << theta1*180/3.1415 << endl;
    cout << "Theta 2 : " << theta2*180/3.1415 << endl;
}

int main()
{
    getInverseKinematics();
    return 0;
}
