//
// Created by ivhy on 29/03/20.
//

#ifndef CS2100_SORTING_IVHYARLETH_QUICKSORT_H
#define CS2100_SORTING_IVHYARLETH_QUICKSORT_H

#include <iostream>
#include <vector>
#include "Sort.h"
using namespace std;

class Quicksort: public Sort{
public:
    Quicksort(vector<int> vec_): Sort{vec_} { }

    int partition(int inicio, int final){
        int x = vec[final];
        int i = inicio - 1;
        for(int j = inicio; j < final; j++){
            if(vec[j] < x){
                i++;
                swap(vec[i], vec[j]);
            }
        }
        swap(vec[i+1], vec[final]);
        return i+1;
    };

    void ordenarQuicksor(int inicio, int final){

        if(inicio < final){
            int p = partition(inicio,final);
            ordenarQuicksor(inicio, p-1);
            ordenarQuicksor(p+1,final);
        }
    };

    void quicksort(){
        ordenarQuicksor(0,vec.size()-1);
        imprimir(vec, "Quicksort");
    }
};

#endif //CS2100_SORTING_IVHYARLETH_QUICKSORT_H
