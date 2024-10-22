
// Logica de ÐØmEki

void fwc(R[1..N],BH,Pila HN){
    desmarcarReglas();
    while(true){
        int l = BH.length();
        fwxPasada(R,BH,HN);
        if ( l == BH.length() && HN.vacia())
            break;
    }
}

void fwcPasada(R[1..N],BH,Pila HN){
    int sw = false;
    for i = 1 to N do {
        if ( !marcada(R[i])){
            if (R[i] => c){
                marcar(R[i]);
                BH.add(c);
            }else{ // no dispara != >
                if (!sw){
                    Var v = HN.pop();
                    Hecho H = preg("Valor",v);
                    if(H != null)
                        BH.add(H);
                    sw = true;
                }
            }
        }
    }
}
