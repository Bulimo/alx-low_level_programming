
/**
  * swap_int - function to swap two ints
  * @a: pointer to first int
  * @b: pointer to second int
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;			/* Assign c the value of a */
	*a = *b;		/* Assign the value of a the value of b */
	*b = c;			/* Assign the value of b the value of a */
}
