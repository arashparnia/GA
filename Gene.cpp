//
// Created by Arash on 24/10/16.
//

#include "Gene.h"

Gene::Gene() {}

Gene::Gene(float gene) : gene(gene) {}

Gene::~Gene() {}

float Gene::getGene() const {
    return gene;
}

void Gene::setGene(float gene) {
    Gene::gene = gene;
}

bool Gene::operator==(const Gene &rhs) const {
    return gene == rhs.gene;
}

bool Gene::operator!=(const Gene &rhs) const {
    return !(rhs == *this);
}

void Gene::mutate()
{
    setGene(Gene::gene + randomFloat();
}

void Gene::mutate(int lowerBound, int upperBound)
{
    setGene(Gene::gene + randomFloat(lowerBound,upperBound);
}

float Gene::randomFloat()
{
    return rand() ;
}

float Gene::randomFloat(int lowerBound,
                            int upperBound)
{
    return rand() % upperBound < lowerBound ? 0 : 1;
}



