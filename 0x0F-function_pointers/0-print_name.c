/**
* print_name - prints a name using func pointer
*
* @name: name to be printed
* @f: function pointer to functions
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
