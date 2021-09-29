//
// Created by 33685 on 29/09/2021.
//

#include "fonctions.h"
#include <stdio.h>
int maFonctionIncrementale(int entierAIncremente){
   return entierAIncremente+1;
}
int getMax(int entier1,int entier2){
    int max = ( entier1>entier2 ) ? entier1 : entier2;
    return max;
}

int saisirEntier(){
     int entier = 0;
     scanf("%d",&entier);
     return entier;
}
int calculPerimetre(int longueur,int largeur){
    int perimetre;
    perimetre = longueur + largeur;
    return perimetre;
}

int calculAire( int longueur,int largeur){
    int aire;
    aire = longueur * largeur;
    return aire;
}
int multiple( int entier1, int entier2){
    int x = (entier1 % entier2 ==0)?1:0;
    printf("%d",x);
    return x;
}
float moyenne(float entier1,float entier2,float entier3){
    float moyenne = 0;
    if (0 <=entier1 && entier1 <=20 && 0 <= entier2 && entier2 <= 20 && 0 <=entier3 && entier3 <=20){
        moyenne=((entier1+entier2+entier3)/3);
    }
    else{
        moyenne = -1;
    }
    return moyenne;
}

void multiplebis(int entier1){
    while( !(entier1 % 2 == 0 && entier1 % 7 == 0) ){
        printf("Veuillez saisir un nouvel entier :\n");
        entier1 = saisirEntier();
    }
}

int nombreEtages (int pierresInitiales){
    int somme =0,
        etage =0;
    while(pierresInitiales>=somme){
        etage=etage+1;
        somme=(etage*(etage+1)*(2*etage+1))/6;
    }
    etage=etage-1;
    return etage;
}



