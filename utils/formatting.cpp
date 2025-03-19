#include "formatting.h"
#include "customer.h"

void display_menu(const string& title, const vector<string>& content) {
    cout << setfill('*') << setw(WIDTH) << "" << endl;

    int padding = (WIDTH - title.length() - 2) / 2;
    cout << "*" << setfill(' ') << setw(padding + title.length()) << title
         << setw(WIDTH - padding - title.length() - 1) << "*" << endl;

    cout << setfill('*') << setw(WIDTH) << "" << endl;

    // menuoptions
    for (const string& line : content) {
        format_box(line, '-', WIDTH - 2);
    }
}

void format_box(const string& text, char border_char, int width) {
    // Top border
    cout << "|" << setfill(border_char) << setw(width) << "" << "|" << endl;

    int padding = (width - text.length()) / 2;
    cout << "|" << setfill(' ')
         << setw(padding) << "" << text
         << setw(width - padding - text.length()) << "" << "|" << endl;

    // Bottom border
    cout << "|" << setfill(border_char) << setw(width) << "" << "|" << endl;
}

void display_box(const string& title, const vector<string>& content) {
    // Top border
    cout << setfill('*') << setw(WIDTH) << "" << endl;

    // Title
    int padding = (WIDTH - title.length() - 2) / 2;
    cout << "*" << setfill(' ') << setw(padding + title.length()) << title
         << setw(WIDTH - padding - title.length() - 1) << "*" << endl;

    // Bottom border
    cout << setfill('*') << setw(WIDTH) << "" << endl;

    for (const string& line : content) {
        format_box(line, '-', WIDTH - 2);
    }
}

// now displayed in a table
void display_customer_info(const customer& customer_info) {
    cout<< endl;
    cout << setfill('=') << setw(COLUMN_WIDTH * 2) << "" << endl;

    cout << setfill(' ') << left
         << setw(COLUMN_WIDTH) << "ID:" << customer_info.id << endl;
    cout << setw(COLUMN_WIDTH) << "Name:" << customer_info.name << endl;
    cout << setw(COLUMN_WIDTH) << "Email:" << customer_info.email << endl;
    cout << setw(COLUMN_WIDTH) << "Street:" << customer_info.customer_address.street << endl;
    cout << setw(COLUMN_WIDTH) << "City:" << customer_info.customer_address.city << endl;
    cout << setw(COLUMN_WIDTH) << "ZIP Code:" << customer_info.customer_address.zip_code << endl;

    cout << setfill('=') << setw(COLUMN_WIDTH * 2) << "" << endl;
}