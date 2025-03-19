#include <iostream>
#include "utils/customer.h"
#include "utils/input_validation.h"
#include "utils/formatting.h"

using namespace std;

void menu_handler() {
	customer customer_info;

	while (true) {
		display_box(
			"Main Menu",
			{
				"1. enter customer details",
				"2. display customer details",
				"3. exit..."
			}
		);

		int choice = input_validation<int>("Enter your choice (1-3): ", 1, 3);

		switch (choice) {
			case 1:
					customer_info.id = input_validation<int>("Enter Customer ID (1-10000): ", 1, 10000);
			customer_info.name = string_validation("Enter Customer Name: ");
			customer_info.email = string_validation("Enter Customer Email: ");
			cout << "Enter Address Details:" << endl;
			customer_info.customer_address.street = string_validation("  Street: ");
			customer_info.customer_address.city = string_validation("  City: ");
			customer_info.customer_address.zip_code = string_validation("  ZIP Code: ");
			break;

			case 2:
					display_customer_info(customer_info);
			break;

			case 3:
					cout << "Exiting program..." << endl;
			return;
		}
	}
}

int main() {
	menu_handler();
	return 0;
}