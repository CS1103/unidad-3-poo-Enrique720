
#include "Simulador.h"
Simulador::Simulador():h{10},w{10} {
    srand(time(NULL));
    auto**  a = new Carga*[5];
    a[0]= new Carga(3,1,5e-6);
    a[1]= new Carga(6,6,5e-6);
    a[2]= new Carga(2,3,5e-6);
    a[3]= new Carga(1,8,5e-6);
    a[4]= new Carga(7,6,5e-6);
    int ejex[5]={2,4,6,8,10};
    int ejey[5]={1,3,5,7,9};
    for(int i  = 0; i < 5 ;i++) {
        float suma = 0;
        for(int j= 0;j<5; j++){
            suma= a[j]->Potencial(ejex[i],ejey[i]) + suma;
        }
        std::cout << ejex[i] << " " << ejey[i] << " " << suma <<std::endl;
    }
};