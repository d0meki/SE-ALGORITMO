
// Logica de ÐØmEki

void fwc(R[1..N],BH){
    desmarcarReglas();
    while(true){
        int l = BH.length();
        Regla Re = obtenerReglaNoMarcada();
        var v = Re.obtenerVariableDeLaPremisa();
        Hecho H = preg("Valor",v);
        if(H != null){
            BH.add(H);
        }
        marcarVariableDeLaPremisa(v);
        fwxPasada(R,BH);
        if ( l == BH.length())
            break;
    }
}

void fwcPasada(R[1..N],BH){
    for i = 1 to N do {
        Regla r = R[i];
        if (!marcada(r)){
            if (r => c){
                BH.add(c);
                marcar(r);
            }
        } 
    }
}