//
//	lab 2
//	spring 2023
//	name: Fernando Rojas
//


//  includes
#include	<stdio.h>

// defines
#define flights

// global variables
int codes[flights]; 
int hours[flights];
int min[flights];
int counter = 0;

// functions
void insert(int code, int hour, int min) {
	codes[counter] = code; 
	hours[counter] = hour; 
	min[counter] = min; 
	counter ++; 
	printf("added flight %d at %02d:%02d\n", code, hour, min); 
}

void show_all(){
	printf("list of flights: \n");
	for(int i = 0; i < counter; i++){
		printf("%d %02d:%02d\n", codes[i], hours[i], min[i]);
	}
}

void show_by_hours(int hour){
	printf("flights at %02d:%02d:\n", hour, 0); 
	for(int i = 0; i < counter; i++){
		if(hours[i] == hour){ 
			printf("%d %02d:%02d\n", codes[i], hours[i], min[i]);
		}
	}

}

// main
int main (void)
{
	int option, codes, hours, min;


	while (1)
	{
		printf ("enter option\n");
		if (scanf ("%d", &option) != 1)
		{
			printf ("error\n");
			return 0;
		}

		switch (option)
		{
			case 1:
				if(counter >= flights){
					printf("list is full\n"); 
					break; 
				}
				if(scanf("%d %d:%d", &code, &hour, &min) != 3) {
					printf("error\n");
					break;
				}		

			case 2:
				show_all();
				break;
			
			case 3: 
				if(scanf("%d", &hour) != 1){
					printf("error\n");
					break;
				}
				show_by_hours(hour);
				break;

			case 0:
				printf ("exit\n");
				return 0;

			default:
				printf ("wrong option\n");
		}

	}	

}
