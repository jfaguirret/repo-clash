#include <iostream>
using namespace std;

class Iniciales{
   // iniciales = inicialnom, inicialape
   protected :	string inicialnom,inicialape;
                int telefono;

      Iniciales (){

   }

   Iniciales (string inicialnom,string inicialape){
         Inicial nombre = inicialnom;
         Inicial apellido = inicialape;
   }
   // crud = crear,leer,actualizar,borrar
   void crear ();
   void leer ();
   void actualizar ();
   void borrar ();

};
