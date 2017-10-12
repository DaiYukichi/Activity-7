//
//  Workshop.h
//  Herramientas de Programacion Aplicada I
//
//  Created by Mario De Roux on 10/11/17.
//  Copyright © 2017 Mario De Roux. All rights reserved.
//

#ifndef Workshop_h
#define Workshop_h

#include <stdlib.h>
#include <time.h>

void stackTDep (float tab[][6][7])
{
    srand((unsigned)time(NULL));
    int ac=0;
    for (int lls=0;lls<=3;lls++)
    {
        for (int lld=0;lld<=4;lld++)
        {
            for (int lldi=0;lldi<=6;lldi++)
            {
                tab[lls][lld][lldi]=rand() % 9999;
                if (lldi!=6)
                    ac=ac+tab[lls][lld][lldi];
                else
                    tab[lls][lld][lldi]=ac;
            }
            ac=0;
        }
    }
}

void stackTDay (float tab[][6][7])
{
    int ac=0;
    for (int lls=0;lls<=3;lls++)
    {
        for (int lldi=0;lldi<=6;lldi++)
        {
            for (int lld=0;lld<=5;lld++)
            {
                if (lld!=5)
                    ac=ac+tab[lls][lld][lldi];
                else
                    tab[lls][lld][lldi]=ac;
            }
            ac=0;
        }
    }
}

void MayMenSale (int e ,float tab[][6][7],char dpt[][20],char dia[][25])
{
    int dmay=0, dmen=0, dpmay=0, dpmen=0, stpmen=0; float may=0, men=0;
    for (int lls=e;lls==e;lls++)
    {
        for (int lld=0;lld<=4;lld++)
        {
            for (int lldi=0;lldi<=5;lldi++)
            {
                if (stpmen==0)
                {
                    men=tab[lls][lld][lldi];
                    stpmen++;
                }
                if (tab[lls][lld][lldi]>may)
                {
                    may=tab[lls][lld][lldi];
                    dmay=lldi;
                    dpmay=lld;
                }
                if (tab[lls][lld][lldi]<men)
                {
                    men=tab[lls][lld][lldi];
                    dmen=lldi;
                    dpmen=lld;
                }
            }
        }
    }
    printf("Dia de Mayor Venta: %s\n", dia[dmay]);
    printf("Departamento de Mayor Venta %s\n\n", dpt[dpmay]);
    printf("Dia de Menor Venta %s\n", dia[dmen]);
    printf("Departamento de Menor Venta %s\n\n",dpt[dpmen]);
}

void MayMenSuc(float tab[][6][7], char suc[][15])
{
    int may=0, men=0, smay=0, smen=0;int stpmen=0;
    for (int lls=0;lls<=3;lls++)
    {
        for (int lld=5;lld==5;lld++)
        {
            for (int lldi=6;lldi==6;lldi++)
            {
                if (stpmen==0)
                {
                    men=tab[lls][lld][lldi];
                    stpmen++;
                }
                if (tab[lls][lld][lldi]>may)
                {
                    may=tab[lls][lld][lldi];
                    smay=lls;
                }
                if (tab[lls][lld][lldi]<men)
                {
                    men=tab[lls][lld][lldi];
                    smen=lls;
                }
            }
        }
    }
    printf("Sucursal de Mayor Venta: %s\n",suc[smay]);
    printf("Sucursal de Menor Venta: %s\n\n",suc[smen]);
}


#endif /* Workshop_h */
