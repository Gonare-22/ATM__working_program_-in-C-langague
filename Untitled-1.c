#include <stdio.h>
#include <windows.h>
#include <time.h>
int main()
{
    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t                   %s", ctime(&now));
    printf("\n\t\t\t*********!!WELCOME TO ATM BANKING!!*********");

   int num, opt, option;
    printf("\n\n\t\t Hi, Please Do Not Remove Your Chip Card. Leave Your Card Inserted During The Entire Transaction\n\n");
    printf("\n\n\t\tEnter Any Number Between 10 to 99 for Example'55' :");
    scanf("%d", &num);

     printf("\n\n\t\t!!!Please Select The Language!!!!");
     printf("\n\n\t\t\t 1.ENGLISH");
     printf("\n\t\t\t 2.MARATHI");

     printf("\n\n\t\t Please Select The Option :");
     scanf("%d", &opt);

        printf("\n\n\t*********!!PLEASE CHOOSE BANKING FOR CASH WITHDRAWL!!*********");
        printf("\n\n\t\t 1. SERVICES                                                                2. BANKING");
        printf("\n\n\t\t 3. BALANCE INQUIRY                                                         4. PIN GENERATION");
        printf("\n\n\t\t 5. REGISTRATION                                                            6. TRANSFER");
        printf("\n\n\t\t 7. QUICK CASH                                                              8. MINI STATEMENT");

        printf("\n\n\t\t Please Select The Option :");
        scanf("%d", &option);

        int pin = 8841, enteredpin, count = 0, amount = 1;
        float balance = 10000;
        int Transaction = 1;
        int accountnumber = 1234567890, account;
        long long int  mobilenumber = 7620149253, mobile;
        int newpin;


    while (pin != enteredpin)
    {
        printf("\n\n\t\t Please Enter Your PIN :");
        scanf("%d", &enteredpin);
        if (enteredpin != pin)
        {
            Beep(610, 500);
            printf("Invalid PIN!!!!!");
            
        }
            count++;
             if (count == 3 && pin != enteredpin)
            {
            exit(0);
            } 
                    
        switch (option)
        {
        case 1:
        printf("\n\n\t*********!!PLEASE CHOOSE OPTION FOR SERVICES OF BANKING!!*********");
        printf("\n\n\t\t 1. BILL PAY                                                              2. INST FEES");
        printf("\n\n\t\t 3. TRUST DONATION                                                        4. EXAM FEES");
        printf("\n\n\t\t 5. CHECK BOOK REQUEST                                                    6. MOBILE TOP-UP");
        break;

        case 2:
                 printf("\n\n\t*********!! PLEASE SELECT TRANSACTION !!*********");
                 printf("\n\n\t\t 1. CASH WITHDRAWAL                                                     2. DEPOSIT");
                 printf("\n\n\t\t 3. TRANSFER                                                            4. FAST CASH");
         
                 printf("\n\n\t\t Please Select The Option :");
                 scanf("%d", &option);

            switch (option)
            {
              case 1:
            
              while(amount % 100 != 0)
              { 
                  printf("\n\n\t\t\t\t Enter The Amount :");
                  scanf("%d", &amount);
                  if (amount % 100 !=0)
                  {
                    printf("\n\n\t The Amount Should Be Multiple of 100");
                    break;
                  }
        
                  else
                  {
                   balance -= amount;
                   printf("\n\n\t\t You Have Withdrawn Rs.%d. Your New Balance is %.2f", amount, balance);
                   amount = 1;
                
                   printf("\n\n\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!**Transaction Complete**!!!!!!!!!!!!!!!!!!!!!!!!!");
                   printf("\n\n\t\t\t*********!!THANK YOU!!*********");
                   break;
                  }
              case 2:
                  printf("\n\n\t\t\t Please Enter The Amount :");
                  scanf("%d", &amount);
                  balance += amount;
                  printf("\n\n\t\t You Have Deposited Rs.%d. Your new Balance is %.2f", amount, balance);
                  amount = 1;
                  
                  printf("\n\n\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!**Transaction Complete**!!!!!!!!!!!!!!!!!!!!!!!!!");
                  printf("\n\n\t\t\t*********!!THANK YOU!!*********");
                  break;
                }  
            }
            case 3:
                  printf("\n\n\t\t Your Balance Is Rs.%.2f", balance);
                  amount = 1;
                
                  printf("\n\n\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!**Transaction Complete**!!!!!!!!!!!!!!!!!!!!!!!!!");
                  printf("\n\n\t\t\t*********!!THANK YOU!!*********");
                  break;

            case 4:
                while (accountnumber != account)
                 {
                   printf("\n\n\t\t Please Enter Your ACCOUNT NUMBER :");
                   scanf("%d", &account);
                   if (account != accountnumber)
                    {
                      Beep(610, 500);
                      printf("\n\n\t\t Invalid ACCOUNT NUMBER!!!!!");
            
                    }
                    count++;
                    if (count == 3 && accountnumber != account)
                      {
                        exit(0);
                      } 
                      
                   while (mobilenumber != mobile)
                   {
                       printf("\n\n\t\t Please Enter Your Registered MOBILE NUMBER :");
                       scanf("%d", &mobile);

                      
                       if (mobile != mobilenumber)
                       {
                           Beep(610,500);
                           printf("\n\n\t\t Your MOBILE NUMBER Is Not Registered!!!!!");
                           break;
                       }
                       
                      printf("\n\n\t\t Enter New PIN :");
                      scanf("%d", &newpin);
                      printf("\n\n\t\t You Have Successfully Change Your PIN");
                      printf("\n\n\t\t\t*********!!THANK YOU!!*********");
                      break;
                      
                    }
                   
                   

                 }

            
        }

    }

}