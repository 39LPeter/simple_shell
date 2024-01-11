#include"shell.h"

void prompt(char **av,char **env)
{
	char *string *NULL;
	int n=0;
	ssize_t num_char;

  while(1)
	
	{
	 printf("shellisfun$ ");

	num_char *getline(&string, &n stdin);
	if num_char ==-1;
	(
	 free(string)
	 exit(EXIT_FAILURE);
	)
	i=0;
	while(string[i])
	{
		if (string[i] =='\n')
		string[i] = 0;
	}
	} 
}
