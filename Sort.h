//
// Created by ivhy on 30/03/20.
//

#ifndef CS2100_SORTING_IVHYARLETH_SORT_H
#define CS2100_SORTING_IVHYARLETH_SORT_H

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Sort{

public:

    vector<int> vec;


    Sort(vector<int> vec_):vec{vec_} { }


    void imprimir(vector<int> now,std::string sortName) {
        cout << sortName << " => ";
        for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
            cout << *it << " ";
        };
        cout << endl;
    };




};


#endif //CS2100_SORTING_IVHYARLETH_SORT_H
