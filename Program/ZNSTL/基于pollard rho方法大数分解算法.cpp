#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
//#include"gmp.h"


int prho(mpz_t factor1, mpz_t factor2,mpz_t n,long c, long maxIts)
/* It is assumed that the input is composite.*/
{
	static mpz_t a,b,oldA, oldB, tmp,tmp2;
    static int initialized=0;
	long i,its;

	if(!(initialized))
	{
		mpz_init(a);
		mpz_init(b);
		mpz_init(tmp);
		mpz_init(tmp2);
		mpz_init(oldA);
		mpz_init(oldB);
        initialized=1;
	}
	if(c<1) c=1;
	if(c>0x000000FF) c &=0x000000FF;
	mpz_set_ui(a,2);
	mpz_set_ui(b,2);
	its=0;
	do
	{

		mpz_set(oldA,a);
		mpz_set(oldB,b);
	    mpz_set_ui(tmp2,1);
	    for(i=25;i>0;i--)
		{
		mpz_mul(tmp,a,a);mpz_add_ui(tmp,tmp,c);mpz_mod(a,tmp,n);
        mpz_mul(tmp,b,b);mpz_add_ui(tmp,tmp,c);mpz_mod(b,tmp,n);
		mpz_mul(tmp,b,b);mpz_add_ui(tmp,tmp,c);mpz_mod(b,tmp,n);

		mpz_sub(tmp,a,b);mpz_mul(tmp2,tmp2,tmp);mpz_mod(tmp2,tmp2,n);
		}
	    its+=25;
	    mpz_gcd(tmp,tmp2,n);
   }while((mpz_cmp_ui(tmp,1)==0)&&(its<maxIts));
   if(its>=maxIts) return -1;
   if(mpz_cmp(tmp,n)==0)
   {
	   mpz_set(a,oldA);mpz_set(b,oldB);
	   do
	   {
		  mpz_mul(tmp,a,a);mpz_add_ui(tmp,tmp,c);mpz_mod(a,tmp,n);
		  mpz_mul(tmp,b,b);mpz_add_ui(tmp,tmp,c);mpz_mod(b,tmp,n);
		  mpz_mul(tmp,b,b);mpz_add_ui(tmp,tmp,c);mpz_mod(b,tmp,n);
		  mpz_sub(tmp,a,b);
		  mpz_gcd(tmp,tmp,n);
	   } while(mpz_cmp_ui(tmp,1)==0);
   }
   if(mpz_cmp(tmp,n)<0){
	mpz_set(factor1,tmp);
	mpz_div(factor2,n,factor1);
	return 0;
}
return -1;/*Unknown failure*/
}
void main()
{
	mpz_t factor1,factor2,n;
	long c=1;
	long maxIts=1<<30;
	//FILE *fp;

	mpz_init(factor1);mpz_init(factor2);mpz_init(n);
	//fp=fopen("number.txt","r");
	/*if(!fp)
	{
		printf("file open error!\n");
		exit(0);
	}*/
	//while(mpz_inp_str(n,fp,10)!=0)
	//{
		mpz_set_str(n,"326442425721099263",10);
		prho(factor1,factor2,n,c,maxIts);
		gmp_printf("%Zd %Zd %Zd\n",n,factor1,factor2);
	//}
	mpz_clear(factor1);mpz_clear(factor2);mpz_clear(n);
	//fclose(fp);
}
