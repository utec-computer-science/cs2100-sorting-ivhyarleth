//
// Created by ivhy on 30/03/20.
//

#ifndef CS2100_SORTING_IVHYARLETH_MERGESORT_H
#define CS2100_SORTING_IVHYARLETH_MERGESORT_H

#include <iostream>
#include <vector>
#include "Sort.h"
using namespace std;

class Mergesort : public Sort{
public:
    Mergesort(vector<int> vec_): Sort{vec_} { }

    void merge(int left, int middle, int right){
        int i,j,k;
        int n1 = middle - left + 1;
        int n2 = right - middle;
        vector<int> L(n1);
        vector<int> R(n2);
        for (i = 0; i < n1; ++i)
            L[i] = vec[left + i];
        for (j = 0; j < n2; ++j)
            R[j] = vec[middle + 1 + j];
        i = 0;
        j = 0;
        k = left;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                vec[k] = L[i];
                i++;
            }
            else {
                vec[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            vec[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            vec[k]= R[j];
            j++;
            k++;
        }
    };

    void ordenarMergesort(int left, int right){

        if (left < right) {
            int middle = left + (right - left) / 2;
            ordenarMergesort(left, middle);
            ordenarMergesort(middle + 1, right);
            merge(left, middle, right);
        }
    }

    void mergesort(){
        ordenarMergesort(0, vec.size()-1);
        imprimir(vec, "Mergesort");
    };

};

#endif //CS2100_SORTING_IVHYARLETH_MERGESORT_H
