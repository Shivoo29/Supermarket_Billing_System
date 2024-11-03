#include "Inventory.h"

void Inventory::addProduct(const Product& product) {
    products[product.getName()] = product;
}

bool Inventory::updateStock(const std::string &productName, int quantity) {
    auto it = products.find(productName);
    if (it != products.end() && it->second.getQuantity() >= quantity) {
        it->second.reduceQuantity(quantity);
        return true;
    }
    return false;
}

Product* Inventory::findProduct(const std::string &productName) {
    auto it = products.find(productName);
    return (it != products.end()) ? &it->second : nullptr;
}
