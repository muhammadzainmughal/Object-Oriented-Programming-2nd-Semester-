//        ********** Semester 2 ***********
//        ********** LAB 3 TASK 5 **********

#include "Product.h"

int main()
{
    Product p;

    // Invalid inputs (testing validation)
    p.setName("");
    p.setPrice(-50);
    p.setQuantity(-2);

    cout << endl;

    // Correct inputs
    p.setName("Laptop");
    p.setPrice(1200.50);
    p.setQuantity(5);

    // Display output
    cout << "Product: " << p.getName() << endl;
    cout << "Price: $" << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;

    return 0;
}
