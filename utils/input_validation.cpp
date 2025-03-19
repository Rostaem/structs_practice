#include "input_validation.h"

// checks to see if its empty, what else could we verify
string string_validation(const string& prompt) {
	string value;
	while (true) {
		cout << prompt;
		getline(cin, value);

		if (!value.empty()) {
			return value;
		} else {
			cout << "empty input. Please enter a string value" << endl;
		}
	}
}