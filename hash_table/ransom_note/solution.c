bool canConstruct(char * ransomNote, char * magazine) {
    int hashTable[26] = {0}; 
    
    for (int i = 0; magazine[i] != '\0'; i++) {
        hashTable[magazine[i] - 'a']++;
    }
    
    for (int i = 0; ransomNote[i] != '\0'; i++) {
        if (--hashTable[ransomNote[i] - 'a'] < 0) {
            return false;
        }
    }
    return true;
}
