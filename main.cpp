#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {

	int scores[10] = {10, 56, 65, 88, 90, 99, 43, 67, 89, 95};
	int sum = 0;
	int passing = 0;
	int max = scores[0];
	int min = scores[0];

	for (int i = 0; i < 10; i++) {
		sum += scores[i];
		if (scores[i] >= 70) {
			passing++;
		}
		if (scores[i] > max) {
			max = scores[i];
		}
		if (scores[i] < min) {
			min = scores[i];
		}
	}
	cout << "The sum of the scores is " << fixed << setprecision(2) << sum << endl;
	double avg = sum / 10;
	cout << "The average of the scores is " << setprecision(2) << avg << endl;
	cout << passing << " students passed" << endl;
	cout << "The highest score was " << max << endl;
	cout << "The lowest score was " << min << endl;
	
	return 0;
}
