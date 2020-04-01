//
// Created by ivhy on 30/03/20.
//

#ifndef CS2100_SORTING_IVHYARLETH_SELECTIONSORT_H
#define CS2100_SORTING_IVHYARLETH_SELECTIONSORT_H

#include <iostream>
#include <vector>
#include "Sort.h"

using namespace std;

class Selectionsort : public Sort{
public:
    Selectionsort(vector<int> vec_): Sort{vec_} { }

    void selectionsort(){
        for(int i = 0; i < vec.size()-1; i++){
            int pmin = i;
            for(int j = i +1; j< vec.size();j++ ) {
                if(vec[j] < vec[pmin]) {
                    pmin = j;
                    swap(vec[pmin], vec[i]);
                };
            };
        };
        imprimir(vec, "Selectionsort");
    };

};

#endif //CS2100_SORTING_IVHYARLETH_SELECTIONSORT_H
