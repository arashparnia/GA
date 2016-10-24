//
// Created by Arash on 24/10/16.
//
// Gene class provides the object for themost basic element of the Genetic Algorithm
//

#ifndef ARASH_S_GA_GENE_H
#define ARASH_S_GA_GENE_H


#include <ostream>

class Gene {
public:
    Gene();

    Gene(float gene);

    virtual ~Gene();

    float getGene() const;

    void setGene(float gene);

    bool operator==(const Gene &rhs) const;

    bool operator!=(const Gene &rhs) const;

//    friend std::ostream &operator<<(std::ostream &os, const Gene &gene);

private:
    float gene;

};

//std::ostream &operator<<(std::ostream &os, const Gene &gene) {
//    os << "gene: " << gene.gene;
//    return os;
//}

#endif //ARASH_S_GA_GENE_H
