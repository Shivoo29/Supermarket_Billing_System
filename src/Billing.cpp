#include "Billing.h"

double Billing::calculateTotalPrice(const Product &product, int quantity) {
    return product.getPrice() * quantity;
}

double Billing::applyDiscount(double totalPrice, double discountRate) {
    return totalPrice * (1 - discountRate);
}
