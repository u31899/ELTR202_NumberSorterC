/* Assignment Specifications: 

- Must be able to enter numbers into program
- Program will sort the numbres into groups that print:

your numbers are: [ numbers of array seperated by commas]. 

[n] numbers divisible by two.
[n] numbers divisible by three
[n] numbers divisible by four
[n] numbers divisible by five
[n] numbers do not match nay category above

Will need the following functions in the program: 
- Variables:
	- Array - int[]
	- count_by_2 - int
	- count_by_3 - int
	- count_by_4 - int
	- count_by_5 - int
	-count_no_match - int
- Jobs:
	- compare values
	- count
	- print
*/

#include <p18f4620.h>
#include <stdio.h>


int number_list[10] = {2,4,6,8,10,12,14,16,18,12}; // array that is to be analyzed
int nll = 10; // number length list
int count_by_2 = 0;
int count_by_3 = 0;
int count_by_4 = 0;
int count_by_5 = 0;
int count_no_match = 0;
int i = 0;

void main(void) {
	printf("Your numbers are: ");
	for(i = 0; i < nll; i++) { 
		if(i == 10){
			printf("%d. \r\r", number_list[i]);
		} 
		else {
		printf("%d, ", number_list[i]);
		}
	}
	//Scan through the array to count multiples of different values
	for(i = 0; i < nll; i++){
		int positive_count = 0;
		if( number_list[i] != 0){
			if(number_list[i] % 2 == 0){
				count_by_2++;
				positive_count++;
			}
			if(number_list[i] % 3 == 0){
				count_by_3++;
				positive_count++;
			}
			if(number_list[i] % 4 == 0){
				count_by_4++;
				positive_count++;
			}
			if(number_list[i] % 5 == 0){
				count_by_5++;
				positive_count++;
			}
		}
		if(positive_count == 0 || number_list[i] == 0){
			count_no_match++;
		}
		
	}
	printf("[ %d ] numbers are divisble by 2. \r\r", count_by_2);	
	printf("[ %d ] numbers are divisble by 3. \r\r", count_by_3);	
	printf("[ %d ] numbers are divisble by 4. \r\r", count_by_4);	
	printf("[ %d ] numbers are divisble by 5. \r\r", count_by_5);	
	printf("[ %d ] numbers do not match any category. \r\r", count_no_match);	
//	printf("%d %d %d %d %d\r\r" , count_by_2, count_by_3, count_by_4, count_by_5, count_no_match);

	if(count_no_match == 0){
		printf("GAME OVER\r\r");
	}
	else{
	printf("AHHHHH!!!!\r\r");
	}
	while(1);

}
