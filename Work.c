//
//  Work.c
//  Herramientas de Programacion Aplicada I
//
//  Created by Mario De Roux on 10/10/17.
//  Copyright © 2017 Mario De Roux. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "Workshop.h"

int main()
{
    char suc[4][15]={"Centro","Bugaba","Terronal","Mall Chiriqui"};
    char dpt[6][20]={"Damas","Caballeros","Ninos","Hogar","Tecnologia","Total por Dia"};
    char dia[7][25]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado", "Total Por Departamento"};
    float tab[4][6][7]={0}, ac=0;int e, s=0;
    srand((unsigned)time(NULL));
    stackTDep(tab);
    stackTDay(tab);
    while(true)
    {
        printf("%30s","ALMACEN\n");
        printf("%40s","REPORTE SEMANAL DE VENTAS \n\n");
        for(int x=0;x<=3;x++)
        {
            printf("%17i. Sucursal %s\n",x+1,suc[x]);
        }
        printf("%35s","5. Totales Finales\n");
        printf("%29s","6. Finalizar\n");
        scanf("%d",&e);
        switch(e)
        {
            case 1:
                s=1;
                printf("%30s","ALMACEN\n");
                printf("%28s %s %s","Sucursal:", suc[e], "\n");
                printf("%43s","REPORTE SEMANAL DE VENTAS \n\n");
                while (s==1)
                {
                    printf("\e[4mDepartamento\e[0m");
                    for (int esp=0;esp<=6;esp++)
                        printf("\e[4m%6s %8s\e[0m"," ", dia[esp]);
                    printf("\n");
                    for (int d=s-1;d==s-1;d++)
                    {
                        for (int f=0;f<=5;f++)
                        {
                            printf("%13s",dpt[f]);
                            for (int c=0;c<=6;c++)
                            {
                                printf("%15.2f", tab[d][f][c]);
                            }
                            printf("\n");
                        }
                        printf("\n");
                    }
                    s++;
                }
                MayMenSale(0, tab, dpt, dia);
                printf("Venta Total de la Sucursal: %s %.2f\n\n", suc[e-1], tab[e-1][5][6]);
                break;
            
            case 2:
                s=2;
                printf("%30s","ALMACEN\n");
                printf("%28s %s %s","Sucursal:", suc[e], "\n");
                printf("%43s","REPORTE SEMANAL DE VENTAS \n\n");
                while (s==2)
                {
                    printf("\e[4mDepartamento\e[0m");
                    for (int esp=0;esp<=6;esp++)
                        printf("\e[4m%6s %8s\e[0m"," ", dia[esp]);
                    printf("\n");
                    for (int d=s-1;d==s-1;d++)
                    {
                        for (int f=0;f<=5;f++)
                        {
                            printf("%13s",dpt[f]);
                            for (int c=0;c<=6;c++)
                            {
                                printf("%15.2f", tab[d][f][c]);
                            }
                            printf("\n");
                        }
                        printf("\n");
                    }
                    s++;
                }
                MayMenSale(1, tab, dpt, dia);
                printf("Venta Total de la Sucursal: %s %.2f\n\n", suc[e-1], tab[e-1][5][6]);
                break;
                
            case 3:
                s=3;
                printf("%30s","ALMACEN\n");
                printf("%28s %s %s","Sucursal:", suc[e], "\n");
                printf("%43s","REPORTE SEMANAL DE VENTAS \n\n");
                while (s==3)
                {
                    printf("\e[4mDepartamento\e[0m");
                    for (int esp=0;esp<=6;esp++)
                        printf("\e[4m%6s %8s\e[0m"," ", dia[esp]);
                    printf("\n");
                    for (int d=s-1;d==s-1;d++)
                    {
                        for (int f=0;f<=5;f++)
                        {
                            printf("%13s",dpt[f]);
                            for (int c=0;c<=6;c++)
                            {
                                printf("%15.2f", tab[d][f][c]);
                            }
                            printf("\n");
                        }
                        printf("\n");
                    }
                    s++;
                }
                MayMenSale(3, tab, dpt, dia);
                printf("Venta Total de la Sucursal: %s %.2f\n\n", suc[e-1], tab[e-1][5][6]);
                break;
                
            case 4:
                s=4;
                printf("%30s","ALMACEN\n");
                printf("%28s %s %s","Sucursal:", suc[e], "\n");
                printf("%43s","REPORTE SEMANAL DE VENTAS \n\n");
                while (s==4)
                {
                    printf("\e[4mDepartamento\e[0m");
                    for (int esp=0;esp<=6;esp++)
                        printf("\e[4m%6s %8s\e[0m"," ", dia[esp]);
                    printf("\n");
                    for (int d=s-1;d==s-1;d++)
                    {
                        for (int f=0;f<=5;f++)
                        {
                            printf("%13s",dpt[f]);
                            for (int c=0;c<=6;c++)
                            {
                                printf("%15.2f", tab[d][f][c]);
                            }
                            printf("\n");
                        }
                        printf("\n");
                    }
                    s++;
                }
                MayMenSale(4, tab, dpt, dia);
                printf("Venta Total de la Sucursal: %s %.2f\n\n", suc[e-1], tab[e-1][5][6]);
                break;
                
            case 5:
                printf("%30s","ALMACEN\n");
                printf("%43s","REPORTE SEMANAL DE VENTAS \n\n");
                for (int s=0;s<=3;s++)
                {
                    printf("Venta Total de la Sucursal: %s %.2f\n\n", suc[s], tab[s][5][6]);
                    ac=ac+tab[s][5][6];
                }
                printf("Venta Total del Almacen: %.2f\n",ac);
                MayMenSuc(tab, suc);
                ac=0;
                break;
                
            case 6:
                exit(0);
        }
    }
}
