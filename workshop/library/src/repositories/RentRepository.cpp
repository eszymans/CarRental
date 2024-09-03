#include "repositories/RentRepository.h"
#include "model/Rent.h"
#include <vector>

std::shared_ptr<Rent> RentRepository::getRent(int index) {
    return allRents[index];
}

void RentRepository::addRent(std::shared_ptr<Rent> rent) {
        allRents.push_back(rent);
}

void RentRepository::removeRent(std::shared_ptr<Rent> rent) {

    for(int i = 0; i < allRents.size(); i++){
        if(allRents[i] == rent){
            allRents.erase(allRents.begin()+i);
        };
    }
}

string RentRepository::reportRent() {
    std::string chain;
    unsigned int i = 1;
    for (std::shared_ptr<Rent> rent : allRents)
    {
        chain = i + ". " + rent->getInfo();
        chain = chain + "\n";
        i ++;
    }
    return chain;
}

int RentRepository::sizeRent() {
    return allRents.size();
}

std::vector<std::shared_ptr<Rent> > RentRepository::findAll(RentPredicate &predicate) {
    auto alwaysTrue =  predicate;
    return findBy(alwaysTrue);
}

std::vector<std::shared_ptr<Rent> > RentRepository::findBy(RentPredicate &predicate) {
    vector<std::shared_ptr<Rent>> found;
    for (unsigned int i = 0; i < allRents.size(); i++) {
        shared_ptr<Rent> rent = getRent(i);
        if (rent != nullptr && predicate(rent)) {
            found.push_back(rent);
        }
    }
    return found;
}

