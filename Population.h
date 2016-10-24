//
// Created by Arash on 24/10/16.
//


#ifndef ARASH_S_GA_POPULATION_H
#define ARASH_S_GA_POPULATION_H

#include "Chromosome.h"
#include <vector>
class Population {

public:
    const std::vector<Chromosome *> &getPop() const;

    void setPop(const std::vector<Chromosome *> &pop);

    Population(int chromosomeLength);

    Chromosome* CreateRandomChromosome();

    void insertChromosomeToPopulation(Chromosome* ch);

    int getChromosomeLength() const;

    void setChromosomeLength(int chromosomeLength);

    virtual ~Population();

private:

    std::vector<Chromosome*> pop;

    int chromosomeLength;

public:


};


#endif //ARASH_S_GA_POPULATION_H
