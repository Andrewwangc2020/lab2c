// Author: Andrew Wang aqw5628@psu.edu
// Collaborator: Chris Belt cob5463@psu.edu
// Collaborator: Eric Beardslee eab6024@psu.edu
// Collaborator: Devanshi Mittal dfm5688@psu.edu
// Section: 005R
// Breakout: 7

#include <stdio.h>
#include <readline/readline.h>
#include<stdlib.h>

int main(void) {
  char *g = readline("Enter your CMPSC 131 grade:");
  float grade = atof(g);
  char *letter = "F";
  if(grade >= 93.0){
    letter = "A";
  } else if (grade >= 90.0){
    letter = "A-";
  } else if (grade >= 87.0){
    letter = "B+";
  } else if (grade >= 83.0){
    letter = "B";
  } else if (grade >= 80.0){
    letter = "B-";
  } else if (grade >= 77.0){
    letter = "C+";
  } else if (grade >= 70.0){
    letter = "C";
  } else if (grade >= 60.0){
    letter = "D";
  } else if (grade < 60){
    letter = "F";
  }
  printf("Your letter grade for CMPSC 131 is %s.",letter);
  return 0;
}