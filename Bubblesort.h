//
// Created by ivhy on 29/03/20.
//

#ifndef CS2100_SORTING_IVHYARLETH_BUBBLESORT_H
#define CS2100_SORTING_IVHYARLETH_BUBBLESORT_H

#include <iostream>
#include <vector>
#include "Sort.h"

using namespace std;

class Bubblesort : public Sort {

public:
    Bubblesort(vector<int> vec_):Sort{vec_} { }

    void bubblesort(){
        for (int i = 0; i < vec.size(); i++){
            for (int j = 0; j < vec.size()-1; j++){
                if(vec[j] > vec[j+1]){
                    int aux = vec[j];
                    vec[j] = vec[j+1];
                    vec[j+1] = aux;
                };
            };
        };
        imprimir(vec, "Bubblesort");
    };
};

#endif //CS2100_SORTING_IVHYARLETH_BUBBLESORT_H
