int strStr(char* haystack, char* needle) {
    for(int i = 0;haystack[i] != '\0';i++)
    {
        int j = 0;
        for(j = 0;needle[j] != '\0';j++)
        {
            if(haystack[i + j] != needle[j])
            {
                break;
            }
        }
        if(j == strlen(needle))
        {
            return i;
        }
    }
    return -1;
}