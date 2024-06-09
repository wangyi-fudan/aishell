#include	<iostream>
using	namespace	std;

int	main(void){
	int	c;
	while((c=fgetc(stdin))!=EOF){
		char	b=c;
		if(b<0||(b>='0'&&b<='9')||(b>='a'&&b<='z')||(b>='A'&&b<='Z'))	fputc(b,stdout);
	}
	return	0;
}
