#include <iostream>
#include "Inventory.h"
#include "Billing.h"

int main() {
    Inventory inventory;
    Billing billing;

    // Sample data
    inventory.addProduct(Product("Milk", 1.5, 50));
    inventory.addProduct(Product("Bread", 1.0, 30));
    inventory.addProduct(Product("Eggs", 0.2, 200));

    std::string productName;
    int quantity;
    double discountRate = 0.1;  // Example discount rate of 10%

    // User input for purchase
    std::cout << "Enter product name: ";
    std::cin >> productName;
    std::cout << "Enter quantity: ";
    std::cin >> quantity;

    Product* product = inventory.findProduct(productName);
    if (product != nullptr && inventory.updateStock(productName, quantity)) {
        double totalPrice = billing.calculateTotalPrice(*product, quantity);
        double finalPrice = billing.applyDiscount(totalPrice, discountRate);
        std::cout << "Total Price after discount: $" << finalPrice << std::endl;
    } else {
        std::cout << "Product not found or insufficient stock." << std::endl;
    }

    return 0;
}
