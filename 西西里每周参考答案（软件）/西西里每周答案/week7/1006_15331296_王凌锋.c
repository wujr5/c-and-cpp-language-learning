#include<stdio.h>
int main(){
	int i,n,start,year,month[12];
	scanf("%d",&year);
	scanf("%d",&start);
	if((year%4)!=0){
		month[0]=start%7;
		month[1]=(start+31)%7;
		month[2]=(month[1]+28)%7;
		month[3]=(month[2]+31)%7;
		month[4]=(month[3]+30)%7;
		month[5]=(month[4]+31)%7;
		month[6]=(month[5]+30)%7;
		month[7]=(month[6]+31)%7;
		month[8]=(month[7]+31)%7;
		month[9]=(month[8]+30)%7;
		month[10]=(month[9]+31)%7;
		month[11]=(month[10]+30)%7;
	switch(month[0]){
		case 0: printf("January 1, %d is Sunday\n",year);break;
		case 1: printf("January 1, %d is Monday\n",year);break;
		case 2: printf("January 1, %d is Tuesday\n",year);break;
		case 3: printf("January 1, %d is Wednesday\n",year);break;
		case 4: printf("January 1, %d is Thursday\n",year);break;
		case 5: printf("January 1, %d is Friday\n",year);break; 
		case 6: printf("January 1, %d is Saturday\n",year);break; 
	}
	switch(month[1]){
		case 0: printf("February 1, %d is Sunday\n",year);break;
		case 1: printf("February 1, %d is Monday\n",year);break;
		case 2: printf("February 1, %d is Tuesday\n",year);break;
		case 3: printf("February 1, %d is Wednesday\n",year);break;
		case 4: printf("February 1, %d is Thursday\n",year);break;
		case 5: printf("February 1, %d is Friday\n",year);break; 
		case 6: printf("February 1, %d is Saturday\n",year);break; 
	}
	switch(month[2]){
		case 0: printf("March 1, %d is Sunday\n",year);break;
		case 1: printf("March 1, %d is Monday\n",year);break;
		case 2: printf("March 1, %d is Tuesday\n",year);break;
		case 3: printf("March 1, %d is Wednesday\n",year);break;
		case 4: printf("March 1, %d is Thursday\n",year);break;
		case 5: printf("March 1, %d is Friday\n",year);break; 
		case 6: printf("March 1, %d is Saturday\n",year);break; 
	}
	switch(month[3]){
		case 0: printf("April 1, %d is Sunday\n",year);break;
		case 1: printf("April 1, %d is Monday\n",year);break;
		case 2: printf("April 1, %d is Tuesday\n",year);break;
		case 3: printf("April 1, %d is Wednesday\n",year);break;
		case 4: printf("April 1, %d is Thursday\n",year);break;
		case 5: printf("April 1, %d is Friday\n",year);break; 
		case 6: printf("April 1, %d is Saturday\n",year);break; 
	}
	switch(month[4]){
		case 0: printf("May 1, %d is Sunday\n",year);break;
		case 1: printf("May 1, %d is Monday\n",year);break;
		case 2: printf("May 1, %d is Tuesday\n",year);break;
		case 3: printf("May 1, %d is Wednesday\n",year);break;
		case 4: printf("May 1, %d is Thursday\n",year);break;
		case 5: printf("May 1, %d is Friday\n",year);break; 
		case 6: printf("May 1, %d is Saturday\n",year);break; 
	}
	switch(month[5]){
		case 0: printf("June 1, %d is Sunday\n",year);break;
		case 1: printf("June 1, %d is Monday\n",year);break;
		case 2: printf("June 1, %d is Tuesday\n",year);break;
		case 3: printf("June 1, %d is Wednesday\n",year);break;
		case 4: printf("June 1, %d is Thursday\n",year);break;
		case 5: printf("June 1, %d is Friday\n",year);break; 
		case 6: printf("June 1, %d is Saturday\n",year);break; 
	}
	switch(month[6]){
		case 0: printf("July 1, %d is Sunday\n",year);break;
		case 1: printf("July 1, %d is Monday\n",year);break;
		case 2: printf("July 1, %d is Tuesday\n",year);break;
		case 3: printf("July 1, %d is Wednesday\n",year);break;
		case 4: printf("July 1, %d is Thursday\n",year);break;
		case 5: printf("July 1, %d is Friday\n",year);break; 
		case 6: printf("July 1, %d is Saturday\n",year);break; 
	}
	switch(month[7]){
		case 0: printf("August 1, %d is Sunday\n",year);break;
		case 1: printf("August 1, %d is Monday\n",year);break;
		case 2: printf("August 1, %d is Tuesday\n",year);break;
		case 3: printf("August 1, %d is Wednesday\n",year);break;
		case 4: printf("August 1, %d is Thursday\n",year);break;
		case 5: printf("August 1, %d is Friday\n",year);break; 
		case 6: printf("August 1, %d is Saturday\n",year);break; 
	}
	switch(month[8]){
		case 0: printf("September 1, %d is Sunday\n",year);break;
		case 1: printf("September 1, %d is Monday\n",year);break;
		case 2: printf("September 1, %d is Tuesday\n",year);break;
		case 3: printf("September 1, %d is Wednesday\n",year);break;
		case 4: printf("September 1, %d is Thursday\n",year);break;
		case 5: printf("September 1, %d is Friday\n",year);break; 
		case 6: printf("September 1, %d is Saturday\n",year);break; 
	}
	switch(month[9]){
		case 0: printf("October 1, %d is Sunday\n",year);break;
		case 1: printf("October 1, %d is Monday\n",year);break;
		case 2: printf("October 1, %d is Tuesday\n",year);break;
		case 3: printf("October 1, %d is Wednesday\n",year);break;
		case 4: printf("October 1, %d is Thursday\n",year);break;
		case 5: printf("October 1, %d is Friday\n",year);break; 
		case 6: printf("October 1, %d is Saturday\n",year);break; 
	}
	switch(month[10]){
		case 0: printf("November 1, %d is Sunday\n",year);break;
		case 1: printf("November 1, %d is Monday\n",year);break;
		case 2: printf("November 1, %d is Tuesday\n",year);break;
		case 3: printf("November 1, %d is Wednesday\n",year);break;
		case 4: printf("November 1, %d is Thursday\n",year);break;
		case 5: printf("November 1, %d is Friday\n",year);break; 
		case 6: printf("November 1, %d is Saturday\n",year);break; 
	}
	switch(month[11]){
		case 0: printf("December 1, %d is Sunday\n",year);break;
		case 1: printf("December 1, %d is Monday\n",year);break;
		case 2: printf("December 1, %d is Tuesday\n",year);break;
		case 3: printf("December 1, %d is Wednesday\n",year);break;
		case 4: printf("December 1, %d is Thursday\n",year);break;
		case 5: printf("December 1, %d is Friday\n",year);break; 
		case 6: printf("December 1, %d is Saturday\n",year);break; 
	}
}
    else if((year%400)!=0&&(year%100)==0){
		month[0]=start%7;
		month[1]=(start+31)%7;
		month[2]=(month[1]+28)%7;
		month[3]=(month[2]+31)%7;
		month[4]=(month[3]+30)%7;
		month[5]=(month[4]+31)%7;
		month[6]=(month[5]+30)%7;
		month[7]=(month[6]+31)%7;
		month[8]=(month[7]+31)%7;
		month[9]=(month[8]+30)%7;
		month[10]=(month[9]+31)%7;
		month[11]=(month[10]+30)%7;
	switch(month[0]){
		case 0: printf("January 1, %d is Sunday\n",year);break;
		case 1: printf("January 1, %d is Monday\n",year);break;
		case 2: printf("January 1, %d is Tuesday\n",year);break;
		case 3: printf("January 1, %d is Wednesday\n",year);break;
		case 4: printf("January 1, %d is Thursday\n",year);break;
		case 5: printf("January 1, %d is Friday\n",year);break; 
		case 6: printf("January 1, %d is Saturday\n",year);break; 
	}
	switch(month[1]){
		case 0: printf("February 1, %d is Sunday\n",year);break;
		case 1: printf("February 1, %d is Monday\n",year);break;
		case 2: printf("February 1, %d is Tuesday\n",year);break;
		case 3: printf("February 1, %d is Wednesday\n",year);break;
		case 4: printf("February 1, %d is Thursday\n",year);break;
		case 5: printf("February 1, %d is Friday\n",year);break; 
		case 6: printf("February 1, %d is Saturday\n",year);break; 
	}
	switch(month[2]){
		case 0: printf("March 1, %d is Sunday\n",year);break;
		case 1: printf("March 1, %d is Monday\n",year);break;
		case 2: printf("March 1, %d is Tuesday\n",year);break;
		case 3: printf("March 1, %d is Wednesday\n",year);break;
		case 4: printf("March 1, %d is Thursday\n",year);break;
		case 5: printf("March 1, %d is Friday\n",year);break; 
		case 6: printf("March 1, %d is Saturday\n",year);break; 
	}
	switch(month[3]){
		case 0: printf("April 1, %d is Sunday\n",year);break;
		case 1: printf("April 1, %d is Monday\n",year);break;
		case 2: printf("April 1, %d is Tuesday\n",year);break;
		case 3: printf("April 1, %d is Wednesday\n",year);break;
		case 4: printf("April 1, %d is Thursday\n",year);break;
		case 5: printf("April 1, %d is Friday\n",year);break; 
		case 6: printf("April 1, %d is Saturday\n",year);break; 
	}
	switch(month[4]){
		case 0: printf("May 1, %d is Sunday\n",year);break;
		case 1: printf("May 1, %d is Monday\n",year);break;
		case 2: printf("May 1, %d is Tuesday\n",year);break;
		case 3: printf("May 1, %d is Wednesday\n",year);break;
		case 4: printf("May 1, %d is Thursday\n",year);break;
		case 5: printf("May 1, %d is Friday\n",year);break; 
		case 6: printf("May 1, %d is Saturday\n",year);break; 
	}
	switch(month[5]){
		case 0: printf("June 1, %d is Sunday\n",year);break;
		case 1: printf("June 1, %d is Monday\n",year);break;
		case 2: printf("June 1, %d is Tuesday\n",year);break;
		case 3: printf("June 1, %d is Wednesday\n",year);break;
		case 4: printf("June 1, %d is Thursday\n",year);break;
		case 5: printf("June 1, %d is Friday\n",year);break; 
		case 6: printf("June 1, %d is Saturday\n",year);break; 
	}
	switch(month[6]){
		case 0: printf("July 1, %d is Sunday\n",year);break;
		case 1: printf("July 1, %d is Monday\n",year);break;
		case 2: printf("July 1, %d is Tuesday\n",year);break;
		case 3: printf("July 1, %d is Wednesday\n",year);break;
		case 4: printf("July 1, %d is Thursday\n",year);break;
		case 5: printf("July 1, %d is Friday\n",year);break; 
		case 6: printf("July 1, %d is Saturday\n",year);break; 
	}
	switch(month[7]){
		case 0: printf("August 1, %d is Sunday\n",year);break;
		case 1: printf("August 1, %d is Monday\n",year);break;
		case 2: printf("August 1, %d is Tuesday\n",year);break;
		case 3: printf("August 1, %d is Wednesday\n",year);break;
		case 4: printf("August 1, %d is Thursday\n",year);break;
		case 5: printf("August 1, %d is Friday\n",year);break; 
		case 6: printf("August 1, %d is Saturday\n",year);break; 
	}
	switch(month[8]){
		case 0: printf("September 1, %d is Sunday\n",year);break;
		case 1: printf("September 1, %d is Monday\n",year);break;
		case 2: printf("September 1, %d is Tuesday\n",year);break;
		case 3: printf("September 1, %d is Wednesday\n",year);break;
		case 4: printf("September 1, %d is Thursday\n",year);break;
		case 5: printf("September 1, %d is Friday\n",year);break; 
		case 6: printf("September 1, %d is Saturday\n",year);break; 
	}
	switch(month[9]){
		case 0: printf("October 1, %d is Sunday\n",year);break;
		case 1: printf("October 1, %d is Monday\n",year);break;
		case 2: printf("October 1, %d is Tuesday\n",year);break;
		case 3: printf("October 1, %d is Wednesday\n",year);break;
		case 4: printf("October 1, %d is Thursday\n",year);break;
		case 5: printf("October 1, %d is Friday\n",year);break; 
		case 6: printf("October 1, %d is Saturday\n",year);break; 
	}
	switch(month[10]){
		case 0: printf("November 1, %d is Sunday\n",year);break;
		case 1: printf("November 1, %d is Monday\n",year);break;
		case 2: printf("November 1, %d is Tuesday\n",year);break;
		case 3: printf("November 1, %d is Wednesday\n",year);break;
		case 4: printf("November 1, %d is Thursday\n",year);break;
		case 5: printf("November 1, %d is Friday\n",year);break; 
		case 6: printf("November 1, %d is Saturday\n",year);break; 
	}
	switch(month[11]){
		case 0: printf("December 1, %d is Sunday\n",year);break;
		case 1: printf("December 1, %d is Monday\n",year);break;
		case 2: printf("December 1, %d is Tuesday\n",year);break;
		case 3: printf("December 1, %d is Wednesday\n",year);break;
		case 4: printf("December 1, %d is Thursday\n",year);break;
		case 5: printf("December 1, %d is Friday\n",year);break; 
		case 6: printf("December 1, %d is Saturday\n",year);break; 
	}
}
	else if((year%4)==0&&(year%100)!=0){
		month[0]=start%7;
		month[1]=(start+31)%7;
		month[2]=(month[1]+29)%7;
		month[3]=(month[2]+31)%7;
		month[4]=(month[3]+30)%7;
		month[5]=(month[4]+31)%7;
		month[6]=(month[5]+30)%7;
		month[7]=(month[6]+31)%7;
		month[8]=(month[7]+31)%7;
		month[9]=(month[8]+30)%7;
		month[10]=(month[9]+31)%7;
		month[11]=(month[10]+30)%7;
	switch(month[0]){
		case 0: printf("January 1, %d is Sunday\n",year);break;
		case 1: printf("January 1, %d is Monday\n",year);break;
		case 2: printf("January 1, %d is Tuesday\n",year);break;
		case 3: printf("January 1, %d is Wednesday\n",year);break;
		case 4: printf("January 1, %d is Thursday\n",year);break;
		case 5: printf("January 1, %d is Friday\n",year);break; 
		case 6: printf("January 1, %d is Saturday\n",year);break; 
	}
	switch(month[1]){
		case 0: printf("February 1, %d is Sunday\n",year);break;
		case 1: printf("February 1, %d is Monday\n",year);break;
		case 2: printf("February 1, %d is Tuesday\n",year);break;
		case 3: printf("February 1, %d is Wednesday\n",year);break;
		case 4: printf("February 1, %d is Thursday\n",year);break;
		case 5: printf("February 1, %d is Friday\n",year);break; 
		case 6: printf("February 1, %d is Saturday\n",year);break; 
	}
	switch(month[2]){
		case 0: printf("March 1, %d is Sunday\n",year);break;
		case 1: printf("March 1, %d is Monday\n",year);break;
		case 2: printf("March 1, %d is Tuesday\n",year);break;
		case 3: printf("March 1, %d is Wednesday\n",year);break;
		case 4: printf("March 1, %d is Thursday\n",year);break;
		case 5: printf("March 1, %d is Friday\n",year);break; 
		case 6: printf("March 1, %d is Saturday\n",year);break; 
	}
	switch(month[3]){
		case 0: printf("April 1, %d is Sunday\n",year);break;
		case 1: printf("April 1, %d is Monday\n",year);break;
		case 2: printf("April 1, %d is Tuesday\n",year);break;
		case 3: printf("April 1, %d is Wednesday\n",year);break;
		case 4: printf("April 1, %d is Thursday\n",year);break;
		case 5: printf("April 1, %d is Friday\n",year);break; 
		case 6: printf("April 1, %d is Saturday\n",year);break; 
	}
	switch(month[4]){
		case 0: printf("May 1, %d is Sunday\n",year);break;
		case 1: printf("May 1, %d is Monday\n",year);break;
		case 2: printf("May 1, %d is Tuesday\n",year);break;
		case 3: printf("May 1, %d is Wednesday\n",year);break;
		case 4: printf("May 1, %d is Thursday\n",year);break;
		case 5: printf("May 1, %d is Friday\n",year);break; 
		case 6: printf("May 1, %d is Saturday\n",year);break; 
	}
	switch(month[5]){
		case 0: printf("June 1, %d is Sunday\n",year);break;
		case 1: printf("June 1, %d is Monday\n",year);break;
		case 2: printf("June 1, %d is Tuesday\n",year);break;
		case 3: printf("June 1, %d is Wednesday\n",year);break;
		case 4: printf("June 1, %d is Thursday\n",year);break;
		case 5: printf("June 1, %d is Friday\n",year);break; 
		case 6: printf("June 1, %d is Saturday\n",year);break; 
	}
	switch(month[6]){
		case 0: printf("July 1, %d is Sunday\n",year);break;
		case 1: printf("July 1, %d is Monday\n",year);break;
		case 2: printf("July 1, %d is Tuesday\n",year);break;
		case 3: printf("July 1, %d is Wednesday\n",year);break;
		case 4: printf("July 1, %d is Thursday\n",year);break;
		case 5: printf("July 1, %d is Friday\n",year);break; 
		case 6: printf("July 1, %d is Saturday\n",year);break; 
	}
	switch(month[7]){
		case 0: printf("August 1, %d is Sunday\n",year);break;
		case 1: printf("August 1, %d is Monday\n",year);break;
		case 2: printf("August 1, %d is Tuesday\n",year);break;
		case 3: printf("August 1, %d is Wednesday\n",year);break;
		case 4: printf("August 1, %d is Thursday\n",year);break;
		case 5: printf("August 1, %d is Friday\n",year);break; 
		case 6: printf("August 1, %d is Saturday\n",year);break; 
	}
	switch(month[8]){
		case 0: printf("September 1, %d is Sunday\n",year);break;
		case 1: printf("September 1, %d is Monday\n",year);break;
		case 2: printf("September 1, %d is Tuesday\n",year);break;
		case 3: printf("September 1, %d is Wednesday\n",year);break;
		case 4: printf("September 1, %d is Thursday\n",year);break;
		case 5: printf("September 1, %d is Friday\n",year);break; 
		case 6: printf("September 1, %d is Saturday\n",year);break; 
	}
	switch(month[9]){
		case 0: printf("October 1, %d is Sunday\n",year);break;
		case 1: printf("October 1, %d is Monday\n",year);break;
		case 2: printf("October 1, %d is Tuesday\n",year);break;
		case 3: printf("October 1, %d is Wednesday\n",year);break;
		case 4: printf("October 1, %d is Thursday\n",year);break;
		case 5: printf("October 1, %d is Friday\n",year);break; 
		case 6: printf("October 1, %d is Saturday\n",year);break; 
	}
	switch(month[10]){
		case 0: printf("November 1, %d is Sunday\n",year);break;
		case 1: printf("November 1, %d is Monday\n",year);break;
		case 2: printf("November 1, %d is Tuesday\n",year);break;
		case 3: printf("November 1, %d is Wednesday\n",year);break;
		case 4: printf("November 1, %d is Thursday\n",year);break;
		case 5: printf("November 1, %d is Friday\n",year);break; 
		case 6: printf("November 1, %d is Saturday\n",year);break; 
	}
	switch(month[11]){
		case 0: printf("December 1, %d is Sunday\n",year);break;
		case 1: printf("December 1, %d is Monday\n",year);break;
		case 2: printf("December 1, %d is Tuesday\n",year);break;
		case 3: printf("December 1, %d is Wednesday\n",year);break;
		case 4: printf("December 1, %d is Thursday\n",year);break;
		case 5: printf("December 1, %d is Friday\n",year);break; 
		case 6: printf("December 1, %d is Saturday\n",year);break; 
	}
}
	else if((year%400)==0){
		month[0]=start%7;
		month[1]=(start+31)%7;
		month[2]=(month[1]+29)%7;
		month[3]=(month[2]+31)%7;
		month[4]=(month[3]+30)%7;
		month[5]=(month[4]+31)%7;
		month[6]=(month[5]+30)%7;
		month[7]=(month[6]+31)%7;
		month[8]=(month[7]+31)%7;
		month[9]=(month[8]+30)%7;
		month[10]=(month[9]+31)%7;
		month[11]=(month[10]+30)%7;
	switch(month[0]){
		case 0: printf("January 1, %d is Sunday\n",year);break;
		case 1: printf("January 1, %d is Monday\n",year);break;
		case 2: printf("January 1, %d is Tuesday\n",year);break;
		case 3: printf("January 1, %d is Wednesday\n",year);break;
		case 4: printf("January 1, %d is Thursday\n",year);break;
		case 5: printf("January 1, %d is Friday\n",year);break; 
		case 6: printf("January 1, %d is Saturday\n",year);break; 
	}
	switch(month[1]){
		case 0: printf("February 1, %d is Sunday\n",year);break;
		case 1: printf("February 1, %d is Monday\n",year);break;
		case 2: printf("February 1, %d is Tuesday\n",year);break;
		case 3: printf("February 1, %d is Wednesday\n",year);break;
		case 4: printf("February 1, %d is Thursday\n",year);break;
		case 5: printf("February 1, %d is Friday\n",year);break; 
		case 6: printf("February 1, %d is Saturday\n",year);break; 
	}
	switch(month[2]){
		case 0: printf("March 1, %d is Sunday\n",year);break;
		case 1: printf("March 1, %d is Monday\n",year);break;
		case 2: printf("March 1, %d is Tuesday\n",year);break;
		case 3: printf("March 1, %d is Wednesday\n",year);break;
		case 4: printf("March 1, %d is Thursday\n",year);break;
		case 5: printf("March 1, %d is Friday\n",year);break; 
		case 6: printf("March 1, %d is Saturday\n",year);break; 
	}
	switch(month[3]){
		case 0: printf("April 1, %d is Sunday\n",year);break;
		case 1: printf("April 1, %d is Monday\n",year);break;
		case 2: printf("April 1, %d is Tuesday\n",year);break;
		case 3: printf("April 1, %d is Wednesday\n",year);break;
		case 4: printf("April 1, %d is Thursday\n",year);break;
		case 5: printf("April 1, %d is Friday\n",year);break; 
		case 6: printf("April 1, %d is Saturday\n",year);break; 
	}
	switch(month[4]){
		case 0: printf("May 1, %d is Sunday\n",year);break;
		case 1: printf("May 1, %d is Monday\n",year);break;
		case 2: printf("May 1, %d is Tuesday\n",year);break;
		case 3: printf("May 1, %d is Wednesday\n",year);break;
		case 4: printf("May 1, %d is Thursday\n",year);break;
		case 5: printf("May 1, %d is Friday\n",year);break; 
		case 6: printf("May 1, %d is Saturday\n",year);break; 
	}
	switch(month[5]){
		case 0: printf("June 1, %d is Sunday\n",year);break;
		case 1: printf("June 1, %d is Monday\n",year);break;
		case 2: printf("June 1, %d is Tuesday\n",year);break;
		case 3: printf("June 1, %d is Wednesday\n",year);break;
		case 4: printf("June 1, %d is Thursday\n",year);break;
		case 5: printf("June 1, %d is Friday\n",year);break; 
		case 6: printf("June 1, %d is Saturday\n",year);break; 
	}
	switch(month[6]){
		case 0: printf("July 1, %d is Sunday\n",year);break;
		case 1: printf("July 1, %d is Monday\n",year);break;
		case 2: printf("July 1, %d is Tuesday\n",year);break;
		case 3: printf("July 1, %d is Wednesday\n",year);break;
		case 4: printf("July 1, %d is Thursday\n",year);break;
		case 5: printf("July 1, %d is Friday\n",year);break; 
		case 6: printf("July 1, %d is Saturday\n",year);break; 
	}
	switch(month[7]){
		case 0: printf("August 1, %d is Sunday\n",year);break;
		case 1: printf("August 1, %d is Monday\n",year);break;
		case 2: printf("August 1, %d is Tuesday\n",year);break;
		case 3: printf("August 1, %d is Wednesday\n",year);break;
		case 4: printf("August 1, %d is Thursday\n",year);break;
		case 5: printf("August 1, %d is Friday\n",year);break; 
		case 6: printf("August 1, %d is Saturday\n",year);break; 
	}
	switch(month[8]){
		case 0: printf("September 1, %d is Sunday\n",year);break;
		case 1: printf("September 1, %d is Monday\n",year);break;
		case 2: printf("September 1, %d is Tuesday\n",year);break;
		case 3: printf("September 1, %d is Wednesday\n",year);break;
		case 4: printf("September 1, %d is Thursday\n",year);break;
		case 5: printf("September 1, %d is Friday\n",year);break; 
		case 6: printf("September 1, %d is Saturday\n",year);break; 
	}
	switch(month[9]){
		case 0: printf("October 1, %d is Sunday\n",year);break;
		case 1: printf("October 1, %d is Monday\n",year);break;
		case 2: printf("October 1, %d is Tuesday\n",year);break;
		case 3: printf("October 1, %d is Wednesday\n",year);break;
		case 4: printf("October 1, %d is Thursday\n",year);break;
		case 5: printf("October 1, %d is Friday\n",year);break; 
		case 6: printf("October 1, %d is Saturday\n",year);break; 
	}
	switch(month[10]){
		case 0: printf("November 1, %d is Sunday\n",year);break;
		case 1: printf("November 1, %d is Monday\n",year);break;
		case 2: printf("November 1, %d is Tuesday\n",year);break;
		case 3: printf("November 1, %d is Wednesday\n",year);break;
		case 4: printf("November 1, %d is Thursday\n",year);break;
		case 5: printf("November 1, %d is Friday\n",year);break; 
		case 6: printf("November 1, %d is Saturday\n",year);break; 
	}
	switch(month[11]){
		case 0: printf("December 1, %d is Sunday\n",year);break;
		case 1: printf("December 1, %d is Monday\n",year);break;
		case 2: printf("December 1, %d is Tuesday\n",year);break;
		case 3: printf("December 1, %d is Wednesday\n",year);break;
		case 4: printf("December 1, %d is Thursday\n",year);break;
		case 5: printf("December 1, %d is Friday\n",year);break; 
		case 6: printf("December 1, %d is Saturday\n",year);break; 
	}
}
}
