#include <gtest/gtest.h>
#include "Billing.h"
#include "Product.h"

TEST(BillingTest, CalculateTotalPriceTest) {
    Billing bill;
    Product product("TestProduct", 10.0, 100);
    EXPECT_DOUBLE_EQ(bill.calculateTotalPrice(product, 5), 50.0);
}

TEST(BillingTest, ApplyDiscountTest) {
    Billing bill;
    EXPECT_DOUBLE_EQ(bill.applyDiscount(100.0, 0.1), 90.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
