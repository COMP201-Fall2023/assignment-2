// Write your full name: YOUR_NAME, write your KU ID: YOUR_ID
#include <stdio.h>
#include <stdlib.h>

#define EMPTY '-'
#define HUMAN 'H'
#define ZOMBIE 'Z'

// Function Prototypes
char** read_map_from_txt(const char* filename, int *width, int *height);
void print_grid(char** grid, int width, int height);
void simulate(char** grid, int width, int height, int *humans_survived, int *humans_infected, int *zombies_dead);
void cleanup_grid(char** grid, int height);


int main(int argc, char **argv) {
    int width, height;
    char *filename[50] = argv[0];
    char **grid = read_map_from_txt(filename, &width, &height);

    printf("Initial Grid:\n");
    print_grid(grid, width, height);
    
    int humans_infected=0;
    int humans_survived=0;
    int zombies_dead =0;
    
    simulate(grid, width, height, &humans_survived, &humans_infected, &zombies_dead);
    
    printf("Humans survived: %d\nHumans infected: %d\nZombies died: %d\n", humans_survived, humans_infected, zombies_dead);
    printf("Final Grid:\n");
    print_grid(grid, width, height);
    
    cleanup_grid(grid, height);

    return 0;
}

char** read_map_from_txt(const char* filename, int *width, int *height) {
    // This function should read width and height from the given filename and assign these values to the pointers given.
    // It also should allocate the memory for the grid and return a pointer for grid.
    // Write your code below
    
    return NULL;
}

void print_grid(char** grid, int width, int height) {
    // This function should print the grid as in the pdf file for the assignment.
}



char** create_temp_grid(int width, int height) {
    // Initialize a temporary grid with all cells empty. This function is not required but strongly advised for correct implementation.
    // It should return pointer to temporary grid.
}
void simulate(char** grid, int width, int height, int *humans_survived, int *humans_infected, int *zombies_dead) {
    // This function should simulate the grid according to rules until there is no human left.
    // It should call print_grid after each step of simulation. Don't forget to add blank lines to make your output clear.
    // Here are a few hints for this.
    // 1- Write a helper function to check whether there are any human left in the grid. Then you can use the output of this function in your while loop.
    // 2- Write functions for human and zombie movements, collision checkers, and call them under this function for each iteration.
    // 3- Behavior of the movement changes for each step. So keep track of simulation steps, and call movement functions with simulation_step modulo 4.
    // 4- If you try to do each change in the original grid directly, then you'll see it is quite complicated. Therefore, do your changes in a temporary grid and then move to original grid for each step.
    // 5- Use Valgrind to ensure there is no memory leaks as it will cause points deduction!
}


void cleanup_grid(char** grid, int height) {
    // This function should free the allocated memory for any given grid.
}



