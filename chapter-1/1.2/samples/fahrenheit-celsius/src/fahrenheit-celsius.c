/* Print Fahrenheit-Celsius table for several values */
#include <stdio.h>

int main() {
  float fahrenheit, celsius;
  int start, stop, step;

  start = 0;
  stop = 300;
  step = 20;

  fahrenheit = start;
  while(fahrenheit <= stop) {
    celsius = (5. / 9.) * (fahrenheit - 32.);
    printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }

  return 0;
}
