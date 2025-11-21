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


int number_list[11] = {0,1,2,3,4,5,6,7,8,9, 10};
int nll = 11; // number length list
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
		if(number_list[i] % 2 == 0){
			count_by_2++;
		}
		if(number_list[i] % 3 == 0){
			count_by_3++;
		}
		if(number_list[i] % 4 == 0){
			count_by_4++;
		}
		if(number_list[i] % 5 == 0){
			count_by_5++;
		}
		
	}
	printf("%d %d %d %d", count_by_2, count_by_3, count_by_4, count_by_5);
	
	while(1);

}
