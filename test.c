void func0(int var1, int var2)
{
	var1=var2;
	var1= var2;
	var1 =var2;
	/* --- */
	var1 = var2+var2;
	var1 = var2+ var2;
	var1 = var2 +var2;
	/* --- */
	var1 = var2-var2;
	var1 = var2- var2;
	var1 = var2 -var2;
	/* --- */
	var1 = var2<var1;
	var1 = var2< var1;
	var1 = var2 <var1;
	/* --- */
	var1 = var2>var1;
	var1 = var2> var1;
	var1 = var2 >var1;
	/* --- */
	var1 = var2*var1;
	var1 = var2* var1;
	var1 = var2 *var1;
	/* --- */
	var1 = var2/var1;
	var1 = var2/ var1;
	var1 = var2 /var1;
	/* --- */
	var1 = var2%var1;
	var1 = var2% var1;
	var1 = var2 %var1;
	/* --- */
	var1 = var2%var1;
	var1 = var2% var1;
	var1 = var2 %var1;
}

void func1(int var1, int var2)
{
	var1 = var2|var1;
	var1 = var2| var1;
	var1 = var2 |var1;
	/* --- */
	var1 = var2&var1;
	var1 = var2& var1;
	var1 = var2 &var1;
	/* --- */
	var1 = var2^var1;
	var1 = var2^ var1;
	var1 = var2 ^var1;
	/* --- */
	var1 = var2<=var1;
	var1 = var2<= var1;
	var1 = var2 <=var1;
	/* --- */
	var1 = var2>=var1;
	var1 = var2>= var1;
	var1 = var2 >=var1;
	/* --- */
	var1 = var2==var1;
	var1 = var2== var1;
	var1 = var2 ==var1;
	/* --- */
	var1 = var2!=var1;
	var1 = var2!= var1;
	var1 = var2 !=var1;
}

void func2(int var1, int var2)
{
	var1 = var2<<1;
	var1 = var2<< 1;
	var1 = var2 <<1;
	/* --- */
	var1 = var2>>1;
	var1 = var2>> 1;
	var1 = var2 >>1;
}

void func3(int var1, int var2)
{
	var1 = var2 > 0?var1:var2;
	var1 = var2 > 0? var1:var2;
	var1 = var2 > 0 ?var1:var2;
	var1 = var2 > 0?var1: var2;
	var1 = var2 > 0?var1 :var2;
	var1 = var2 > 0? var1: var2;
	var1 = var2 > 0? var1 :var2;
	var1 = var2 > 0 ?var1: var2;
	var1 = var2 > 0 ?var1 :var2;
}

void func4(int var1, int var2)
{
	var1+=var2;
	var1+= var2;
	var1 +=var2;
	/* --- */
	var1-=var2;
	var1-= var2;
	var1 -=var2;
	/* --- */
	var1*=var2;
	var1*= var2;
	var1 *=var2;
	/* --- */
	var1/=var2;
	var1/= var2;
	var1 /=var2;
	/* --- */
	var1%=var2;
	var1%= var2;
	var1 %=var2;
	/* --- */
	var1&=var2;
	var1&= var2;
	var1 &=var2;
	/* --- */
	var1|=var2;
	var1|= var2;
	var1 |=var2;
	/* --- */
	var1^=var2;
	var1^= var2;
	var1 ^=var2;
	/* --- */
	var1>>=var2;
	var1>>= var2;
	var1 >>=var2;
	/* --- */
	var1<<=var2;
	var1<<= var2;
	var1 <<=var2;
}

int func5 ( int var )
{
	if( 1 )
		return( 1 ) ;
	else if( 1 )
		return( 1 ) ;
	switch(var)
	{
		case 0 :
		default :
			break ;
	}
	for( ;1; )
		return( 1 ) ;
	while( 1 )
		return( 1 ) ;
	do{
		return( 1 ) ;
	}while( 1 ) ;
}

int func6 ( int var , __attribute__ ((unused)) int test )
{
	int t ;

	t=sizeof ( var ) ;
	return( t ) ;
}

char *func7(char *var)
{
	char *str;
	Struct_s *ptr;

	str = var;
	str = ptr->str;
	return (str);
}

char* func8(char* var)
{
	char * str;
	Struct_s* ptr;

	str = var;
	str = ptr-> str;
	str = ptr ->str;
	str = ptr -> str;
	return (str);
}

void func9(int var1,	 int var2)
{
	int *addr;

	addr = & var1;
	var2 = * addr;
	var1 = + var2;
	var1 = - var2;
	var1 = ~ var2;
	var1 = ! var2;
}

void func10(int var1)
{
	var1 ++;
	var1 --;
	++ var1;
	-- var1;
}

int func11(int var, __attribute__((unused)) int test)

{
	int t;
	t = sizeof(var);
	return (t);
}
int func12(int argc, __attribute__((unused)) char **argv)

{
	return (0);
}

char func13(__attribute__((unused)) int var1, char *var2)

{//whew
	return (0); // whew
} //whew












char *func14(char *var)
{
	char *str;
	Struct_s *ptr;

	str = var;
	str = ptr->str; //whew
	return str; // whew
}//whew
