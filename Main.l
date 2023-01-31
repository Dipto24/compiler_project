%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "Main.tab.h"
%}

Comment		[#].*
CommentMulti "'*"[^##]*"*'"

%%
[0-9]+	{yylval.val = atoi(yytext); return NUMBER; }
"CASE" 			{return CASE;}
"SWITCH" 		{return SWITCH;}
"DEFAULT" 		{return DEFAULT;}
"WRITE" 	{return SHOW; }
"IF" 			   {return IF;   }
"ELSE" 		   {return ELSE; }
"ELIF"       {return ELSEIF; }
"do" 		   {return DO;  }
"end"  		   {return END;	}
"Start"       {return S;}
"End"        {return E;}
"FOR_LOOP" 		   {return FORLOOP;}

"WHILE_LOOP"		   {return WHILE;}

"FACT"		{return FACTORIAL;}
"ODD_EVEN"		{return ODDEVEN;}
"GCD"         {return GCD;}
"INTE"  		{return INT;}
"CHART" 		     {return CHAR;}
"FLOATI"			 {return FLOAT;}
"ARRAY"			{return ARRAY;}
"SIN"			   {return SIN;}
"COS"            {return COS;}
"TAN"            {return TAN;}
"LOG"			   {return LOG;}
"LOG10" 		   {return LOG10;}
"+=+"			{return PLUS;}
"-=-"         {return MINUS;}
"*=*"           {return MUL;}
"/=/"           {return DIV;}
"MODULAS"           {return MOD;}
"VOIDMain_Function"	   {printf("\n::::   MAIN Function started  ::::\n"); return VOIDMAIN; }
{Comment}		{printf("\nSingle line comment found :  ");ECHO;printf("\n");}
{CommentMulti}		{printf("\nMulti line comment found :  ");ECHO;printf("\n");}


[-+/*<>=,():;%^]     {	return yytext[0];	}
"["				{	return yytext[0];	}
"]"				{	return yytext[0];	}
[a-zA-Z]*        {ECHO;
                 printf("\n");
				  strcpy(yylval.idval,yytext); 
				  return	VAR; }

[ ]*	    			{}
[\n]*					{}
[\t]*					{}
.						{printf("\nUnknown syntax : %s\n",yytext);}


%%