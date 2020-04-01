//
// Created by ivhy on 30/03/20.
//

#ifndef CS2100_SORTING_IVHYARLETH_HEAPSORT_H
#define CS2100_SORTING_IVHYARLETH_HEAPSORT_H

#include <iostream>
#include <vector>
#include "Sort.h"

using namespace std;

class Heapsort : public Sort{
public:
    Heapsort(vector<int> vec_):Sort{vec_} { }

    void heap(int size, int node){

        int smallest = node;
        int l = 2*node + 1;
        int r = 2*node + 2;

        if (l < size && vec[l] > vec[smallest])
            smallest = l;

        if (r < size && vec[r] > vec[smallest])
            smallest = r;

        if (smallest != node) {
            swap(vec[node], vec[smallest]);
            heap(size, smallest);
        };
    };

    void heapsort(){
        for (int i = vec.size() / 2 - 1; i >= 0; i--)
            heap( vec.size(), i);
        for (int i = vec.size()-1; i >= 0; i--)
        {
            swap(vec[0], vec[i]);
            heap(i, 0);
        }

        imprimir(vec, "Heapsort");
    }


};

#endif //CS2100_SORTING_IVHYARLETH_HEAPSORT_H
