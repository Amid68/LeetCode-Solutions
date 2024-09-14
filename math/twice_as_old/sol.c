int twice_as_old (int father_age, int son_age) {
  int difference = father_age - 2 * son_age;
  return difference < 0 ? -difference : difference;  
}
