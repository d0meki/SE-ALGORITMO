
// Logica de ÐØmEki

void fwc(R[1..N],BH,Meta){
    desmarcarReglas();
    while(true){
        int l = BH.length();
        fwxPasada(R,BH,Meta);
        if ( l == BH.length() || BH.contains(Meta))
            break;
    }
}

void fwcPasada(R[1..N],BH,Meta){
    for i = 1 to N do {
        Regla r = R[i];
        if (!marcada(r)){
            if (r => c){
                BH.add(c);
                marcar(r);
            }else{
                var v = r.obtenerVariableDeLaPremisa();
                if ( isHechoNativo(v) && !isMarcada(v)){
                    Hecho H = preg("Valor",v);
                    if(H != null)
                        BH.add(H);
                    marcarVariable(v);
                }
            }
        } 
    }
}