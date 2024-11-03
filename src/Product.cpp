#include "Product.h"

Product::Product(const std::string &name, double price, int quantity)
    : name(name), price(price), quantity(quantity) {}

double Product::getPrice() const {
    return price;
}

const std::string& Product::getName() const {
    return name;
}

int Product::getQuantity() const {
    return quantity;
}

void Product::reduceQuantity(int amount) {
    if (quantity >= amount) {
        quantity -= amount;
    }
}
