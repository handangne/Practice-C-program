#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* commonPrefixUtil(char* str1, char* str2)
{
	char* result;
	result = (char*)malloc(100 * sizeof(char));
	int len = strlen(str1) < strlen(str2) ? strlen(str1): strlen(str2);
	for (int i = 0; i < len; i++)
	{
		if (str1[i] != str2[i])
		break;
		result[i] = str1[i];
	}

	result[len] = '\0';
	return result;
}

char* commonPrefix(char* arr[], int n)
{
	char* prefix = arr[0];

	for (int i = 1; i < n; i++)
	{
		prefix = commonPrefixUtil(prefix, arr[i]);
	}
	return prefix;
}

int main()
{
	char* arr1[] = { "abc", "abd", "abf" };
	char* arr2[] = { "ha", "ma", "ca" };
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	char* ans1 = commonPrefix(arr1, n1);
	char* ans2 = commonPrefix(arr2, n2);

	if (strlen(ans1))
		printf("The longest common prefix is - %s", ans1);
	else
		printf("\nThere is no common prefix");

	free(ans1);
	//no prefix
	if (strlen(ans2))
		printf("The longest common prefix is - %s", ans2);
	else
	printf("\nThere is no common prefix");
	free(ans2);

	return 0;
}
