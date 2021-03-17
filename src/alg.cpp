// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count;
  int l = 0, r = size - 1;
  int mid;
  while (l <= r){
    mid = (r+l) / 2;
    if (*(arr + mid) > value) 
      r = mid - 1;
    else if (*(arr + mid) < value)
      l = mid + 1;
    else 
      count++;
  }
  if (count > 0) 
    return count;
  else 
    return 0; 
}
