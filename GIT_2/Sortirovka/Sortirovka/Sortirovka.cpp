///\file "Sortirovka.cpp"

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
 
void bubbleSort(int a[], int size)  /// \fn 
{
   int i, j;						/// \var i, j - peremennaya dlya cikla
    int x;							/// \var x - peremennaya dlya sortirovki i zameny
    for(i=0;i<size;i++)
    {            /// i - nomer prohoda
        for(j=size-1;j>i;j--)
        {     /// vnutrennii cikl prohoda
            if(a[j-1]>a[j])		///srravnivaem peremennie
            {
                x=a[j-1];
                a[j-1]=a[j];  ///menyaem mestami elements massiva
                a[j]=x;
            }
        }
    }
}
 
void main()
{
    srand(time(NULL));
    const long SIZE=10;  /// razmer massiva
    int ar[SIZE];
    
    /// massiv do sortiorvki
    for(int i=0;i<SIZE;i++)
    {
        ar[i]=rand()%100;   ///sluchainie chisla
        cout<<ar[i]<<"\t";  ///pechat' chisel
    }
    cout<<"\n\n";
    bubbleSort(ar,SIZE);    ///funkcia sortirovki
 
    /// massiv posle sortirovki
    for(int i=0;i<SIZE;i++)
    {
        cout<<ar[i]<<"\t";  ///pechat' otsortirovannogo massiva
    }
    cout<<"\n\n";
}