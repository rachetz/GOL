#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct list list;

struct list
{
    int l,c;
    list* next;
};
typedef struct stiva stiva;
struct stiva
{
    list* Lista;
    stiva* next;
};

void pushL(stiva **top, list *elemL);
list* copiazaLista(list* original);
void afisareS(stiva **topS, FILE* mOUT, int q);
list* popL(stiva** top);
void addAtBeginning (list ** head , int l, int c );
int pop(list **top, int *a, int *b);
void citire(FILE *fisier, char **ma, int n, int m);
void afisare(char **ma, int n, int m, FILE* fisier);
void FOP(FILE **fisier, const char *nume, const char var[3]);
int verificareVec(FILE *fisier, char **ma, int i, int j, int n, int m);
void reguli(FILE *fisier, char **ma, int n, int m, int k, FILE *mOUT, int p, stiva** topS, int *q);
void task2(FILE *fisier, char **ma, int n, int m, int k, FILE *mOUT, int p, stiva** topS, int *q);
void eliberareStivaComplet(stiva *top);