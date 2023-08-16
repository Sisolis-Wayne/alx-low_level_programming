int main(void)
{
	char *result;
	char r1[23] = "more ";
	char r2[20] = "money";

	result = str_concat(r1, r2);
	printf("This is the concatenated string: %s\n", result);

	return (0);
}