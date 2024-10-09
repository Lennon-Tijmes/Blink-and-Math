#include <Arduino.h>
#include <stdbool.h>

bool sum_option = false;
bool multi_option = false;
int menu_option = 0;

// put function declarations here:
int Menu(bool sum_option, bool multi_option);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int Menu(bool sum_option, bool multi_option);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int Menu(bool sum_option, bool multi_option) {
  printf("Type '1' for the sum option or '2' for multiplication");
  while (Serial.available() == 0)
  {
    // Waiting for a response
  }
  do
  {
    int menu_option = Serial.parseInt();
  }
  while (menu_option == 1 || menu_option == 2);

  if(int menu_option = 1)
  {
    bool sum_option = true;
    printf("You have selected the adding function");
  }

  if(int menu_option = 2)
  {
    bool multi_option = true;
    printf("You have selected the multiplication function");
  }
}
