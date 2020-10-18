#include<stdio.h>
#include <stdlib.h>//defines four variable types, several macros, and various functions for performing general functions.


int  printMenu()
{
int response;
fprintf(stdout," *********************************************\n\n");
fprintf(stdout,"                   Shada-Mata                \n\n ");
fprintf(stdout,"*********************************************\n\n");
fprintf(stdout,"Make your selection from the menu below:\n\n");
fprintf(stdout,"    1. Platters                           \n");
fprintf(stdout,"    2. Rice Bowl                          \n");
fprintf(stdout,"    3. Snacks and Desserts                \n");
fprintf(stdout,"    4. Special Items                      \n");

fprintf(stdout," *********************************************\n\n");
fprintf(stdout,"Select 1, 2, 3 or 4 ---> \n\n");
fscanf(stdin, "%d", &response);
return response;
}
int subMenu1()
{
      int response1;
      fprintf(stdout,"Make your selection from the platters below:\n\n");
      fprintf(stdout,"1. Simple Chicken Platter-1     : 120/=\n (Fried Rice + Crispy Chicken + Coleslaw Salad.) \n\n");
      fprintf(stdout,"2. Simple Chicken Platter-2     : 140/=\n (Fried Rice + Crispy Chicken + Vegetables + Coleslaw Salad.)\n\n");
      fprintf(stdout,"3. BBQ Chicken Platter          : 200/=\n (Fried Rice + BBQ Chicken + Coleslaw Salad.)\n\n");
      fprintf(stdout,"4. Go back to Menu\n\n");
      fprintf(stdout,"Select 1, 2, 3 or 4 ---> \n\n");
      fscanf(stdin, "%d", &response1);
      return response1;
}
int subMenu2()
{
    int response2;
    fprintf(stdout,"1. BBQ Chicken Rice Bowl        : 130/=\n (with 5 pieces of chicken.)\n\n");
    fprintf(stdout,"2. Crispy Chicken Rice Bowl     : 120/=\n (with 5 pieces of chicken.)\n\n");
    fprintf(stdout,"3. Budget Friendly Rice Bowl    :  99/=\n");
    fprintf(stdout,"4. Go back to Menu\n\n");
    fprintf(stdout,"Select 1, 2, 3 or 4 ---> \n\n");
    fscanf(stdin, "%d", &response2);
    return response2;
}
int subMenu3()
{
    int response3;
    fprintf(stdout,"1. French Fries + Chicken Fry   : 110/=\n");
    fprintf(stdout,"2. Chowmein (Egg + Vegetables)  : 100/=\n");
    fprintf(stdout,"3. Chicken Fry                  :  50/=\n");
    fprintf(stdout,"4. French Fries                 :  60/=\n");
    fprintf(stdout,"5. Pudding (1 piece)            :  35/=\n");
    fprintf(stdout,"6. Pudding ( Full )             : 280/=\n");
    fprintf(stdout,"7. Go back to Menu\n\n");
    fprintf(stdout,"Select 1, 2, 3, 4, 5, 6 or 7 ---> \n\n");
    fscanf(stdin, "%d", &response3);
    return response3;
}
int subMenu4()
{
    int response4;
    fprintf(stdout,"Kabsa with Green Salad\n\a\n(MUST BE ORDERED AT LEAST 24 HOURS IN ADVANCE)\n\n");
    fprintf(stdout,"1. For 1 Person                 : 220/=\n");
    fprintf(stdout,"2. For 2 people                 : 420/=\n");
    fprintf(stdout,"3. For 4 people                 : 790/=\n");
    fprintf(stdout,"4. Go back to Menu\n\n");
    fprintf(stdout,"Select 1, 2 3 or 4 ---> \n\n");
    fscanf(stdin, "%d", &response4);
    return response4;
}

int main()
{
  int s;
  float p, x, sum ;
  int response;
  int response2;
  int response1;
  int response3;
  int response4;
  int again;
  int i;


  response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4: //go to menu
  response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p+=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if (again == 1)
    {

        while(i>0)
        {
      i=1;
      i++;
      response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if(again == 2)
                printf("THANKS FOR ORDERING. \n");

        printf("bill= %.2f",p);


       break;
    }

    }


    else if (again == 2 )
    {
      printf("THANKS FOR ORDERING. \n");


        printf("bill= %.2f",p);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");

    }
          break;

      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4: //go to menu
  response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p+=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if (again == 1)
    {

        while(i>0)
        {
      i=1;
      i++;
      response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if(again == 2)
                printf("THANKS FOR ORDERING. \n");

        printf("bill= %.2f",p);


       break;
    }

    }


    else if (again == 2 )
    {
      printf("THANKS FOR ORDERING. \n");


        printf("bill= %.2f",p);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");

    }
        break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p+=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 7://go to menu
  response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p+=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if (again == 1)
    {

        while(i>0)
        {
      i=1;
      i++;
      response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if(again == 2)
                printf("THANKS FOR ORDERING. \n");

        printf("bill= %.2f",p);


       break;
    }

    }


    else if (again == 2 )
    {
      printf("THANKS FOR ORDERING. \n");


        printf("bill= %.2f",p);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");

    }
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 4://go to menu
  response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p+=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if (again == 1)
    {

        while(i>0)
        {
      i=1;
      i++;
      response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if(again == 2)
                printf("THANKS FOR ORDERING. \n");

        printf("bill= %.2f",p);


       break;
    }

    }


    else if (again == 2 )
    {
      printf("THANKS FOR ORDERING. \n");


        printf("bill= %.2f",p);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");

    }
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);
//loop starts
    if (again == 1)
    {

        while(i>0)
        {
      i=1;
      i++;
      response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4: //menu
  response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p+=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if (again == 1)
    {

        while(i>0)
        {
      i=1;
      i++;
      response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if(again == 2)
                printf("THANKS FOR ORDERING. \n");

        printf("bill= %.2f",p);


       break;
    }

    }


    else if (again == 2 )
    {
      printf("THANKS FOR ORDERING. \n");


        printf("bill= %.2f",p);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");

    }
        break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4: //menu
  response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p+=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if (again == 1)
    {

        while(i>0)
        {
      i=1;
      i++;
      response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if(again == 2)
                printf("THANKS FOR ORDERING. \n");

        printf("bill= %.2f",p);


       break;
    }

    }


    else if (again == 2 )
    {
      printf("THANKS FOR ORDERING. \n");


        printf("bill= %.2f",p);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");

    }
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
        case 7: //menu
  response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p+=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if (again == 1)
    {

        while(i>0)
        {
      i=1;
      i++;
      response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if(again == 2)
                printf("THANKS FOR ORDERING. \n");

        printf("bill= %.2f",p);


       break;
    }

    }


    else if (again == 2 )
    {
      printf("THANKS FOR ORDERING. \n");


        printf("bill= %.2f",p);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");

    }
            break;
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 4://menu
  response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p+=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if (again == 1)
    {

        while(i>0)
        {
      i=1;
      i++;
      response = printMenu();
  switch (response)
  {
  case 1:

      response1=subMenu1();
      switch(response1)
      {
      case 1:
            printf("1. Simple Chicken Platter-1     : 120/=\n");
            printf("how many of Simple Chicken Platter-1 do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-1\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Simple Chicken Platter-2     : 140/=\n");
            printf("how many of Simple Chicken Platter-2?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Simple Chicken Platter-2\n", s);
            p+=s*140;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
            printf("3. BBQ Chicken Platter          : 200/=\n");
            printf("how many of BBQ Chicken Platter do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Platter. \n", s);
            p+=s*200;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

      break;

  case 2:
          response2=subMenu2();
          switch(response2)
      {
      case 1:
            printf("1. BBQ Chicken Rice Bowl     : 130/=\n");
            printf("how many of BBQ Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the BBQ Chicken Rice Bowl. \n", s);
            p+=s*130;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Crispy Chicken Rice Bowl     : 120/=\n");
            printf("how many of Crispy Chicken Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Crispy Chicken Rice Bowl.\n", s);
            p+=s*120;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3.  Budget Friendly Rice Bowl         : 99/=\n");
           printf("how many of Budget Friendly Rice Bowl do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Budget Friendly Rice Bowl. \n", s);
            p+=s*99;
            printf("your total is BDT %.2f\n\n",p);
            break;
      }

    break;

  case 3:
             response3=subMenu3();
              switch(response3)
      {
      case 1:
            printf("1. French Fries + Chicken Fry     : 110/=\n");
            printf("how many of French Fries + Chicken Fry do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries + Chicken Fry. \n", s);
            p=s*110;
            printf("your total is BDT %.2f\n\n",p);
            break;


      case 2:
            printf("2. Chowmein (Egg + Vegetables)  : 100/=\n");
            printf("how many of Chowmein (Egg + Vegetables) do you want to order?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chowmein (Egg + Vegetables).\n", s);
            p+=s*100;
            printf("your total is BDT %.2f\n\n",p);
            break;

      case 3:
           printf("3. Chicken Fry                  :  50/=\n");
           printf("how many Chicken Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Chicken Fry. \n", s);
            p+=s*50;
            printf("your total is BDT %.2f\n\n",p);
            break;
      case 4:
           printf("4. French Fries                 :  60/=\n");
           printf("how many of French Fries do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the French Fries\n", s);
            p+=s*60;
            printf("your total is BDT %.2f\n\n",p);
            break;
       case 5:
           printf("5. Pudding (1 piece)            :  35/=\n");
           printf("how many pieces of Pudding do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*35;
            printf("your total is BDT %.2f\n\n",p);
            break;
        case 6:
           printf("6. Pudding ( Full )             : 280/=\n");
           printf("how many whole Puddings do you want?\n");
            scanf("%d",&s);
            printf("You have ordered %d order(s) of the Pudding\n", s);
            p+=s*280;
            printf("your total is BDT %.2f\n\n",p);
            break;
            }
    break;

  case 4:

    response4=subMenu4();
    switch(response4)
    {
    case 1:
        printf("For 1 Person                 : 220/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 1 person\n", s);
        p+=s*220;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 2:
        printf("For 2 People                 : 420/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 2 people\n", s);
        p+=s*420;
        printf("your total is BDT %.2f\n\n",p);
        break;
    case 3:
        printf("For 4 People                 : 790/=\n");
        printf("how many of this do you want?\n");
        scanf("%d",&s);
        printf("You have ordered %d order(s) of the Kabsa with Green Salad for 4 people\n", s);
        p+=s*790;
        printf("your total is BDT %.2f\n\n",p);
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if(again == 2)
                printf("THANKS FOR ORDERING. \n");

        printf("bill= %.2f",p);


       break;
    }

    }


    else if (again == 2 )
    {
      printf("THANKS FOR ORDERING. \n");


        printf("bill= %.2f",p);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");

    }
        break;
    }
    break;

    default:
        printf("Please enter a valid choice!!!");
        break;
  }

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);

    if(again == 2)
                printf("THANKS FOR ORDERING. \n");

        printf("bill= %.2f",p);


       break;
    }

    }


    else if (again == 2 )
    {
      printf("THANKS FOR ORDERING. \n");


        printf("bill= %.2f",p);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");

    }



}



