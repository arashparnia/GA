//
// Created by Arash on 24/10/16.
//

#ifndef ARASH_S_GA_CHROMOSOME_H
#define ARASH_S_GA_CHROMOSOME_H

#include <memory>
#include <ostream>
#include "Gene.h"

class Chromosome {
public:
    Chromosome();

    Chromosome(const int& size);

    Chromosome(const int& size,const double& fittness);

    int getlength() const;

    void setlength(int length);

    double getFitness() const;

    void setFitness(double fitness);

    void setChromosomeAtIndex(const int& index, const float& value);

    void setChromosome(float genes[]);

    float getChromosomeAtIndex(const int& index);





    ~Chromosome();

//    friend std::ostream &operator<<(std::ostream &os, const Chromosome &chromosome);

private:

    std::unique_ptr<Gene[]> theChromosome;

    double fitness;

    int length;

};


#endif //ARASH_S_GA_CHROMOSOME_H
