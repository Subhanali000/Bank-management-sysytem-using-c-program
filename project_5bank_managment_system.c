#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include <conio.h>
void exit();

struct accountholderdata{
    char createabankaccount;
    int transfermoney;
    int checkbalance;
    int login;

};
int main(void){
    int choose,num ,num2,dmoney,wmoney,wnmoney,checkbalance,checkbalance1,currentbalance1,smoney,totalmoney,withdrawmoney,sendmoney1,withsmoney,totalmoneywith,depmoney,esmoney,sendmoney,accnumber[40];
        
    float money;
  time_t currentTime;
  struct tm*timeInfo;
  char formattedTime[100],accholdername[256];
  
    
    printf("*******************WELCOME TO PURVANCHAL PUBLIC BANK ********************\n\n");
    printf("\tPress '1' for creating account and updating details\n\n\tPress '2' If You have already account\n\n\tPress '3' For Exit\n\n");
   scanf("%d",&num);
   
    char  i,cls[24];
    char name[200],acctype[5];
    char username[256],lastname[256],occupation[256],address1[256],fname[256];
    char DOB[25],phno[25],phno1[25],uidno[256],addon[1000],password[25],ch,pass[40];
    
    struct accountholderdata e1,e2,e3,e4;
    switch (num){
  
        case 1:
    
        
       
        printf("\tPlease create your user name:=>");
        scanf("%s",username);
        
        FILE *fptr=fopen(username,"a");
        
        printf("\tPlease enter your first name:=>");
        scanf("%s",name);
        
        fprintf(fptr,"\n\tFirst name==>%s\n",name);
        printf("\t");
       fgets(lastname,sizeof(lastname), stdin);
        fprintf(fptr,"\n");
        printf("Last name:=>");
       fgets(lastname,sizeof(lastname), stdin);
        fprintf(fptr,"\tLast name:=>%s\n",lastname);
        printf("\tEnter your father name:=>");
        fgets(fname,sizeof(fname), stdin);
        fprintf(fptr,"\tFather name==>%s\n",fname );
        printf("\tEnter your DOB:=>");
        fgets(DOB,sizeof(DOB), stdin);
        fprintf(fptr,"\tDOB==>%s\n",DOB);
        printf("\tEnter your Phone number:=>");
       fgets(phno,sizeof(phno), stdin);
        fprintf(fptr,"\tPhone number==>%s\n",phno);
        printf("\tEnter your ALternative Phone number:=>");
        fgets(phno1,sizeof(phno1), stdin);
        fprintf(fptr,"\tALternative Phone number==>%s\n",phno1);
        printf("\tEnter your occupation:=>");
        fgets(occupation,sizeof(occupation), stdin);
        fprintf(fptr,"\tOccupation==>%s\n",occupation);
        printf("\tEnter your Aadhar number:=>");
        fgets(uidno,sizeof(uidno), stdin);
        fprintf(fptr,"\tAadhar number==>%s\n",uidno);
        printf("\tEnter your address:=>");
        fgets(addon,sizeof(addon), stdin);
        fprintf(fptr,"\tAddress==>%s\n",addon);
        printf("\tEnter your Alternative address:=>");
        fgets(address1,sizeof(address1), stdin);
       
        fprintf(fptr,"\tAlternative Address==>%s\n",address1);
        fprintf(fptr,"\tThe Above Is Your Previous Details:\n\n");
        printf("\tPlease choose account type\n\t1.Saving account\n\t2.Primary account\n\t3.Secondary account\n");
       scanf("%d",&num2);
        if (num2==1){
            fprintf(fptr,"\tAccount Type => Saving\n");
        
        }
        if (num2==2){
            fprintf(fptr,"\tAccount Type => Primary Account\n");
            
        }
        if (num2==3){
            fprintf(fptr,"\tAccount Type => Secondary Account\n\n");
            
        }
         else if (num2>3 || num2<1)
        {
        printf("\tPlease chose correct option:\n");
        }
        
        
        printf("\tPlease Create Your Password\n");
        
         for (i = 0; i < 50; i++) {
		ch = getch();
		if (ch != 13) {
			password[i] = ch;
			ch = '*';
			printf("\t"
            "%c", ch);
		}
		else
			break;
        }
        
	
    

	// Writing to the file
	fwrite(&e1.createabankaccount, sizeof(e1.createabankaccount),
		1, fptr);
        
        
   
    
    int i;
	char ch;
	
	printf("\n\tPLEASE WAIT....\n\n\tYOUR DATA IS PROCESSING..........................\n\n");
	for (i = 0; i < 200000000; i++) {
		i++;
		i--;
	}

    printf("**************************ACCOUNT CREATED SUCESSFULLY****************************\n");
    fptr=fopen(username,"a");
    srand(time(NULL)); // Seed the random number generator

    // Generate a random number with more digits
    long long int big_random_number = 
        ((long long int)rand() << 25) | rand();

    
  printf("\tDo you want to deposite money\n\t1.Yes\n\t0.No\n\t ");
  scanf("%d",&num2);
  if(num2==1)
  printf("\tEnter Amount\n");
       scanf("%d",&dmoney);
// dmoney=money;
    // Convert to local time
       time(&currentTime);
    timeInfo = localtime(&currentTime);

    // Format the date and time
    strftime(formattedTime, sizeof(formattedTime), "%Y-%m-%d %H:%M:%S", timeInfo);

               fprintf(fptr,"\t*****************************************Transation Details**************************************\n");
               fprintf(fptr,"\tAmmount\t\t\tDate\t\t\t\tTransaction ID\t\tSender Name\n\t%d\t\t%s\t\t%11d\t\t\t%s\n\n\n",dmoney,formattedTime,big_random_number,username);

      if (num2==0)   ;
      
    char  che;

    printf("\tUsername=>");
    // scanf("%s", &username);
    scanf("%s", &username);
    
    for (i = 0; i < 50; i++) {
		ch = getch();
		if (ch != 13) {
			password[i] = ch;
			ch = '*';
			printf("\t"
            "%c", ch);
		}
		else
			break;
        }

    fptr = fopen(username, "a+");

    if (fptr == NULL) {
        printf("\t!!!ERROR!!!\n\tPlease create account: \n");
        return 1;
    }
    printf("\n\tPLEASE WAIT....\n\n\tYOUR DATA IS PROCESSING..........................\n\n");
	for (i = 0; i < 200000000; i++) {
		i++;
		i--;
	}

    printf("\t**************************Your Account Details Fetched Successfully****************************\n");
    printf("\tWelcome %s %s",name,lastname);
printf("\n\t*****************Your Account Info*******************\n");
    
    while ((che = fgetc(fptr)) != EOF) {
        printf("%c", che);
    }
 

//     fclose(fptr);
    
// break;
        
        
         
         printf("\n\tPlease Enter your user name and Password :=>");
        scanf("%s",username);
        for (i = 0; i < 50; i++) {
		ch = getch();
		if (ch != 13) {
			password[i] = ch;
			ch = '*';
			printf("\t"
            "%c", ch);
		}
		else
			break;
        }
        
        fptr = fopen(username, "a+");

    if (fptr == NULL) {
        printf("\n\t!!!ERROR!!!\n\tPlease create account: \n");
        return 1;
    }
    printf("\n\tPLEASE WAIT....\n\n\tYOUR DATA IS PROCESSING..........................\n\n");
	for (i = 0; i < 200000000; i++) {
		i++;
		i--;
	}

    printf("\t**************************Your Account Details4 Fetched Successfully****************************\n");

printf("\t*****************Your Account Info*******************\n");
    
    while ((che = fgetc(fptr)) != EOF) {
        printf("%c", che);
    }
 

    fclose(fptr);
    int money=dmoney;
    
    printf("\tPlease Choose an Option\n\t1.Check Balance\n\t2.Print Statement\n\t3.Deposite Money\n\t4.Withdraw Money\n\t5.Send Money\n");
    scanf("%d",&checkbalance1);
    
        switch (checkbalance1)
        {
        case 1:
    
        printf("\tBalance=>%d",money);
           break;
        case 2:
        printf("\t\t<------------------------------->Statement<---------------------------------->\n\n");
        printf("\tAmmount\t\t\tDate\t\t\tTransaction ID\t\tSender Name\n\t%d\t\t%s\t\t%11d\t\t\t%s\n",dmoney,formattedTime,big_random_number,username);
        break;
        case 3:
        printf("\tDeposited Money\n");
        scanf("%d",&smoney);
        totalmoney=dmoney+smoney;
        printf("\tCurrent Balance=>%d\n",totalmoney);
        break;
        case 4:
        printf("\t<------------->Withdraw<-------------->\n");
        printf("\tEnter Ammount=>");
        scanf("%d",&wnmoney);
        wmoney=dmoney-wnmoney;
        printf("\tCureent balance => %d\n",wmoney);
 case 5:
        printf("\t************Send Money******************\n");
        printf("\tEnter Ammount\n");
        scanf("%d",&sendmoney1);
        
        printf("\tAccount Holder Name\n");
        scanf("%s",accholdername);
        
        printf("\tAccount Number\n");
        scanf("%s",&accnumber);
        fptr=fopen(username,"a");
    srand(time(NULL)); // Seed the random number generator

    // Generate a random number with more digits
    long long int big_random_number = 
        ((long long int)rand() << 25) | rand();
         time(&currentTime);
    timeInfo = localtime(&currentTime);

    // Format the date and time
    strftime(formattedTime, sizeof(formattedTime), "%Y-%m-%d %H:%M:%S", timeInfo);
fprintf(fptr,"\t*****************************************Transation Details**************************************\n");
        fprintf(fptr,"\tAmmount\t\tAccount Holder Name\t\tAcount Number\t\tTransaction Id\t\tDate\n\n\t%d\t\t\t%s\t\t\t%s\t\t%11d\t\t%s\n\n\n",sendmoney,accholdername,accnumber,big_random_number,formattedTime);
       currentbalance1=dmoney-sendmoney1;
       fprintf(fptr,"\tCurrent Balance:=>%d\n",currentbalance1);
       int z;
	
	
	printf("\n\tPLEASE WAIT....\n\n\tzOUR TRANSACTION IS PROCESSING..........................\n\n");
	for (z = 0; z < 200000000; z++) {
		z++;
		z--;
	}
printf("\n\t*****************************************Transation Details**************************************\n");
        printf("\tAmmount\t\tAccount Holder Name\t\tAcount Number\t\tTransaction Id\t\tDate\n\n\t%d\t\t\t%s\t\t\t%s\t\t%11d\t\t%s\n\n\n",sendmoney1,accholdername,accnumber,big_random_number,formattedTime);
      
       printf("\tCurrent Balance:=>%d\n",currentbalance1);
        
        
        default:
            break;
        }
        break;
         fclose(fptr);
    
break;
case 2:
        printf("\n\tPlease Enter your user name and Password :=>");
        scanf("%s",username);
        for (i = 0; i < 50; i++) {
		ch = getch();
		if (ch != 13) {
			password[i] = ch;
			ch = '*';
			printf("\t"
            "%c", ch);
		}
		else
			break;
        }
        
        fptr = fopen(username, "a+");

    if (fptr == NULL) {
        printf("\n\t!!!ERROR!!!\n\tPlease create account: \n");
        return 1;
    }
    printf("\n\tPLEASE WAIT....\n\n\tYOUR DATA IS PROCESSING..........................\n\n");
	for (i = 0; i < 200000000; i++) {
		i++;
		i--;
	}

    printf("\t**************************Your Account Details4 Fetched Successfully****************************\n");

printf("\t*****************Your Account Info*******************\n");
    
    while ((che = fgetc(fptr)) != EOF) {
        printf("%c", che);
    }
 

    fclose(fptr);
    int emoney=3000,checkbalance,currentbalance;
    
    printf("\tPlease Choose an Option\n\t1.Check Balance\n\t2.Print Statement\n\t3.Deposite Money\n\t4.Withdraw Money\n\t5.Send Money\n");
    scanf("%d",&checkbalance);
    
        switch (checkbalance)
        {
        case 1:
    
        printf("\tBalance=>%d",emoney);
           break;
        case 2:
        printf("\t\t<------------------------------->Statement<---------------------------------->\n\n");
        printf("\tAmmount\t\t\tDate\t\t\tTransaction ID\t\tSender Name\n\t%d\t\t2021/07/05-05:34\t\t763939434434\t\t\tSusant Mishra\n",emoney);
        break;
        case 3:
        printf("\tDeposited Money\n");
        scanf("%d",&depmoney);
        totalmoneywith=depmoney+emoney;
        printf("Current Balance=>%d\n",totalmoneywith);
        break;
        case 4:
        printf("\t<------------->Withdraw<-------------->\n");
        printf("\tEnter Ammount=>");
        scanf("%d",&withsmoney);
        withdrawmoney=emoney-withsmoney;
        printf("\tCureent balance => %d\n",withdrawmoney);
        case 5:
        printf("\t************Send Money******************\n");
        printf("\tEnter Ammount\n");
        scanf("%d",&sendmoney);
        
        printf("\tAccount Holder Name\n");
        scanf("%s",accholdername);
        
        printf("\tAccount Number\n");
        scanf("%s",&accnumber);
        fptr=fopen(username,"a");
    srand(time(NULL)); // Seed the random number generator

    // Generate a random number with more digits
    long long int big_random_number = 
        ((long long int)rand() << 25) | rand();
         time(&currentTime);
    timeInfo = localtime(&currentTime);

    // Format the date and time
    strftime(formattedTime, sizeof(formattedTime), "%Y-%m-%d %H:%M:%S", timeInfo);
fprintf(fptr,"\t*****************************************Transation Details**************************************\n");
        fprintf(fptr,"\tAmmount\t\tAccount Holder Name\t\tAcount Number\t\tTransaction Id\t\tDate\n\n\t%d\t\t\t%s\t\t\t%s\t\t%11d\t\t%s\n\n\n",sendmoney,accholdername,accnumber,big_random_number,formattedTime);
       currentbalance=emoney-sendmoney;
       fprintf(fptr,"\tCurrent Balance:=>%d\n",currentbalance);
       int y;
	
	
	printf("\n\tPLEASE WAIT....\n\n\tYOUR TRANSACTION IS PROCESSING..........................\n\n");
	for (y = 0; y < 200000000; y++) {
		y++;
		y--;
	}
printf("\n\t*****************************************Transation Details**************************************\n");
        printf("\tAmmount\t\tAccount Holder Name\t\tAcount Number\t\tTransaction Id\t\tDate\n\n\t%d\t\t\t%s\t\t\t%s\t\t%11d\t\t%s\n\n\n",sendmoney,accholdername,accnumber,big_random_number,formattedTime);
      
       printf("\tCurrent Balance:=>%d\n",currentbalance);
        
        fclose(fptr);
        default:
       
            break;
        }
        break;
        
    

        case 3:
        printf("##########Thanks For Usisng Our Service's##########");
        exit(3);
    
       
   return 1;
    }
    
    
}

