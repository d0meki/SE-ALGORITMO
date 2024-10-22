
// Logica de ÐØmEki
void fwc(Cola R,BH,Meta){
    int l = BH.length();
    int n = R.length();
    int i = 1;
    while(true){
        Regla Re = R.pop();
        if(Re => c){
            BH.add(c);
            if(BH.contains(Meta))
                break;
        }else{
            R.add(Re);
        }
        if (i == n){// termina la pasada de la cola
            i = 1;
            n = R.length();
            if ( l == BH.length() )
                break;
            else	
                l = BH.length();
        }
        i++;
        if (R.vacia)
            break;
    }
    mostrarMeta();
}
// Logica del Aux
void fwc(Cola R,BH,Meta){
    int l = R.length();
    int cont = 1;
    while(true){
        Regla Re = R.pop();
        if(Re => c){
            BH.add(c);
            if(BH.contains(Meta))
                break;
        }else{
            R.add(Re);
        }
        //condicion de salida
        if (count == n){
            if (R.length() == l){
                break;
            }else{
                l = R.length();
                cont = 1;
            }
        }
        count++;
    }
    mostrarMeta();
}