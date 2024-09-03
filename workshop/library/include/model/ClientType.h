#ifndef CARRENTAL_CLIENTTYPE_H
#define CARRENTAL_CLIENTTYPE_H

#include <string>

class ClientType {
protected:
    int maxVehicles;
    double  discount;
public:

    /* Destructor for class ClientType
     *
     */
    virtual ~ClientType();

    /*  Function gives all information about MaxVehicles
     *  return maxVehicles int number
     */
    virtual int getMaxVehicles() const;

    /* Function gives all information about Class
     *  return string
     */
    virtual std::string getInfo() const;

    /* Function calculate discount for price
     *  return string price with discount
     */
    virtual double applyDiscount(double price);
};

class Default : public ClientType{

public:
    /* Construcor for class Default
  *
  */
    Default();

    /* Destructor for class Default
  *
  */
    ~Default() override;

    /* Function calculate discount for price
     *  return string price with discount
     */
    double applyDiscount(double price) override;
};

class Bronze : public ClientType{

public:

    /* Constructor for class Bronze
     *
     */
    Bronze();

    /* Destructor for class Bronze
     *
     */
    ~Bronze() override;

    /* Function calculate discount for price
     *  return string price with discount
     */
    double applyDiscount(double price) override;

    /* Function gives all information about Class
 *  return string
 */
    std::string getInfo() const override;

    int getMaxVehicles() const override;

};

class Diamond : public ClientType{

public:

    /* Constructor class Diamond
     *
     */
    Diamond();

    /* Destructor for class Diamond
 *
 */
    ~Diamond() override;

    int getMaxVehicles() const override;

    /* Function gives all information about Class
 *  return string
 */
    std::string getInfo() const override;

    /* Function calculate discount for price
     *  return string price with discount
     */
    double applyDiscount(double price) override;

};

class Gold : public ClientType{

public:

    /* Constructor for class Gold
     *
     */
    Gold();

    /* Destructor for class Gold
     *
     */
    ~Gold() override;

    int getMaxVehicles() const override;

    /* Function gives all information about Class
 *  return string
 */
    std::string getInfo() const override;

    /* Function calculate discount for price
     *  return string price with discount
     */
    double applyDiscount(double price) override;

};

class Platinum : public ClientType{

public:

    /* Constructor for class Platinum
     *
     */
    Platinum();

    /* Destructor for class Platinum
     *
     */
    ~Platinum() override;

    int getMaxVehicles() const override;

    /* Function gives all information about Class
 *  return string
 */
    std::string getInfo() const override;

    /* Function calculate discount for price
     *  return string price with discount
     */
    double applyDiscount(double price) override;

};

class Silver : public ClientType{

public:

    /* Constructor for class Silver
     *
     */
    Silver();

    /* Destructor for class Silver
     *
     */
    ~Silver() override;

    int getMaxVehicles() const override;

    /* Function gives all information about Class
 *  return string
 */
    std::string getInfo() const override;

    /* Function calculate discount for price
     *  return string price with discount
     */
    double applyDiscount(double price) override;

};


#endif //CARRENTAL_CLIENTTYPE_H
