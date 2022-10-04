#include <stdio.h>

int main(void) {
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
  switch (month) {
    case 1:
    printf("JANUARY");
    break;
    case 2:
    printf("FEBRUARY");
    break;
    case 3:
    printf("MARCH");
    break;
    case 4:
    printf("APRIL");
    break;
    case 5:
    printf("MAY");
    break;
    case 6:
    printf("JUNE");
    break;
    case 7:
    printf("JULY");
    break;
    case 8:
    printf("AUGUST");
    break;
    case 9:
    printf("SEPTEMBER");
    break;
    case 10:
    printf("OCTOBER");
    break;
    case 11:
    printf("NOVEMBER");
    break;
    case 12:
    printf("DECEMBER");
    break;
    default:
    printf("PICK A NUMBER BETWEEN 1-12\n");
  }

  // Print the day
  printf(" %d", day);

  // Print the suffix for a given day
  switch (day){
    case 1: case 21: case 31:
      printf("ST");
      break;
    case 2: case 22:
      printf("ND");
      break;
    case 3: case 23:
      printf("RD");
      break;
    default:
      printf("TH");
  }

  // Print the year
  printf(" %d.\n", year);
  
  return 0;
}
