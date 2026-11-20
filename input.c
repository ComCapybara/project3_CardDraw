#include <stdio.h>

int main() {
	char op;
	float val = 0.0;
	float score = 0.0;
	int i = 0;
	while (i <= 10000) {
		scanf("%c %f", &op, &val);
		// if(usrInput == EOF) break;
		switch (op) {
		case 'a': // a
			score += val;
			printf("%f\n", score);
			break;
		case 's': // s
			score -= val;
			printf("%f\n", score);
			break;
		case 'm': // m
			score *= val;
			printf("%f\n", score);
			break;
		case 'd': // d
			score /= val;
			printf("%f\n", score);
			break;
		default:
			break;
		}
		i++;
	}
	return 0;
}
