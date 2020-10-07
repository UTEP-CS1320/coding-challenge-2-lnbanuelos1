/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);
  
 if(s < d){
   printf("Error");                                                       //if s<d then error
 }
 else if((s < 120) && (d < 80)) {
   printf("Normal\n");                                                    //Reading for  Normal BP
  }
 else if((120 <= s && s <= 129) && (d < 80)) {
   printf("Elevated\n");                                                  //Reading for Elevated BP
  }
 else if((130 <= s && s <= 139) || (80 <= d && d <= 89)) {
   printf("Stage 1 Hypertension\n");                                      //Reading for Stage 1 Hypertension
  }
 else if((140 <= s && s <= 179) || (90 <= d && d <= 119 )) {
   printf("Stage 2 Hypertension\n");                                      //Reading for Stage 2 Hypertension
  }
 else if((s > 180) || (d > 120)) {
   printf("Hypertensive Crysis\n");                                       //Reading for Hypertensive Crysis 
  }
  return 0;
}


  
