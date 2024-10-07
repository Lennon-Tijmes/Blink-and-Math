#include <Arduino.h>
#include <stdbool.h>

bool sum_option = false;
bool multi_option = false;

// put function declarations here:
int myFunction(int, int);

int menu(bool sum_option, bool multi_option);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}

int Menu(bool sum_option, bool multi_option) {
  printf("Type 'sum' for adding something together or 'multi' for multiplication");
  while (Serial.available() == 0)
  {
    // Waiting for a response
  }

  String input = Serial.readString(); // Reads the input in a string format
  input.toLowerCase(); // Converts the input into lowercase
  input.trim(); // Removes the blank spaces in the beginning of the end of the string

  if(String input = "sum")
  {
    bool sum_option = true;
    printf("You have selected the adding function");
  }

  if(String input = "multi")
  {
    bool multi_option = true;
    printf("You have selected the multiplication function");
  }
}
