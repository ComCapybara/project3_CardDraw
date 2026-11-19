#include <stdio.h>

int main() {
	char op = 0;
	float val = 0.0;
	while(1){
		scanf("%c %f", &op, &val);
		// if(usrInput == EOF) break;
		switch ((char)op) {
		case 'a': // a
			val += val;
			printf("%f\n", val);
			break;
		case 's': // s
			val -= val;
			printf("%f\n", val);
			break;
		case 'm': // m
			val *= val;
			printf("%f\n", val);
			break;
		case 'd': // d
			val /= val;
			printf("%f\n", val);
			break;
		default:
			break;
		}
	}
	return 0;
}
