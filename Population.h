//
// Created by Arash on 24/10/16.
//


#ifndef ARASH_S_GA_POPULATION_H
#define ARASH_S_GA_POPULATION_H

#include "Chromosome.h"
#include <vector>
class Population {

public:

    Population(int chromosomeLength);

    Chromosome* CreateRandomChromosome();

    void insertChromosomeToPopulation(Chromosome* ch);

    int getChromosomeLength() const;

    void setChromosomeLength(int chromosomeLength);

private:

    std::vector<Chromosome> pop;

    int chromosomeLength;

public:


};


#endif //ARASH_S_GA_POPULATION_H
