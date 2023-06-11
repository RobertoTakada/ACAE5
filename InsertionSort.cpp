void InsertionSort(Dados L[MAX]){
    int Cont1, Cont2, Min;
    
    for(Cont1=1;Cont1<MAX;Cont1++){
        Cont2 = Cont1; //Próximo item da lista não ordenada
        
        //Move o próximo item da lista não ordenada para
        //a posição correta na lista ordenada
        while (Cont2 > 0 && L[Cont2].Valor < L[Cont2-1].Valor ) {        
            //Move o valor encontrado pra lista ordenada
            Swap(L, Cont2, Cont2-1);
            
            Cont2--;    
        }            
    }                
}

void Swap(Dados L[MAX], int PosA, int PosB){
    Dados Aux;
    
    Aux = L[PosA];
    L[PosA] = L[PosB];
    L[PosB] = Aux;    
}
