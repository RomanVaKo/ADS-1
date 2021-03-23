int cbinsearch(int* arr, int size, int value) {
    int count = 0;
    int l = 0, r = size - 1;
    int mid = 0;

    while (l < r) {
        mid = (r + l) / 2;
        if (arr[mid] > value)
            r = mid;
        else if (arr[mid] < value)
            l = mid + 1;
        else break;
    }

    if (arr[mid] == value) {
        while (arr[mid] == value) {
            count++;
            mid++;
        }
    }

    if (count > 0)
        return count;
    else
        return 0;
}
