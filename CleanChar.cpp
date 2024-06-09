#include	<iostream>
using	namespace	std;

int	main(void){
	int	c;
	while((c=fgetc(stdin))!=EOF){
		char	b=c;
		if(b<0)	fputc(b,stdout);
	}
	return	0;
}
