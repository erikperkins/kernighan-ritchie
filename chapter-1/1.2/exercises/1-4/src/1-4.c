/* Exercise 1-4 */
#include <stdio.h>

int main() {
  float celsius, fahrenheit;
  int start, stop, step;

  start = 0;
  stop = 100;
  step = 10;

  printf("Celsius\tFahrenheit\n");
  printf("-------\t----------\n");

  celsius = start;
  while (celsius <= stop) {
    fahrenheit = (9. / 5.) * celsius + 32.;
    printf("%7.0f\t%10.1f\n", celsius, fahrenheit);
    celsius = celsius + step;
  }

  return 0;
}
