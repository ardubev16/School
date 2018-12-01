typedef struct nc nc;
struct nc{
  double a;   //parte reale
  double b;   //parte immaginaria
  double m;   //modulo
  double f;   //fase
};

//char=0 a+ib --> m<f || char=1 m<f --> a+ib
void ConvZ(nc*, char);
//fa rientrare l'angolo in un range da -pi a +pi
nc angFIX(nc*, char);
//char=0 --> somma || char=1 --> differenza
nc SomDifZ(nc*, nc*, char);
//char=0 --> moltiplicazione || char=1 --> divisione
nc MolDivZ(nc*, nc*, char);
//potenza (char)esima di nc
nc PotZ(nc*, char);
//radice (char)esima di nc
void RadZ(nc*, char, nc[]);
//algoritmo di inserimento
void InsZ(nc*);

void VisZ(nc*, char);
