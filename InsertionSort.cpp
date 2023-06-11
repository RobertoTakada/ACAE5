void CarregaLista(Dados L[MAX], int GeraDados){
    int Cont, cont2 = 0;
    
    if (GeraDados == 1){
        for(Cont=0;Cont<MAX;Cont++){
            L[Cont].Valor = rand()%100;
        }        
    }
    else {
        if(GeraDados == 2){
            for(Cont=0; Cont< MAX; Cont++){
                L[Cont].Valor = Cont;
            }
        }
        else{
            for(Cont = MAX; Cont > 0; Cont--){
                L[cont2].Valor = Cont;
                cont2++;
            }
        }
    }   
}

void Swap(Dados L[MAX], int PosA, int PosB){
    Dados Aux;
    
    Aux = L[PosA];
    L[PosA] = L[PosB];
    L[PosB] = Aux;    
}

void InsertionSort(Dados L[MAX]){
    int Cont1, Cont2, Min;
    
    for(Cont1=1;Cont1<MAX;Cont1++){
        Cont2 = Cont1; //Cont2 recebe o próximo item da lista que não está ordenado;
                
        //Então ele move o próximo item da lista que não está ordenado para a parte da lista que está ordenada
        
        while (Cont2 > 0 && L[Cont2].Valor < L[Cont2-1].Valor ) {        
            //Move o valor encontrado pra lista ordenada
            Swap(L, Cont2, Cont2-1);
            
            Cont2--;    
        }            
    }                
}

Dados Lista[MAX];
clock_t T;
int main () {
    setlocale (LC_ALL,"Portuguese");
    
    CarregaLista(Lista, 0); // Pior Caso
    T = clock();
    InsertionSort(Lista);
    T = clock() - T;
    
    cout << endl << endl << "Tempo de Ordenação para o Pior Caso: " << ((double) T)/((CLOCKS_PER_SEC/1000)) << " milisegundos.";
    
    CarregaLista(Lista, 1); // Caso Médio
    T = clock();
    InsertionSort(Lista);
    T = clock() - T;
    
    cout << endl << endl << "Tempo de Ordenação para o Caso Médio: " << ((double) T)/((CLOCKS_PER_SEC/1000)) << " milisegundos.";

    CarregaLista(Lista, 2); // Melhor Caso
    T = clock();
    InsertionSort(Lista);
    T = clock() - T;
    
    cout << endl << endl << "Tempo de Ordenação para o Melhor Caso: " << ((double) T)/((CLOCKS_PER_SEC/1000)) << " milisegundos.";

}



