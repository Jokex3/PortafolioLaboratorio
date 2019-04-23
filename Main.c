//
// Main
//  Primer trabajo de laboratorio E.d.D
//  José Lafferte Angel
//
//  Creacion de una lista de enteros
//
//

#ifndef stdioH
#include <stdio.h>
#define stdioH
#endif

#ifndef stdlibH
#include <stdlib.h>
#define stdioH
#endif

#ifndef timeH
#include <time.h>
#define timeH
#endif

#ifndef listaH
#include "Operaciones_Lista.h"
#define listaH
#endif

void imprimir(ListaNumeros *unaLista){
	int i;
	for(i=0;i<unaLista->tamMaximo;i++){
		printf("[%i]->",unaLista->arregloDatos[i]);
	}
}


void main(){
	ListaNumeros *Laux;
	Laux = creaListaNumerosLlena(1000000,100000000);
	imprimir(Laux);
	buscaNumeroEnListaNumeros(Laux,11);

}
