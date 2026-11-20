#include <stdio.h>

int main() {
	char op;
	float val = 0.0;
	float score = 0.0;
	while(1){
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
	}
	return 0;
}
