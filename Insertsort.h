//
// Created by ivhy on 29/03/20.
//

#ifndef CS2100_SORTING_IVHYARLETH_INSERTSORT_H
#define CS2100_SORTING_IVHYARLETH_INSERTSORT_H


#include <iostream>
#include <vector>
#include "Sort.h"

using namespace std;

class Insertsort : public Sort{
public:
    Insertsort(vector<int> vec_): Sort{vec_} { }

    void insertsort(){
        for(int i = 1; i < vec.size(); i++){
            int x = vec[i];
            int j = i - 1;
            while (j >= 0 && x < vec[j]){
                vec[j+1] = vec[j];
                j = j-1;
            };
            vec[j+1] = x;
        };
        imprimir(vec, "Insertsort");
    };

};

#endif //CS2100_SORTING_IVHYARLETH_INSERTSORT_H
