int func1(int var, __attribute__((unused)) int test)
{
	int t;

	t = sizeof(var);
	return (t);
}

