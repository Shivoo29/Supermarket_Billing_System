#ifndef BILLING_H
#define BILLING_H

#include "Product.h"

class Billing {
public:
    double calculateTotalPrice(const Product &product, int quantity);
    double applyDiscount(double totalPrice, double discountRate);
};

#endif
