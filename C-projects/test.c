// draw_xbox(size) prints a fancier box with an "X" inside of the box.
// requires: size > 0
// effects: prints output.

void draw_xbox(int size) {
    size = (2 * size) + 1;
    int middle = size;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == 0) {
                if (col == 0 || col == (size - 1)) {
                    printf("+");
                }
                else {
                    printf("-");
                }
            }
            else if (row == (size - 1)) {
                if (col == 0 || col == (size - 1)) {
                    printf("+");
                }
                else {
                    printf("-");
                }       
            }
            else if (col == 0 || col == (size - 1)) {
                printf("|");
            }
            else if (col == middle && row == middle) {
                printf("X");
            }
            else if (row == col) {
                printf("\\");
            }
            else if (row + col == size - 1) {
                printf("/");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
