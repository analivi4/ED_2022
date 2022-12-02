#include "circulo.hpp"

    circulo::circulo(double raio, ponto& centro){
        this->raio=raio;
        this->centro=centro;
    }

    void circulo::setRadius(double r){
        this->raio=r;
    }
    void circulo::setCenterX(double x){
        this->centro.x=x;
    }
    void circulo::setCenterY(double y){
        this->centro.y=y;
    }
    void circulo::setCenter(ponto& p){
        this->centro=p;
    }
    double circulo::getRadius(){
        return this->raio;
    }
    ponto circulo::getCenter(){
        return this->centro;
    }
    double circulo::area(){
        double pi=3.14;
        return pi*this->raio*this->raio;
    }
    bool circulo::interior(ponto& p){
        double dist;
        dist = sqrt(pow(p.x-this->centro.x, 2) + pow(p.y-this->centro.y, 2));
        return (dist<=this->raio);
            
    }
