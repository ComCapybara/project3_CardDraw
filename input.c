#include <stdio.h>

int main() {
	char op = 0;
	float val = 0.0;
	float score = 0.0;
	while (1) {
		int res = scanf("%c %f", &op, &val);
		// if(usrInput == EOF) break;
		if (res != EOF) {
			switch (op) {
			case 'a': // a - 97
				score += val;
				printf("%f\n", score);
				break;
			case 's': // s - 115
				score -= val;
				printf("%f\n", score);
				break;
			case 'm': // m - 109
				score *= val;
				printf("%f\n", score);
				break;
			case 'd': // d - 100
				score /= val;
				printf("%f\n", score);
				break;
			default:
				break;
			}
		} else break;
	}
	return 0;
}
