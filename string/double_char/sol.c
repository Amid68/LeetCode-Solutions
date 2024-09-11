char *double_char (const char *string, char *doubled) {
  int i, j;
  for (i = 0, j = 0; string[i]; i++, j+=2) {
    doubled[j] = string[i];
    doubled[j+1] = string[i];
  }
  doubled[j] = '\0'; 
  return doubled; 
}
