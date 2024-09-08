void count_by(unsigned x, unsigned n, unsigned result[n]) {
  for (unsigned int i = 0; i < n; i++) {
    result[i] = x * (i + 1);
  }
}
