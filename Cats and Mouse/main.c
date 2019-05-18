char* catAndMouse(int x, int y, int z) {
    int catADistance = fabs(z-x);
    int catBDistance = fabs(z-y);
    char* str;

    if (catADistance < catBDistance) {
        str = "Cat A";
    } else if(catBDistance < catADistance ) {
        str = "Cat B";
    } else {
        str = "Mouse C";
    }
    return str;
}
