bool isValid(char* s) {
    char st[10000];
    int k = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st[k++] = s[i];
        } else {
            if (k == 0) return false;
            char c = st[--k];
            if (s[i] == ')' && c != '(') return false;
            if (s[i] == ']' && c != '[') return false;
            if (s[i] == '}' && c != '{') return false;
        }
    }   return k == 0;
}
