#include <stdio.h>

typedef struct {
    int mois;
    int jours;
    int heures;
    int minutes;
    int secondes;
} Conversion;

Conversion convertir_annee(int annee) {
    Conversion conv;
    conv.mois = annee * 12;
    conv.jours = annee * 365;
    conv.heures = conv.jours * 24;
    conv.minutes = conv.heures * 60;
    conv.secondes = conv.secondes * 60;
return conv;
}

int affichier_menu() {
  printf("/nChoisiser une option de conversion : \n")  
}