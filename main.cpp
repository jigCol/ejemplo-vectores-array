#include <iostream>

using namespace std;

//7. Una empresa comercializa 15 tipos de artículos y por cada venta realizada
//genera un registro con los siguientes datos:

//• Número de artículo (1 a 15).
//• Cantidad vendida.

//Puede haber varios registros para el mismo artículo y el último se indica
//número de artículo igual a cero.
//Se pide determinar e informar:

//a. El número de artículo que más se vendió en total.
//b. Los números de artículos que no registraron ventas.
//c. La cantidad de unidades vendidas para el artículo número 10.

//Nota: tener en cuenta el concepto de “registro” y el planteo de estructura
//principal separado de consignas (ver videos de ciclos combinados y ejercicios
//resueltos de ciclos combinados).

int main()
{int varticulos[15],canVen,nArt;

for(int x=0;x<15;x++){
    varticulos[x]=0;
}

cout<<"Ingrese el numero de articulo #1 "<<endl;
cin>>nArt;
cout<<"Ingrese la cantidad vendida de ese articulo: "<<endl;
cin>>canVen;
int numero=2;
while(nArt!=0){

    varticulos[nArt-1]+=canVen;
    cout<<"Ingrese el numero de articulo #"<<numero<<":"<<endl;
    cin>>nArt;
    cout<<"Ingrese la cantidad vendida de ese articulo: "<<endl;
    cin>>canVen;
    numero++;
}
int maxi=varticulos[0],maxpos=1,cvendida10;
for(int x=0;x<15;x++){
    if(varticulos[x]>maxi){maxi=varticulos[x],maxpos=x+1;}
    if(varticulos[x]==0){cout<<endl<<"El numero de articulo "<<(x+1)<<" no registro ventas."<<endl;}

    if(x==9){cvendida10=varticulos[x];}

}

cout<<endl<<"El numero de articulos mas vendido es el "<<maxpos<<endl;
cout<<endl<<"La cantidad vendida para el articulo 10 es de "<<cvendida10<<"."<<endl;

    return 0;
}
