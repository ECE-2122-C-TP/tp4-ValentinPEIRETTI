//
// Created by 33685 on 29/09/2021.
//

#include "exercices.h"
#include"fonctions.h"
#include<stdio.h>

/*Exemple*/

/*void exercieExemple() { // procédure, cela ne renvoie rien
    int entierAAfficher = 0;
    printf("Veuillez entrer un entier:\n");
    scanf("%d",&entierAAfficher);
    entierAIncrementer = maFonctionIncrementale(entierAAfficher);
    printf("%d",entierAAfficher);
}*/
void exercice1(){
    int entier1 = 0,
        entier2 = 0;
    printf("Veuillez entrer deux entier:\n");
    scanf("%d %d",&entier1,&entier2);
    printf("Le maximum est %d.\n", getMax(entier1,entier2) );
    return;
}

void exercice2(){
    int entier = 0;
    saisirEntier(entier);
    return;
}

void exercice3(){
    int largeur = 0,
        longueur = 0;
    printf("Choix de la longueur : \n");
    largeur = saisirEntier();
    printf("Choix de la largeur :\n");
    longueur = saisirEntier();
    printf("L'aire du rectangle est %d.\n", calculAire(longueur,largeur) );
    printf("Le perimetre du rectangle est %d.\n",calculPerimetre(longueur,largeur) );
    return;
}

void exercice4(){
    int a = 0;
    const int b = 10,
              c = 3;
    printf("Veuillez rentrer un entier :\n");
    a = saisirEntier();
    printf("\n",multiple(a,c));
    if (a>10){
        printf("L'entier est superieur a 10.\n ");
    }
    else if (a==10){
        printf("L'entier est egal a 10.\n");
    }
    else if ( a<10){
        printf("L'entier est inferieur a 10.\n");
    }
    return;
}

void exercice5(){
     float entier1 =0,
           entier2=0,
           entier3=0;
    printf("Veuillez rentrer 3 notes :\n");
    scanf("%f %f %f",&entier1,&entier2,&entier3);
    printf("%f\n",moyenne(entier1,entier2,entier3));
    return;
}
void exercice7TP3(){
     int classe = 0,
         eleve =0;
    printf("Combien y'a t'il de classe ?\n");
    classe = saisirEntier();
    printf("Le nombre total d'eleve est ");
}

void exercice8TP3(){
     int entier1 =0;
     printf("Saisissez un entier:\n");
     entier1 = saisirEntier();
     multiplebis(entier1);
     return;
}

void exercice9TP3(){
    int pierresInitiales =0;
    printf("Combien avez vous de pierres ?\n"),
    pierresInitiales = saisirEntier();
    printf("Le nombre d'etages sera : %d",nombreEtages(pierresInitiales));
    return;
}