
// Logica de ÐØmEki
void fwc(R[1..N],BH,Lista HN){
    desmarcarReglas();
    desmarcarVariables();
    while(true){
        int l = BH.length();
        fwxPasada(R,BH,HN);
        if ( l == BH.length() )
            break;
    }
}

void fwcPasada(R[1..N],BH,Lista HN){
    for i = 1 to N do {
        if ( !marcada(R[i])){
            if (R[i] => c){
                marcar(R[i]);
                BH.add(c);
            }else{
                Var v = R[i].getVarPremisa();
                if ( HN.contains(v) && !marcada(v) ){
                    Hecho H = preg("Valor",v);
                    marcar(v);
                    if(H != null)
                        BH.add(H);
                }
            }
        }
    }
}

// Logica del Aux
void fwcPasada(R[1..N],BH,Lista HN){
    for i = 1 to N do {
        Regla r = Regla[i];
        if ( !marcada(r)){
            if (r => c){
                marcar(r);
                BH.add(c);
            }else{ // r !=>
                Var v = r.getVarPremisa();
                if ( HN.contains(v) ){
                    Hecho H = preg("Valor",v);
                    if(H != null)
                        BH.add(H);

                    HN.delete(v);
                }
            }
        }
    }
}