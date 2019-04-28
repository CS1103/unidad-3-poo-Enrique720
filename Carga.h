#ifndef UNTITLED5_CARGA_H
#define UNTITLED5_CARGA_H
#include<cmath>
const float k = 8.99e+9;
class Carga {
    float posx;
    float posy;
    float q;
public:
    Carga(float x, float y, float carga);
    float Potencial(float x1, float y1);

};


#endif //UNTITLED5_CARGA_H
