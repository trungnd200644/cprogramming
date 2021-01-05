void reverse(float a[], int size) {
    int i;
    float tmp;
    for (i = 0; i < size / 2; i++) {

        tmp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = tmp;

    }

}