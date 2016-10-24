//
// Created by Arash on 24/10/16.
//

#include <iostream>

#include "Chromosome.h"



Chromosome::Chromosome() {std::cout << "use constructor with size defiition" << std::endl;}

Chromosome::Chromosome(const int& length)
{
    setlength(length);
    theChromosome = std::unique_ptr<Gene[]>( new Gene[getlength()]);
}

Chromosome::Chromosome(const int& size,
                       const double& fittness)
{
    setlength(length);
    setFitness(fittness);
    theChromosome = std::unique_ptr<Gene[]>( new Gene[getlength()]);
}


void Chromosome::setChromosomeAtIndex(const int& index,
                                      const float &value)
{
    if ( index < 0 || index >= getlength() ) return;
    theChromosome[index].setGene(value);
}

void Chromosome::setChromosome(float *genes)
{
    for (int i = 0; i < getlength(); ++i) {
        setChromosomeAtIndex(i,genes[i]);
    }
}

float Chromosome::getChromosomeAtIndex(const int& index)
{
    return theChromosome[index].getGene() ;
}



int Chromosome::getlength() const
{
    return length;
}

void Chromosome::setlength(int len)
{
    Chromosome::length = len;
}


double Chromosome::getFitness() const
{
    return fitness;
}

void Chromosome::setFitness(double f)
{
    Chromosome::fitness = f;
}




Chromosome::~Chromosome() {}

//std::ostream &operator<<(std::ostream &os, const Chromosome &chromosome) {
//    os << "theChromosome: ";
//    for (int i = 0; i < Chromosome::lengh; ++i) {
//        os << " " << chromosome.theChromosome[i];
//    }
//    return os;
//}


