/**It takes one and only one command-
* line argument: the number of dolphins to be trained
*  (> 0). Allow the trainer to enter an age for each
* dolphin (> 0). 
*  Finally, print out the age of the oldest dolphin.*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int* getAge(void);

int main(int argc, string argv[]){

	if (argc != 2 || atoi(argv[1]) <= 0) {
		printf("My programm doesn't work with dummies\n");
		return 1;
		
	} else {
										
		int numDolph = atoi(argv[1]);
		int* ageDolph[numDolph];
		int maxAge = 0;
		for (int i = 0; i < numDolph; i++){
		
			ageDolph[i] = getAge();
			if (*ageDolph[i] > maxAge){
				maxAge = *ageDolph[i];
			}
		}
		printf("Max dolphin's age is %d\n", maxAge);
	}
}
int* getAge(void){
	printf("Input an age of one dolphin: ");
	int* age = malloc(sizeof(int));
	*age = GetInt();
	while (*age <= 0){
		printf("Did he dead? You have to input age more then 0 again for this dolphin: ");
		*age = GetInt();
	}
	//printf("Age: %d\n", age);
	return age;
}
