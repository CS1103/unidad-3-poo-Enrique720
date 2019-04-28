
#include "Carga.h"
Carga::Carga(float x, float y, float carga): posx{x},posy{y},q{carga} {

}
float Carga::Potencial(float x1, float y1) {
    float r = sqrt( pow(x1-posx,2)+pow(y1-posy,2));
    return((k*q)/r);
}