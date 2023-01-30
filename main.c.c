#include <MKL24Z4.h>
#include <stdio.h>
#define HIGH = 1
#define LOW = 0
Writ_Output a(PTD,0);
Writ_Output b(PTD,1);
Writ_Output c(PTD,2);
Writ_Output d(PTD,3);
Writ_Output e(PTD,4);
Writ_Output f(PTD,5);
Writ_Output g(PTD,6);
Writ_Output  dp(PTD,7);
Writ_input green_button(PTA,7);
Writ_input red_button(PTA,1);

int main()
	{
		int green_button ;
		int red_button ;
		int a,b,c,d,e,f,g;
		int i;
		while(i<9)
		{
			if (i < 8&& green_button ==1)
			{
				i = i+1;	
			}
			else if (i >= 8&& green_button ==1)
			{
				i = 0;	
			}
			else if (i >= 8&& red_button ==1)
			{
				i = i-1;	
			}
			else if (i <= 0&& red_button ==1)
			{
				i = 8;
			}
			switch (i)
			{
				case 0:
				a == high ;
				b == high ;
				c == high ;
				d == high ;
				e == high  ;
				f == high ;
				g == low ;
				d == high ;
				break;
				
				case 1 :
				a == low;
				b == high;
				c == high;
				d == low;	
				e == low;	
				f == low;
				g == low;
				p == low;
				break;
				case 2 :
				a == high;
				b == high;
				c == low;
				d == high;
				e == high;
				f == low;
				g == high;
				h == high;
				d == high;
				break;
				case 3 :
				a == high;
				b == high;
				c == high;
				d == high;
				e == low;
				f == low;
				g == high;
				d == high;
				break;
				case 4:
				a == low ;
				b == high ;
				c == high ;
				d == low;
				e == low;
				f == high;
				g == high ; 
				break;
				case 5:
				a == high;
				b == low;
				c == high;
				d == high;
				e == low;
				f == high;
				g == high;
				d == high;
				break;
				case 6:
				a == high ;
				b == low ;
				c == high ;
				d == high ;
				e == high ;
				f == high ;
				g == high ;
				d == high ;
				break;
				case 7:
				a == high ;
				b == high ;
				c == high ;
				d == low  ;
				e == low  ;
				f == low  ;
				g == low  ;
				d == low  ;
				break;
				case 6:
				a == high ;
				b == low ;
				c == high ;
				d == high ;
				e == high ;
				f == high ;
				g == high ;
				d == high ;
				break;
				case 7:
				a == high ;
				b == high ;
				c == high ;
				d == low  ;
				e == low  ;
				f == low  ;
				g == low  ;
				d == low  ;
				break;
				case 8:
				a == high ;
				b == high ;
				c == high ;
				d == high ;
				e == high ;
				f == high ;
				g == high ;
				d == high ;
				break;
				
			}
		}
	}
