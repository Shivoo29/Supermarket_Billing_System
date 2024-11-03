#ifndef INVENTORY_H
#define INVENTORY_H

#include "Product.h"
#include <unordered_map>
#include <string>

class Inventory {
public:
    void addProduct(const Product& product);
    bool updateStock(const std::string &productName, int quantity);
    Product* findProduct(const std::string &productName);

private:
    std::unordered_map<std::string, Product> products;
};

#endif
