#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(const std::string &name, double price, int quantity);
    double getPrice() const;
    const std::string& getName() const;
    int getQuantity() const;
    void reduceQuantity(int amount);

private:
    std::string name;
    double price;
    int quantity;
};

#endif
