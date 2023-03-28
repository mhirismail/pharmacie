#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

/********* les structures ********************/
//**** date *************//
typedef struct
{
    int j;
    int m;
    int ann;
}date;
//**** lot *****************//
typedef struct
{
    char lot[10];
    date date_fab;
    date date_preemp;
}loot;
//****** fournisseur ******//
typedef struct
{
    char nom[20];
    char adresse[50];
    int tel ;
}fournisseur;

//****** medicament ******//
typedef struct
{
    int num ;
    char nom[20];
    char lab [10];
    loot lot;
    int prix ;
    int quant_stock ;
    fournisseur four[3];
    int sect_stock;
}medic;
/**********************************************************/
medic*t=(medic*)malloc(100*sizeof(medic));
int n;
/****************** les outilles ***********************************/
// fichier --> tableau
void fich_tab ()
{
    FILE *f;
    f=fopen("medicament.bin","br");
    medic m;
    i=0;
    if (f==NULL)
    {
        printf("erreur");
        exit(-1);
    }
    else
    {
        do
        {
            fread(&m,sizeof(medic),1,f)
            t[i]= m ;
            i=i+1;
        }while(fread(&m,sizeof(medic),1,f));
        n=i;
    }
    fclose(f);
}
// tableau --> fichier
void tab_fich ()
{
    FILE *f;
    f=fopen("medicament.bin","br");
    medic m;
    i=0;
    if (f==NULL)
    {
        printf("erreur");
        exit(-1);
    }
    else
    {
        do
        {
            fread(&m,sizeof(medic),1,f)
            t[i]= m ;
            i=i+1;
        }while(fread(&m,sizeof(medic),1,f));
        n=i;
    }
    fclose(f);
}
