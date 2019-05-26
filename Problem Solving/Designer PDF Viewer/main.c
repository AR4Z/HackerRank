int designerPdfViewer(int h_count, int* h, char* word) {
    int higher = *(h + ((int)(*word) - 97));
    int len = 0;
    while (*(word + len) != '\0') {
        len++;
    }

    for(int i = 0; i < len; i++) {
      int current_char_height = *(h + ((int)(*(word + i)) - 97));

      higher = current_char_height > higher ? current_char_height : higher;
    }

    return higher * len;
}
