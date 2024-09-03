#ifndef CARRENTAL_RENTREPOSITORY_H
#define CARRENTAL_RENTREPOSITORY_H

#include <memory>
#include <vector>
#include "typedefs.h"

class RentRepository {
private:
    std::vector<std::shared_ptr<Rent>> allRents;
public:

/// Find Rent with this index and return it back
/// \param indeks number of Rent in repository (it starts 0)
/// \return std::shared_ptr<Rent>
    std::shared_ptr<Rent> getRent(int indeks);

    /// Adds another rent
    /// \param rent
    void addRent(std::shared_ptr<Rent>);

    /// Remove particular Rent
    /// \param rent
    void removeRent(std::shared_ptr<Rent>);

    /// Gives all informations about all Rents
    /// \return string
    std::string reportRent();

    /// Gives information about how many Rents are in Repository
    /// \return int
    int sizeRent();

    /// A function that takes an object (pointer) as an argument and returns a boolean value
    /// \param predicate predykant
    /// \return bool
    std::vector<std::shared_ptr<Rent> > findBy(RentPredicate &predicate);

    /// Gives vector with all Rents that function findBy is true
    /// \param predicate
    /// \return vector
    std::vector<std::shared_ptr<Rent> > findAll(RentPredicate &predicate);

};

#endif //CARRENTAL_RENTREPOSITORY_H
