#include<stdio.h>
#include<string.h>

void main(){
	
	char str1[10]="FBS";
	char str2[10]="Solutions";
	
	char str3[20];
	char str4[20];
	
	printf("Length: %d\n", strlen(str1));//Length function

    strcpy(str3, str1);                  // Copies s1 into s3
    printf("str3 now: %s\n",str3);
  
	strncpy(str4, str2, 3);             //copies first 3 chars from str2 into str4
	str4[3]='\0';
	printf("str4 now: %s\n",str4);
	
	strcat(str3, str2);                 //appends str2 to str3
	printf("str3 now: %s\n",str3);
	
	strncat(str3, str1, 2);             // Appends first 2 characters of str1 to str3
	printf("str3 now: %s\n",str3);
	
	printf("Compare: %d\n", strcmp(str1, str2));  //compares two strings character by character using ASCII values.
	
	printf("Compare n: %d\n", strncmp(str1, str2, 2)); //Compares first 2 characters of str1 and str2
	
	printf("First B: %s\n", strchr(str1, 'B'));  //Finds first occurrence of character 'B' in str1
	
	printf("Last B: %s\n", strchr(str1, 'B'));  //Finds last occurrence of character 'B' in str1
	
	printf("Substring: %s\n", strstr("Solutions", "tions")); // finds substring
	
	memcpy(str4, str1, strlen(str1) + 1); // Copies memory from str1 to str4    +1 is for null
	printf("str4 now: %s\n",str4);
	
	memmove(str4 + 1, str4, strlen(str4) + 1);  // Safely moves overlapping memory
	printf("str4 now: %s\n",str4);
	
	memset(str4, '*', 3);                 // Fills first 3 bytes of str4 with '*'
	printf("str4 now: %s\n",str4);
	
	printf("Mem compare: %d\n", memcmp(str1, str2, 2));   // // Compares first 2 bytes of str1 and str2
	
	printf("Mem char: %s\n", memchr(str1, 'B', strlen(str1)));      // Searches character 'B' in s1 (memory level)
	
	printf("Span: %d\n", strspn("abc123", "abc"));      // Counts characters from start that match given set
	
	printf("CSpan: %d\n", strcspn("abc123", "23"));  // Counts characters until any character from set is found
	
	printf("Pbrk: %s\n", strpbrk("hello", "aeiou")); // Finds first matching character from set
	
	printf("Error msg: %s\n", strerror(1));  // Returns error message string for error number
	
	printf("Coll: %d\n", strcoll("abc", "abd"));  //Compares strings based on locale
	
	
    printf("\n");                    
	char data[] = "one,two,three";              // Breaks string into tokens using delimiter ","

    char *token = strtok(data, ",");

    while (token) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

	
	
	
}
