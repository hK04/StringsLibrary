int puts(const char* str);

unsigned int strlen(const char* str);

char* strcpy(char* destination, const char* source);

char* strncpy(char* destination, const char* source, unsigned int num);

char* strcat (char* destination, const char* source);

char* strncat (char* destination, const char* source, int num);

char* fgets(char* str, int num, FILE* stream);

const char* strchr(const char* str, int character);

int strcmp(const char* str1, const char* str2);

char* strdup(const char *str1);