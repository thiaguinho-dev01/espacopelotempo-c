#ifndef FUNCTION_ESPACOPELOTEMPO_C
#define FUNCTION_ESPACOPELOTEMPO_C

// S = v * t  (sem aceleracao)
double calcularEspaco(double velocidade, double tempo) {
    return velocidade * tempo;
}

// S = (v * t) + (a * t^2) / 2  (com aceleracao constante)
double calcularEspacoComAceleracao(double velocidade, double tempo, double aceleracao) {
    return (velocidade * tempo) + (aceleracao * tempo * tempo) / 2.0;
}

#endif
