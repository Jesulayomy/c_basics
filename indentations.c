#include <stdio.h>
int main(void) 
{
 int seg[10] = {6,2,5,5,4,5,6,3,7,6};
 int d1, d2, d3, d4, m=0, td, ts;
 for (d1=0; d1<2; d1++)
 for (d2=0; d2<10; d2++)
 for (d3=0; d3<6; d3++)
 for (d4=0; d4<10; d4++)
    
  if ((!((d1==0)&&(d2==0))) && (!((d1==1)&&(d2>2)))) {
   if (d1==0) {
    ts = seg[d2] + seg[d3] + seg[d4];
    td = d2 + d3 + d4;
      if (ts == td) { 
	m++;
	printf(" %1d:%1d%1d\n",d2,d3,d4); }
      	} else {
	    ts = seg[d1] + seg[d2] + seg[d3] + seg[d4];
	    td = d1 + d2 + d3 + d4;
        	if (ts == td) { 
	  	  m++;
 		  printf("%1d%1d:%1d%1d\n",d1,d2,d3,d4); 
		}
	} 
   }
return 0; 
}
