#include <Arduino.h>
#include <stdbool.h>

int menu_option = 0;

// put function declarations here:
int Menu();

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
  Menu();
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int Menu() {
  Serial.println("Type '1' for the sum option or '2' for multiplication");
  while (Serial.available() == 0)
  {
    // Waiting for a response
  }
  
  menu_option = Serial.parseInt();

  if(menu_option == 1)
  {
    Serial.println("You have selected the adding function");
    // add the sum function call here
  }
  else if(menu_option == 2)
  {
    Serial.println("You have selected the multiplication function");
    // add the multiplication function call here
  }
  else
  {
    Serial.println("Please make sure to type in '1' or '2' correctly.");
  }
}
