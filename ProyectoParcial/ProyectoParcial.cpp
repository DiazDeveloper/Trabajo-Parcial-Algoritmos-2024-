#include "pch.h"
#include "EscenarioSpawn.h"
#include "PersonajePrincipal.h"
#include "Pantallas.h"

using namespace std;
using namespace System;

int main()
{
    
    PersonajePrincipal* personaje = new PersonajePrincipal;
    EscenarioSpawn* Escenario = new EscenarioSpawn;
    Pantallas* pantalla = new Pantallas;

    Escenario->IniciarSpawn(); 
    personaje->InicializarPersonaje(); //TERMINO XQ YA GANO 2 MINIMO
    pantalla->DibujarPantallaGano();

}
