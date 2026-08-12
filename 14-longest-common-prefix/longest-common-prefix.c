char* longestCommonPrefix(char** s, int strsSize) {
    for(int i = 0;s[0][i] != '\0';i++)
    {
        char ch = s[0][i];
        for(int j = 1;j < strsSize;j++)
        {
            if(s[j][i] != ch || s[j] == '\0')
            {
                s[0][i] = '\0';
                return s[0];
            }
        }
    }
    return s[0];
}