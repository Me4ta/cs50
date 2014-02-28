/**It takes one and only one command-
* line argument: the number of dolphins to be trained
*  (> 0). Allow the trainer to enter an age for each
* dolphin (> 0). 
*  Finally, print out the age of the oldest dolphin.*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int getAge(void);

int main(int argc, string argv[]){

	if (argc != 2 || atoi(argv[1]) <= 0) {
		printf("My programm doesn't work with dummys\n");
		return 1;
		
		} else {
										
			//int numDolph = atoi(argv[1]);
			//string ageDolph = 0;
	//for (i = 0; i < numDolph; i++){
		
		//ageDolph[i] = getAge();
		//}
	//int maxAge = 0;
	//for (i = 0; i < numDolph; i++){
		//if (ageDilph[i] < maxAge){
		//maxAge = ageDolph;
		//}
	//printf("Max dolphin's age is %d\n", maxAge);
	}
}
int getAge(void){
	//ask "Input age of dolphin"
	//int age = GetInt();
	// while (age <= 0){
			//ask - Did he die? You have to input age more then 0 again for this dolphin.
			//age = GetInt();
			//}
	return 1; //age;
}
