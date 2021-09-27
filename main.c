// EXO 1
//#include <stdio.h>

/*int main (void) {
    int a = 0, b = 0;
    printf("saisissez un premier entier :\n");
    scanf("%d", &a);
    printf("saisissez un deuxième entier :\n");
    scanf("%d", &b);
    if (a > b) {
        printf("le plus grand est %d\n :", a);
    }
    else {
        printf("le plus grand est %d\n : ", b);
    }
    return (0);
}
 */
//EXO 2
//#include <stdio.h>
/*
int main(void) {
    int longeur = 0, largeur = 0;
    printf("saisissez la valeur de la longeur : \n");
    scanf ("%d", &longeur);
    printf ("saisissez la valeur de la largeur : \n");
    scanf ("%d", &largeur);
    int perim = (longeur + largeur)*2, aire = longeur * largeur;
    printf ("le périmetre du rectangle est : %d\n ", perim);
    printf ("l'aire du rectangle est : %d\n ", aire);
    return (0);
}
*/
//EXO 3
//#include <stdio.h>
/*
int main (void) {
    int n = 0;
    printf ("saisissez un entier  :");
    scanf ("%d", &n);
    if (n%3==0){
        printf("le nombre choisi est un multiple de 3\n");
    }
    else {
        printf ("le nombre n'est pas un multiple de 3\n");
    }
    if (n>=10){
        printf("le nombre est supérieur ou égale à 10\n");
    }
    else {
        printf("le nombre n'est pas supérieur à 10\n");
    }
    return (0);
}
*/
//EXO 4
//#include <stdio.h>
/*
int main (void){
    int age=0;
    int age_etudiant=0;
    printf("entrez votre age si vous êtes étudiant :");
    scanf("%d", &age_etudiant);
    printf("entrez votre age :");
    scanf("%d",&age);
    if (age<=12){
        printf ("tarif enfant : 4e");
    }
    else if ((age <= 17 && age >= 12) || age_etudiant <= 27){
        printf ("tarif jeune : 6e");
    }
    else if (age>65){
        printf ("tarif senior : 6e");
    }
    else{
        printf ("plein tarif : 9e");
    }
    return (0);
}
*/
//EXO 6
//#include <stdio.h>
/*int main(void){
    int n1=0, n2=0, n3=0;
    int moy=0;
    printf("saisire le premier nombre :");
    scanf("%d",&n1);
    printf("saisire le duxième nombre :");
    scanf("%d",&n2);
    printf("saisire le troisième nombre :");
    scanf("%d",&n3);
    moy = n1+n2+n3/3;
    if ((n1>=0 && n1<=20) && (n2>=0 && n2<=20) && (n3>=0 && n3<=20)){
        printf("la valeur moyenne est %d ", moy);
    }
    else {
        printf ("vérifiez que les notes soient comprises entre 0 et 20");
    }
    return (0);
}
*/
//EXO 7
/*#include <stdio.h>
int main (void){
    int n, k, E=0, S=0;
    printf("saisir le nombre de classe :");
    scanf ("%n", &n);
    for (k=1 ; k <= n ; k++) {
        printf("saisir le nombre d'élève dans la classe %d", k);
        scanf("%d", &E);
        S = S + E;
    }
    printf ("la nombre d'élève dans l'école est %d : ", S);
    return (0);

}
*/
//EXO 8
/*
#include <stdio.h>
int main(void){
    int n=0;
    printf("saisir un entier :");
    scanf("%d",&n);
    while( n % 2 != 0 || n % 7 != 0 ){
        printf("resaisisez un autre entier:");
        scanf ("%d",&n);
    }
    return(0);

}
*/
//EXO 9
/*#include <stdio.h>
int main(void){
    int n=0, s=0;
    printf ("saisir le nombre de pierres qui sont disponibles : ");
    scanf ("%d",&n);
    s =  (int) sqrt (n);
    printf("il sera possible de construire %d", s);
    return (0);

}
*/
//EXO 10
/*
#include <stdio.h>
int main (void) {
    float n = 0, s = 0, i = 0, moy = 0;
    do {
        printf("saisissez un nombre : ");
        scanf("%f", &n);
        s = s + n;
        i++;
    } while (n > 0);
    moy = s/i;
    printf ("la moyenne des nombres est %f : ", moy);

    return (0);
}
*/
















