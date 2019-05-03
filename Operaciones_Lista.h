
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

ListaNumeros *creaListaNumerosLlena(int tamMax,int limNumeros){
	ListaNumeros *ListaAux = creaListaNumerosVacia(tamMax);
	int cont=0;
	srand(time(NULL));
	while(cont<tamMax){
		int elem = rand()%(limNumeros+1);
		ListaAux->arregloDatos[cont] = elem;
		cont++;
       	ListaAux->contadorCantidad = cont;
	}


	return (ListaAux);
}

int eliminaListaNumeros(ListaNumeros *unaListaNumeros){
	free(unaListaNumeros->arregloDatos); //Elimina primero los datos que ingresamos
	free(unaListaNumeros);

	return 1; //Retornamos un entero para indicar que se elimino la lista completamente
}

/*METODO 1, BUSQUEDA SECUENCIAL*/
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

/*METODO 1, INGRESAR ELEMENTOS AL "FINAL"*/
void insertarElementos(ListaNumeros *unaLista,int limNumeros){
	int pos = 0;
	srand(time(NULL));
	while(pos<unaLista->tamMaximo){
		int elemento = rand()%limNumeros+1;
		unaLista->arreglo[pos] = elemento;
		pos++;
		unaLista->contador = pos;
	}
}

void ordenamientoInsercion(ListaNumeros *unaLista){
	int cont,pos,valorAux;
	for(cont=1; cont<unaLista->tamMaximo;cont++){
		valor_aux = unaLista->arregloDatos[pos];
		pos = cont-1;
		while(pos>=0 && unaLista->arregloDatos[pos]>valor_aux){
			unaLista->arregloDatos[pos+1] = unaLista->arregloDatos[pos];
			pos--;
		}
		unaLista->arregloDatos[pos+1] = valor_aux;
	}

}

int busquedaBinaria(ListaNumeros *unaLista,int elemBusqueda){
	int inicio=;
	int fin = unaLista->contadorCantidad;
	int medio;
	int encontrado = 0;
	while(encontrado == 0 && inicio<=fin){
		medio = (inicio+fin)/2;
		if(unaLista->arregloDatos[medio] == elemBusqueda){
			encontrado = 1;
			break;
		}else if(unaLista->arregloDatos[medio]<elemBusqueda){
			inicio = medio+1;
		}else{
			fin = medio-1;
		}
	}
	if(encontrado == 1){
		return 1;
	}else{
		return -1;
	}

}
	
	

