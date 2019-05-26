int hurdleRace(int k, int height_count, int* height) {
    int higher = *height;
    for(int i = 1; i < height_count; i++) {
        int current_height = *(height + i);
        higher = current_height > higher ? current_height : higher;
    }
    int difference  = higher - k;
    return difference > 0 ? difference : 0; 

}
