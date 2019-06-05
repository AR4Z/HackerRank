int utopianTree(int n) {
    int height = 1;
    bool spring = true;
    for(int i = 0; i < n;i++, spring = !spring){
        height = spring ?  2 * height : height + 1;
    }
    return height;
}