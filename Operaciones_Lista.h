
typedef struct nodo{

	int tamMaximo;
	int contadorCantidad;
	int *arregloDatos;

}ListaNumeros;


ListaNumeros *creaListaNumerosVacia(int tamMax){
	ListaNumeros *ListaAux = malloc(sizeof (struct nodo));
	ListaAux->tamMaximo = tamMax;
	ListaAux->contadorCantidad = 0;
	ListaAux->arregloDatos = malloc(sizeof(int)*tamMax);


	return (ListaAux);
}

int ultimoPosicion(ListaNumeros *unaLista){
	int pos=0;
	while(pos <= unaLista->contadorCantidad){
		
	
	}


}


ListaNumeros *creaListaNumerosLlena(int tamMax,int limNumeros){
	ListaNumeros *ListaAux = creaListaNumerosVacia(tamMax);
	int cont=0;
	srand(time(NULL));
	while(cont<tamMax){
		int elem = rand()%(limNumeros+1);
		ListaAux->arregloDatos[cont] = elem;
		cont++;
		//insertarAlFinal(ListaAux,elem);
       	ListaAux->contadorCantidad = cont;
	}


	return (ListaAux);
}

int eliminaListaNumeros(ListaNumeros *unaListaNumeros){
	free(unaListaNumeros->arregloDatos); //Elimina primero los datos que ingresamos
	free(unaListaNumeros);

	return 1; //Retornamos un entero para indicar que se elimino la lista completamente
}

int buscaNumeroEnListaNumeros(ListaNumeros *unaListaNumeros,int unNumero){
	int cont;int indice = -1;
	for(cont = 0;cont < unaListaNumeros->tamMaximo;cont++){
		if(unaListaNumeros->arregloDatos[cont] == unNumero){
			indice = cont;
			break;
		}
	}

	return indice;
}


