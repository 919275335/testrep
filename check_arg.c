#include "pcpy.h"

int check_arg(const char * SFile , int arg_num ,int pronum)
{
	if((access(SFile,F_OK))!=0){
		perror("Check_Arg Error");
		exit(-1);
	}
	if(arg_num <3){
		printf("Check_Arg Error : yichang!");
		exit(-1);
	}
	if(pronum <= 0 || pronum >= 100){
		printf("Check_Arg Error : shuliangbudui\n");
		exit(-1);
	}
	return 0;
}
