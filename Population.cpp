//
// Created by Arash on 24/10/16.
//
#include <vector>
#include "Population.h"
Population::Population(int chromosomeLength) : chromosomeLength(chromosomeLength) {
//    pop* population = new  std::vector<Chromosome*>();
//    pop->pop_back();
//    population.pop_back();
}

Chromosome* Population::CreateRandomChromosome()
{
    int length = Population::getChromosomeLength();
    Chromosome* ch = new Chromosome(length);

    for ( int i = 0; i < length; i++ )
    {
        float value = rand() % 100 < 50 ? 0 : 1;
        ch->setChromosomeAtIndex(i,value);
    }
    return ch;
}


void Population::insertChromosomeToPopulation(Chromosome *ch) {
//    pop->push_back(ch);
}



int Population::getChromosomeLength() const {
    return chromosomeLength;
}

void Population::setChromosomeLength(int chromosomeLength) {
    Population::chromosomeLength = chromosomeLength;
}



