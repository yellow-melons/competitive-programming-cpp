int main(void) {
    int result = 0;
    int add = lookup_symbol("add");
    int sub = lookup_symbol("sub");
    int mult = lookup_symbol("mult");
    int div = lookup_symbol("div");
    while (1) {
        int operator = read_symbol();
        int value = read_int();
        if (operator == add) {
            if (value <= 0) {
                result = result + value;
                printf("%d\n", value);
            }
            else if (result < INT_MAX - value) {
                result = result + value;
                printf("%d\n", value);
            }
            else {
                printf("OVERFLOW\n");
            }
        }
        else if (operator == sub) {
            if (value <= 0) {
                result = result - value;
                printf("%d\n", value);
            }
            else if (result > INT_MIN + value) {
                result = result - value;
                printf("%d\n", value);
            }
            else {
                printf("OVERFLOW\n");
            }
        }
        else if (operator == mult) {
            if (abs(result) < abs(INT_MAX / value)) {
                result = result * value;
                printf("%d\n", value);
            }
            else {
                printf("OVERFLOW\n");
            }
        }
        else if (operator == div) {
            if (value == 0) {
                printf("DIVIDE BY ZERO\n");
            }
            else {
                value = value / value;
                printf("%d\n", value);
            }
        }
        else {
            exit(EXIT_SUCCESS);
        }
    }
}
