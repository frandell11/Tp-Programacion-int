#include <iostream>
#include <CTime>

using namespace std;

int tirada();
int sexteto(int vecDado[]);

int main(){
srand(time(0));

//variables de tirada//
int dado[6];int time; int x; int y; int puntajeJuego = 0;

//variables de usuarios//
string nombre;
int edad;

//Variable de contador de rondas y tiradas//
 int conrondas = 0;

//--------------------------------------------------------------------//

//Solicitud de datos del usuario//
cout << "Ingrese su edad ";
cin >> edad;

cout << "Ingrese su nombre ";
cin.ignore();
getline(cin, nombre);

cout << "Nombre: " << nombre << " tiene " << edad << " anos de edad " << endl;


//system("pause");
//system("cls");

cout << "Bienvenido " << nombre << endl;
cout << endl;

system("pause");
system("cls");

//--------------------------------------------------------------------//

while(puntajeJuego < 100){

//variables de tirada//
int tiradaA = 0; int tiradaB = 0; int tiradaC = 0; int puntajeRonda = 0;

//-------------------------------------------------------------------/

//numero de rondas//
conrondas++;
cout << "Ronda Nº: " << conrondas << endl;
cout << endl;

cout << "Tirada Nº 1 " << endl;
cout << endl;

//tirada 1//
for(x=0; x<6; x++){
    dado[x] = tirada();
}

//mostrar tirada 1//
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaA += dado[y];
}




/////////////////////////////////////////Sexteto A /////////////////////////////////
int numeroSexteto;

numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego = 0;
}
else if(numeroSexteto > 0)
{
    tiradaA = numeroSexteto * 10;
}

cout << endl;
cout << "Obtuvo: " << tiradaA << " puntos." << endl;

system("pause");

//////////////////////////////////////////////////////////////////////////////////

cout << "Tirada Nº 2 " << endl;
cout << endl;

//tirada 2//
for(x=0; x<6; x++){
    dado[x] = tirada();
}

//mostrar tirada 2//
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaB += dado[y];
}


/////////////////////////////////////////Sexteto B /////////////////////////////////
numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego = 0;
}
else if(numeroSexteto > 0)
{
    tiradaB = numeroSexteto * 10;
}

cout << endl;
cout << "Obtuvo: " << tiradaB << " puntos." << endl;

system("pause");

//////////////////////////////////////////////////////////////////////////////////

cout << "Tirada Nº 3 " << endl;
cout << endl;

//tirada 3//
for(x=0; x<6; x++){
    dado[x] = tirada();
}

//mostrar tirada 3//
for(y=0; y<6; y++){
    cout << dado[y] << endl;
    tiradaC += dado[y];
}


/////////////////////////////////////////Sexteto C /////////////////////////////////
numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego = 0;
}
else if(numeroSexteto > 0)
{
    tiradaC = numeroSexteto * 10;
}

cout << endl;
cout << "Obtuvo: " << tiradaC << " puntos." << endl;

//////////////////////////////////////////////////////////////////////////////////


cout << endl;

//Puntaje de la ronda//
if(tiradaA > tiradaB && tiradaA > tiradaC){
    puntajeRonda = tiradaA;
}
else if(tiradaB > tiradaA && tiradaB > tiradaC){
    puntajeRonda = tiradaB;
}
else {
    puntajeRonda = tiradaC;
}
cout << "El puntaje maximo de la ronda " << conrondas << " es: "  << puntajeRonda << "." << endl;

//---------------------------------------------------------------------//

cout << endl;
system("pause");
system("cls");

//--------------------------------------------------------------------/

//Suma a puntaje de Juego//
puntajeJuego += puntajeRonda;
cout << "Puntaje total de juego: " << puntajeJuego << "." << endl;

}
return 0;
}

int tirada(){
    return rand ()% 6+1;
};

int sexteto(int vecDado[])
{
    int x;
    int cont = 0;
    int numero = vecDado[0];
    for(x = 0; x < 6; x++)
    {
        if(numero == vecDado[x])
        {
            cont++;
        }
    }
    if(cont == 6)
    {
        return numero;
    }
    else
    {
        return 0;
    }
}
