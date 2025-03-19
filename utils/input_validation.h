#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <string>
#include <iostream>
#include <sstream>
using namespace std;
// numerical values, menu options
template <typename T>
T input_validation(const string& prompt, T min, T max) {
	T value;
	string input;
	while (true) {
		cout << prompt;
		getline(cin, input);

		stringstream ss(input);

		// Validate the input
		if (ss >> value && ss.eof() && value >= min && value <= max) {
			return value;
		} else {
			cout << "Invalid input. Please enter a value between " << min << " and " << max << endl;
		}
	}
}

//for string validation
string string_validation(const string& prompt);

#endif //INPUT_VALIDATION_H
