#include <iostream>
#include "Chromosome.h"
int main() {

    float a1[] = {1.1,4.5,8.6,9.2};
    float a2[] = {4.2,6.7,2.8,5.3};

    Chromosome* c1 = new Chromosome(4);
    Chromosome* c2 = new Chromosome(4);

    c1->setChromosome(a1);
    c2->setChromosome(a2);

    for (int i = 0; i < c1->getlength(); ++i) {
        std::cout << " "<< c1->getChromosomeAtIndex(i);
    }
    std::cout<< ""<< std::endl;

    for (int i = 0; i < c2->getlength(); ++i) {
        std::cout << " "<< c2->getChromosomeAtIndex(i);
    }


//    std::cout << c-> << std::endl;


    return 0;
}
