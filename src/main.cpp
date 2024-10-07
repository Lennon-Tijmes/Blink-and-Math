#include <Arduino.h>
#include <stdbool.h>

bool sum_option = false;
bool multi_option = false;
// put function declarations here:
int myFunction(int, int);

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
  printf("Type sum for adding something together or multi for multiplication");
  
}
