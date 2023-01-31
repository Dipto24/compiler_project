%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	int  yyerror(char *s);
    int yylex();
       
    char sym_variable[1001][1001];

    int store[1001];

    void make()
    {
	for (int i = 0; i < 1001; i++) strcpy(sym_variable[i], "-1");

    }
    
    int hash(char *str)
	{
		int value = 0;
		for(int i = 0 ; i < strlen(str) ; i++)
		{
			value = 10*value + (str[i] - 'A');
			value = value % 1001;
			while(value < 0)
				value = value + 1001;
		}
		return value;
	}

	int Declared(char *now){
	  for(int i=1;i<1001;i++){
		if(strcmp(sym_variable[i],now)==0){
			return i; 
		}
	}
	return 0;
	}

    int addNewVal(char *now){
	if(Declared(now)!=0)return 0;
	int index=hash(now);
	strcpy(sym_variable[index],now);
	store[index]=0;
	
    }
    int getVal(char *now){
	return store[Declared(now)];
    }
    int setVal(char *now,int val){
	int idx= Declared(now);
	store[idx] = val;
    }

    
	
%}


%union{
	char idval[1001];
	int val;
}
%token<val>NUMBER
%type<val>statement
%type<val>inilize
%type<val>expression


%token<idval>VAR
%token VOIDMAIN S E DO END IF ELSE ELSEIF MUL DIV MOD ARRAY INT FLOAT CHAR PLUS MINUS LOG LOG10 TAN FORLOOP WHILE ODDEVEN GCD SHOW FACTORIAL SWITCH CASE DEFAULT SIN COS 
%nonassoc IFX
%nonassoc ELSEIF
%nonassoc ELSE
%left '<' '>'
%left MOD
%left PLUS MINUS
%left MUL DIV
%left '^'



%%

program: VOIDMAIN ':' S function E {printf("\n::::    MAIN Function END    ::::\n");}
	 ;

function: 
    | function declaration ';' { }
	| function statement	{ }
	;

declaration : TYPE variable_list   {printf("\nvariable Declaration successfully\n");
		                             printf("\n\n");}
            ;

TYPE : INT   
     | FLOAT  
     | CHAR   
     ;

variable_list : inilize ',' variable_list
              | inilize
              ;

inilize : VAR '=' NUMBER {
	int res = addNewVal($1);
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);

		}
		setVal($1,$3);

	} 
    |VAR {
		int res = addNewVal($1);
		if(res == 0){
			printf("Compilation Error :: Varriable already declared\n");
			exit(-1);
		}
	}  
    ;

statement: ';'	{ }		

	| expression ';' 			{   printf("value of expression: %d\n", $1); $$=$1;
		printf("\n\n");
		}
	
	| VAR '=' expression ';' { 
							printf("\nValue of the variable : %d\n",$3);
							setVal($1,$3);
						
							$$=$3;
							printf("\n\n");
						} 
    | SHOW '(' expression ')' ';' {printf("\nPrint Expression %d\n",$3);
		                         	printf("\n\n");}


	| IF '(' expression ')' DO statement END %prec IFX {
								if($3){
									printf("\nvalue of expression in IF : %d\n",$6);
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}
								printf("\n\n");
							}

	| IF '(' expression ')' DO statement END ELSE DO statement END  {
								if($3){
									printf("value of expression in IF : %d\n",$6);
								}
								else{
									printf("value of expression in ELSE : %d\n",$10);
								}
								printf("\n\n");
							}
	| IF '(' expression ')' DO statement  END ELSEIF '(' expression ')' DO statement END ELSE DO statement END {
									if($3){
									printf("value of expression in IF : %d\n",$6);
								}
								else if($10){
									printf("value of expression in ELSE-IF : %d\n",$13);
								}
								else{
									printf("value of expression in ELSE : %d\n",$17);
								}
								printf("\n\n");
	}

    | SWITCH '(' NUMBER ')' DO SWITCHCASE END {
		                        printf("\nSWITCH CASE Declaration\n");
		                        printf("\n\n");
	                            }



	| FORLOOP '(' NUMBER ':' NUMBER ';' NUMBER ')' DO statement END {
	                                int i;
	                                printf("For Loop execution\n");
	                                for(i=$3 ; i<$5 ; i=i+$7 ) 
	                                {printf("\nvalue of i : %d expression value : %d\n", i,$10);}
	                                printf("\n\n");

				               }

	| ODDEVEN '(' NUMBER ')' ';' {
		printf("Prime Number detection \n");
        int n, i, flag = 0;
        n=$3;

       for (i = 2; i <= n / 2; ++i) {
    
       if (n % i == 0) {
       flag = 1;
       break;
       }
     }

     if (n == 1) {
    printf("1 is neither prime nor composite.");
    } 
     else {
     if (flag == 0)
      printf("%d is a prime number.", n);
      else
      printf("%d is not a prime number.", n);
     }
		printf("\n\n");
		}

	| ARRAY TYPE VAR '[' NUMBER ']' ';' {
		printf("\nARRAY Declaration\n");
		
		printf("\nSize of the ARRAY is : %d\n",$5);
		printf("\n\n");
	}

	| WHILE '[' NUMBER ',' NUMBER ']' DO statement END {
	                                int i;
	                                printf("\n WHILE Loop execution \n");
	                                for(i=$3 ; i<$5 ; i++) {printf("\niteration loop : %d    \n", i);}
	                                printf("\n\n");
	                                								
				               }
    | GCD '('NUMBER ','NUMBER ')' ';' {
		 int n1, n2;
    
    n1=$3;
	n2=$5;

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);
	}

	;
	
 SWITCHCASE: casegrammer	
 			|casegrammer defaultgrammer
 			;

 casegrammer: /*empty*/
 			| casegrammer casenumber
 			;

 casenumber: CASE NUMBER ':' expression ';' { printf("Case No : %d & expression value :%d \n",$2,$4);}
 			;
 defaultgrammer: DEFAULT ':' expression ';' {
 				printf("\nDefault case & expression value : %d",$3);
 			}
 		;


expression: NUMBER					{  $$ = $1;  }

	| VAR						{ $$ = getVal($1); }
	
	| expression PLUS expression	{printf("\nAddition : %d+%d = %d \n",$1,$3,$1+$3 );  $$ = $1 + $3;}

	| expression MINUS expression	{printf("\nSubtraction : %d-%d=%d \n ",$1,$3,$1-$3); $$ = $1 - $3; }

	| expression MUL expression	{printf("\nMultiplication : %d*%d \n ",$1,$3,$1*$3); $$ = $1 * $3; }

	| expression DIV expression	{ if($3){
				     					printf("\nDivision : %d/%d \n ",$1,$3,$1/$3);
				     					$$ = $1 / $3;
				     					
				  					}
				  					else{
										$$ = 0;
										printf("\nDivision by zero\n\t");
				  					} 	
				    			}
	| expression MOD expression	{ if($3){
				     					printf("\nMod : %d MOD %d \n",$1,$3,$1 % $3);
				     					$$ = $1 % $3;
				     					
				  					}
				  					else{
										$$ = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			}
	| expression '^' expression	{printf("\nPower  : %d ^ %d \n",$1,$3,$1 ^ $3);  $$ = pow($1 , $3);}
	| expression '<' expression	{printf("\nLess Than : %d < %d \n",$1,$3,$1 < $3); $$ = $1 < $3 ; }
	
	| expression '>' expression	{printf("\nGreater than : %d > %d \n ",$1,$3,$1 > $3); $$ = $1 > $3; }

	| '(' expression ')'		{	 $$ = $2; }

	| SIN '(' expression ')'  			{printf("Value of Sin(%d) is %lf\n",$3,sin($3*3.1416/180)); $$=sin($3*3.1416/180);}

    | COS '(' expression ')'  			{printf("Value of Cos(%d) is %lf\n",$3,cos($3*3.1416/180)); $$=cos($3*3.1416/180);}

    | TAN '(' expression ')' 			{printf("Value of Tan(%d) is %lf\n",$3,tan($3*3.1416/180)); $$=tan($3*3.1416/180);}

    | LOG10 '(' expression ')' 			{printf("Value of Log10(%d) is %lf\n",$3,(log($3*1.0)/log(10.0))); $$=(log($3*1.0)/log(10.0));}

	| LOG '(' expression ')'  			{printf("Value of Log(%d) is %lf\n",$3,(log($3))); $$=(log($3));}

	| FACTORIAL '(' NUMBER ')'  {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=$3;i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d is : %d\n",$3,f);
		printf("\n\n");

		}
	
	;
%%


int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	make();
	freopen("input_test.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	yyparse();

    
	return 0;
}

