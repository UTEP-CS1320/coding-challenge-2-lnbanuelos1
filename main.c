/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  if((s < 120) && (d < 80)) {
      printf("Normal\n");
  }
  if ((120 <= s && s <= 129) && (d < 80)) {
        printf("Elevated\n");
  }
  if ((130 <= s && s <= 139) || (80 <= d && d <= 89)) {
        printf("Stage 1 Hypertension\n");
  }
  if ((140 <= s && s <= 179) || (90 >= d && d <= 119)) {
        printf("Stage 2 Hypertension\n");
  }
  if ((s > 180) || (d > 120)) {
        printf("Hypertensive Crysis\n");
  }
    return 0;
}
  
