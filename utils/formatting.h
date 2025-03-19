#ifndef FORMATTING_H
#define FORMATTING_H
#include <string>
#include "customer.h"
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

const int WIDTH = 50;
const int COLUMN_WIDTH = 20;

void display_menu(const string& title, const vector<string>& content);
void format_box(const string& text, char border_char, int width);
void display_box(const string& title, const vector<string>& content);
void display_customer_info(const customer& customer_info);

#endif // FORMATTING_H