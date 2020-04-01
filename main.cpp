#include <iostream>
#include <algorithm>
#include <vector>

#include "Bubblesort.h"
#include "Quicksort.h"
#include "Insertsort.h"
#include "Selectionsort.h"
#include "Mergesort.h"
#include "Heapsort.h"
#include "Shellsort.h"

using namespace std;

void print(vector <int> vec){
    cout << "Vector desordenado: ";
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    };
};

int randomint(){
    int num = rand()%100;
    return num;
}

int main(){

    vector <int> vec (4);
    generate(vec.begin(), vec.end(), randomint);

    Bubblesort sorting1(vec);
    sorting1.bubblesort();

    Quicksort sorting2(vec);
    sorting2.quicksort();

    Insertsort sorting3(vec);
    sorting3.insertsort();

    Selectionsort sorting4(vec);
    sorting4.selectionsort();

    Mergesort sorting5(vec);
    sorting5.mergesort();

    Heapsort sorting6(vec);
    sorting6.heapsort();

    Shellsort sorting7(vec);
    sorting7.sellsort();

    print(vec);



    return 0;
};