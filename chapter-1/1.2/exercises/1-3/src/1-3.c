/* Exercise 1-3 */
#include <stdio.h>

int main() {
  float fahrenheit, celsius;
  int start, stop, step;

  start = 0;
  stop = 300;
  step = 20;

  printf("Fahrenheit\tCelsius\n");
  printf("----------\t-------\n");

  fahrenheit = start;
  while(fahrenheit <= stop) {
    celsius = (5. / 9.) * (fahrenheit - 32.);
    printf("%10.f\t%7.1f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }

  return 0;
}
