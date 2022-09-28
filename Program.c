#include <stdio.h>

int main() {
 
 // declaring variables
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';
 int dayOfWeek = 0;

 appleQuantity = 23;
 appleReview = 823 / 9; // calculating average review
 appleReviewDisplay = appleReview;
 dayOfWeek += 3;
 appleReview = (823 + 52) / 10; // calculating new average review based on a new review

 // finding out if there is a sale based on amount of apples left or day of the week
 if(appleQuantity < 10 || dayOfWeek % 7 == 3)
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }

 // printing variables
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
