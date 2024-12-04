#include "bst_dictionary.hpp"

#include <iostream> // for debugging
#include <ctime>
#include <cmath>

typedef unsigned int KeyType;
typedef int ValueType;
typedef BSTDictionary<KeyType, ValueType> DictionaryType;

int main() 
{
     DictionaryType d1, d2;
     int array[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
     for (int i=0; i<15; i++) {
         d1.add(array[i],array[i]);
     }
     std::cout << std:: endl;
     std::cout << "Worst case: " << std:: endl;
     std::cout << "height of tree 1: " << d1.height() << std::endl << std::endl;
     
     int order[15] = {8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15};
     for (int i=0; i<15; i++) {
         d2.add(array[order[i]],array[order[i]]);
     }
     std::cout << "Best case: " << std:: endl;
     std::cout << "height of tree 2: " << d2.height() << std:: endl << std::endl;
    /*
     */
    
    // random trees
    int n;
    srand(time(0));
    DictionaryType d3;
    int nsamples = 100;
    for (int k=1; k<18; k++) {
        n = std::pow(2,k) - 1;
        int max_height = 0, min_height = n, sum = 0;
        for (int i=0; i<nsamples; i++) {
            for (int j=0; j<n; j++) {
                d3.add(rand(),rand());
            }
            int h = d3.height();
            d3.clear();
            max_height = std::max(max_height,h);
            min_height = std::min(min_height,h);
            sum += h;
        }
        std::cout << k << " ";
        std::cout << min_height << " ";
        std::cout << sum/nsamples  << " ";
        std::cout << max_height << " " << n << std::endl;
    }
    
    return 0;
}

