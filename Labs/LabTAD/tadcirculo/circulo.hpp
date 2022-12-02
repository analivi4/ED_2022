#include <iostream>
#include <math.h>

using namespace std;

struct ponto
{
    double x, y;
};


class circulo{
    ponto centro;
    double raio;


    public:

    circulo(double raio, ponto& centro);

    void setRadius(double r);
    void setCenterX(double x);
    void setCenterY(double y);
    void setCenter(ponto& p);
    double getRadius();
    ponto getCenter();
    double area();
    bool interior(ponto& p);

};