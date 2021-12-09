#include <stdio.h>

#include <iostream>

#include <conio.h>

#include <stdlib.h>

#include <string.h>

#include <windows.h>

using namespace std;

int main();
class Credential {

  public:

    void payment_methods() {
      system("cls");
      printf("\n=============================================================\n");
      printf("\n\n\t\tPAYMENT METHODS AND DISCOUNTS\n\n");
      printf("\n\tA- Fitness / Normal Membership : 1 Mounth (5 days a week)- 20$");
      printf("\n\tB- Fitness / Normal Membership : 1 Mounth (3 days a week)- 15$");
      printf("\n\tC- Fitness / Student Discount : 1 Mounth (3 days a week)- 10$\n");
      printf("\n\tD- Swimming / Normal Membership : 1 Mounth (5 days a week)- 25$");
      printf("\n\tE- Swimming / Normal Membership : 1 Mounth (3 days a week)- 20$");
      printf("\n\tF- Swimming / Student Discount : 1 Mounth (3 days a week)- 15$\n");
      printf("\n\tG- Fitness and Swimming / Normal Membership : 1 Mounth (5 days a week)- 40$");
      printf("\n\tH- Fitness and Swimming / Normal Membership : 1 Mounth (3 days a week)- 30$");
      printf("\n\tI- Fitness and Swimming / Student Discount : 1 Mounth (3 days a week)- 20$");
      printf("\n\n=============================================================\n\n");
      printf("Press any key to return to main menu..\n");
      getch();
      system("cls");
      main();
    }

  void signupFunction() {
    string username;
    string password;
    system("cls");

    printf("\nChoose an username : \n");
    scanf("%s", & username);
    printf("Choose a numeric password : \n"),
      scanf("%s", & password);

    printf("\n ***Your account ready to use. Please go back.*** \n");

    loginFunction();
  }

  void loginFunction() {
    system("cls");
    char username[200] = "niyor";
    char password[200] = "1234";
    char userName[200];
    char passWord[200];

    tekrar:
      printf("\nPlease enter username: \t");
    scanf("%s", & userName);
    printf("\nPlease enter numeric password : ");
    scanf("%s", & passWord);

    if (strcmp(username, userName) == 0 && strcmp(password, passWord) == 0) {

      printf("\n\nLogin successful. Press any key to continue.\n");
    
      getch();
      x:
        system("cls");
      int sec2;

      printf("\n=============================================================\n");
      printf("\n\n\t\tMEMBER MANAGEMENT");
      printf("\n\n\tPlease choose what do you want : ");
      printf("\n\t1.Delete a member.");
      printf("\n\t2.View list of all members.");
      printf("\n\n=============================================================\n\n");

      printf("\n\n\tENTER YOUR CHOICE:\t");
      scanf("%d", & sec2);

      if (sec2 == 2) 
      {
        system("cls");
        FILE * file1;
        char character;
        file1 = fopen("MemberList.txt", "r");

        if (file1 != NULL) {
          character = fgetc(file1);
          while (character != EOF) {
            printf("%c", character);
            character = fgetc(file1);
          }
        }
        
        else {
          printf("\nFile does not exist. Try Again.");
          goto x;
        }
        fclose(file1);

        printf("\nPress any key to return to the main menu.");
        getch();
        system("cls");
        main();
      } else if (sec2 == 1) 
      {
        FILE * file1;
        char name[30], surename[30], branchs[30], options[10];
        char mem[20], adrs[25], id[30];
        int ag, cono, count = 0;
        FILE * fp;
        file1 = fopen("Memberlist.txt", "r");
        fp = fopen("NewMemberlist.txt", "w");
        printf("\nEnter the name of member: \n");
        getchar();
        gets(mem);

        while (!feof(file1)) {
          fscanf(file1, "%s%s%s", & name, & surename, & branchs);
          if (strcmp(name, mem) != 0) {
            fprintf(fp, "%s %s %s\n", name, surename, branchs);

          } else if (strcmp(name, mem) == 0) {
            printf("\nDetails of the deleted member is:\n");
            printf("Name : %s\nSurname : %s\nBranch : %s\n", name, surename, branchs);
          } else {
            printf("\nPlease enter the correct details\n");
          }

        }

        fclose(file1);
        fclose(fp);
        file1 = fopen("Memberlist.txt", "w");
        fp = fopen("NewMemberlist.txt", "r");
        while (!feof(fp)) {
          fscanf(fp, "%s %s %s", & name, & surename, & branchs);
          fprintf(file1, "%s %s %s\n", name, surename, branchs);
        }
        fclose(fp);
        fclose(file1);
      }
      getch();
      system("cls");
      main();

    } else {
      printf("\n\nWrong username or password.\nPlease try again or sign up.\n");
      goto tekrar;

    }
  }

};

class Member {
  public:

    void new_member() {
      system("cls");

      
      char name[30], surename[30], address[30], paymentMethod[10];

      printf("\nEnter Name : \t");
      scanf("%s", name);
      printf("\nEnter Surname : ");
      scanf("%s", surename);
      printf("\nEnter Adress: ");
      scanf("%s", address);
      printf("\n\nChoose a payment method : ");
      printf("\n=============================================================\n");
      printf("\n\n\t\tPAYMENT METHODS AND DISCOUNTS\n\n");
      printf("\n\tA- Fitness / Normal Membership : 1 Month (5 days a week)- 20$");
      printf("\n\tB- Fitness / Normal Membership : 1 Month (3 days a week)- 15$");
      printf("\n\tC- Fitness / Student Discount : 1 Month (3 days a week)- 10$\n");
      printf("\n\tD- Swimming / Normal Membership : 1 Month (5 days a week)- 25$");
      printf("\n\tE- Swimming / Normal Membership : 1 Month (3 days a week)- 20$");
      printf("\n\tF- Swimming / Student Discount : 1 Month (3 days a week)- 15$\n");
      printf("\n\tG- Fitness and Swimming / Normal Membership : 1 Month (5 days a week)- 40$");
      printf("\n\tH- Fitness and Swimming / Normal Membership : 1 Month (3 days a week)- 30$");
      printf("\n\tI- Fitness and Swimming / Student Discount : 1 Mouth (3 days a week)- 20$");
      printf("\n\n=============================================================\n\n");
      printf("Enter the choice with Letter : \t");
      scanf("%s", paymentMethod);

      FILE * f;
      f = fopen("MemberList.txt", "a");
      fprintf(f, "%s %s %s\n", name, surename, address);
      fclose(f);
      printf("\nPress any key to return to the main menu.");
      getch();
      system("cls");
      main();
    }

  //--------------------------------------------------------------------------------------------------------------------------
  void member_management() {
    Credential credential;
    system("cls");
    int choice;

    printf("\n=============================================================\n");
    printf("\n\n\t\tADMINISTRATIVE LOGIN PAGE");
    printf("\n\n\t1.Login to system with username and password.");
    printf("\n\t2.Sign-up to system.");
    printf("\n\n=============================================================\n\n");

    printf("\n\n\tENTER YOUR CHOICE:\t");
    scanf("%d", & choice);

    switch (choice) {
    case 1:
      credential.loginFunction();
      break;

    case 2:
      credential.signupFunction();
      break;

    default:
      printf("\nWrong choice. Please try again.\n");
      break;
    }

  }
};

class Intro {
  public:

    void intro_gym() {
      printf("\n----------------------------------\n");
      printf("|    Gym Management Project  |");
      printf("\n----------------------------------\n");
      printf("|     Made By: Niyor Boruah     |");
      printf("\n----------------------------------\n");
      

      printf("Loading...");
      int j, a;
      for (a = 0; a <= 5; a++) {
        printf(".");
        for (j = 0; j <= 120000000; j++);
      }
      system("cls");
    }

};

class Gym {

  public:

    void workout() {
      int c, u;
      system("cls");
      printf("\n\n\n\n");
      printf("\t ******  BE THE BEAST AND WORK HARD   *******\n\n\n");
      printf("\t ******  ALWAYS HEALTH COMES FIRST   *******\n\n\n");
      printf("\t ******  PRESS ANY KEY TO SELECT THE WORK OUT  *******\n\n\n");
      getch();
      system("cls");

      z:
        printf("\n\n\n\n\n\n");
      printf("\tPRE-WORKOUT EXERCISE ARE COMPLUSORY\n\n\n");
      printf("\t1 : CHEST WORKOUT\n\n");
      printf("\t2 : BACK WORKOUT\n\n");
      printf("\t3 : BICEPS WORKOUT\n\n");
      printf("\t4 : TRICEPS WORKOUT\n\n");
      printf("\t5 : ABS WORKOUT\n\n");
      printf("\t6 : SHOULDER WORKOUT\n\n");
      printf("\t7 : LEGS\n\n");
      printf("\t8 : BACK TO MAIN MENU\n\n");
      printf("\t");
      scanf("%d", & c);
      system("cls");
      switch (c) {
      case 1:
        printf("\n");
        printf("\t PUSH UP:                 3 SETS;       15,12,10 REPS\n\n");
        printf("\t INCLINED BENCH-PRESS:    3 SETS;       15,12,10 REPS\n\n");
        printf("\t FLAT BENCH-PRESS:        3 SETS;       15,12,10 REPS\n\n");
        printf("\t DECLINED BENCH-PRESS:    3 SETS;       15,12,10 REPS\n\n");
        printf("\t INCLIDE DUMBBELL-PRESS:  3 SETS;       15,12,10 REPS\n\n");
        printf("\t FLAT DUMBELL-PRESS:      3 SETS;       15,12,10 REPS\n\n");
        printf("\t DECLINED DUMBELL-PRESS:  3 SETS;       15,12,10 REPS\n\n");
        printf("\t CABLE CROSS:             3 SETS;       15,12,10 REPS\n\n");
        printf("\t SEATED MACHINE FLY:      3 SETS;       15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d", & u);
        if (u == 2) {
          system("cls");
          goto z;
        } else
          break;

      case 2:
        printf("\n");
        printf("\t WIDE GRIP PULL-UP:       3 SETS;        15,12,10 REPS\n\n");
        printf("\t LAT PULL DOWN BACK:      3 SETS;        15,12,10 REPS\n\n");
        printf("\t T-BAR:                   3 SETS;        15,12,10 REPS\n\n");
        printf("\t SEATED RAW:              3 SETS;        15,12,10 REPS\n\n");
        printf("\t PULL DOWN ROW:           3 SETS;        15,12,10 REPS\n\n");
        printf("\t ONR ARM DUMBBELL ROWS:   3 SETS;        15,12,10 REPS\n\n");
        printf("\t BARBELL BENT OVER:       3 SETS;        15,12,10 REPS\n\n");
        printf("\t DEAD LIFT:               3 SETS;        15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d", & u);
        if (u == 2) {
          system("cls");
          goto z;
        } else
          break;

      case 3:
        printf("\n");
        printf("\t SMALL GRIP PULL-UP:       3 SETS;        15,12,10 REPS\n\n");
        printf("\t PREACHER CURLS:           3 SETS;        15,12,10 REPS\n\n");
        printf("\t BARBELL CURLS:            3 SETS;        15,12,10 REPS\n\n");
        printf("\t ONE BY ONE DUMBELL CURL:  3 SETS;        15,12,10 REPS\n\n");
        printf("\t CONCENTRATION CURLS:      3 SETS;        15,12,10 REPS\n\n");
        printf("\t CABLE BICEPS CURLS:       3 SETS;        15,12,10 REPS\n\n");
        printf("\t INCLINED DUMBELL CURLS:   3 SETS;        15,12,10 REPS\n\n");
        printf("\t REVERSE CURLS:            3 SETS;        15,12,10 REPS\n\n");
        printf("\t HAMMER CURLS:             3 SETS;        15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d", & u);
        if (u == 2) {
          system("cls");
          goto z;
        } else
          break;

      case 4:
        printf("\n");
        printf("\t DIAMOND PUSH-UP:               3 SETS;     15,12,10 REPS\n\n");
        printf("\t FLAT BAR TRICEPS EXTENSION:    3 SETS;     15,12,10 REPS\n\n");
        printf("\t BAR TRICEPS EXTENSION:         3 SETS;     15,12,10 REPS\n\n");
        printf("\t ONE ARM DUMBELL PRESS:         3 SETS;     15,12,10 REPS\n\n");
        printf("\t BOTH ARM DUMBELL PRESS:        3 SETS;     15,12,10 REPS\n\n");
        printf("\t KICKBACK:                      3 SETS;     15,12,10 REPS\n\n");
        printf("\t CABLE PUSH DOWN:               3 SETS;     15,12,10 REPS\n\n");
        printf("\t CABLE PUSH OVERHEAD:           3 SETS;     15,12,10 REPS\n\n");
        printf("\t TRICEPS DIPS:                  3 SETS;     15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d", & u);
        if (u == 2) {
          system("cls");
          goto z;
        } else
          break;

      case 5:
        printf("\n");
        printf("\t HANGING LEG RAISE:                             3 SETS;     15,12,10 REPS\n\n");
        printf("\t MACHINE CRUNCH:                                3 SETS;     15,12,10 REPS\n\n");
        printf("\t CABLE PALLOF PRESS:                            3 SETS;     15,12,10 REPS\n\n");
        printf("\t KNEELING CABLE CRUNCH:                         3 SETS;     15,12,10 REPS\n\n");
        printf("\t DECLINE-BENCH CRUNCH WITH MEDICINE BALL:       3 SETS;     15,12,10 REPS\n\n");
        printf("\t EXERCISE BALL PIKE:                            3 SETS;     15,12,10 REPS\n\n");
        printf("\t PLANK:                                                     7,5,3 MINUTES\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d", & u);
        if (u == 2) {
          system("cls");
          goto z;
        } else
          break;

      case 6:
        printf("\n");
        printf("\t BAREBELL FRONT PRESS:           3 SETS;     15,12,10 REPS\n\n");
        printf("\t DUMBELL PRESS:                  3 SETS;     15,12,10 REPS\n\n");
        printf("\t LATERAL RAISES:                 3 SETS;     15,12,10 REPS\n\n");
        printf("\t FRONT PRESS:                    3 SETS;     15,12,10 REPS\n\n");
        printf("\t DUMBELL BENT OVER:              3 SETS;     15,12,10 REPS\n\n");
        printf("\t UPRIGHT ROW:                    3 SETS;     15,12,10 REPS\n\n");
        printf("\t SHRUG:                          3 SETS;     15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d", & u);
        if (u == 2) {
          system("cls");
          goto z;
        } else
          break;

      case 7:
        printf("\n");
        printf("\t SET-UPS:                      3 SETS;      15,12,10 REPS\n\n");
        printf("\t SUMO DUMBELL SQUATS:          3 SETS;      15,12,10 REPS\n\n");
        printf("\t LUNGES DUMBELLS:              3 SETS;      15,12,10 REPS\n\n");
        printf("\t SEATED LEGS CRULS:            3 SETS;      15,12,10 REPS\n\n");
        printf("\t SEATED MACHINE EXTENSIONS:    3 SETS;      15,12,10 REPS\n\n");
        printf("\t STANDING DUMBELL CALF:        3 SETS;      15,12,10 REPS\n\n");
        printf("\t REVERSE LEGS CRULS:           3 SETS;      15,12,10 REPS\n\n");
        printf("\t HEAVY LEG PRESS:              3 SETS;      15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d", & u);
        if (u == 2) {
          system("cls");
          goto z;
        } else
          break;

      case 8:
        main();
        break;

      }
    }

  void rules() {
    system("cls");
    printf("\t\t=============================================================\n");
    printf("\n\t\t                  RULES AND REGULATIONS                 \n");
    printf("\t\t=============================================================\n");
    printf("\n\t1.Do not bring your gym bag or other personal belongings onto the fitness floor.\n");
    printf("\t2.Refrain from yelling, using profanity, banging weights and making loud sounds\n");
    printf("\t3.Do not sit on machines between sets\n");
    printf("\t4.Re-rack weights and return all other equipment and accessories to their proper locations\n");
    printf("\t5.Ask staff to show you how to operate equipment properly so that others are not waiting as you figure it out.\n");
    printf("\t6.Wipe down all equipment after use.\n");
    printf("\t7.Stick to posted time limits on all cardiovascular machines.\n");
    printf("\t8.Do not bring children onto the gym floor. Children must remain in the childcare area.\n");
    printf("\t9.Do not disturb others. Focus on your own workout and allow others to do the same.\n");
    printf("\t10.Before beginning your workout, wash your hands and wipe off any cologne or perfume.\n\n");
    printf("\n\tPRESS ANY KEY TO BACK MAIN MENU\n");
    getch();
    system("cls");
    main();

  }

  void bmi_calculation() {
    system("cls");
    float height, weight, bmi = 0;
    int age;

    printf("\nPlease enter weight (kg): \n");
    scanf("%f", & weight);

    printf("Please enter height (dot m): \n");
    scanf("%f", & height);

    bmi = weight / (height * height);

    if (bmi < 18.50) {
      printf("\n\nYou are below your ideal weight.\n\n");
      printf("The result is : %.2f\n\n", bmi);
    } else if (bmi >= 18.50 && bmi < 24.99) {
      printf("\n\nYour weight is ideal.\n\n");
      printf("The result is : %.2f\n\n", bmi);
    } else if (bmi > 25) {
      printf("\n\nYou are above your ideal weight.\n\n");
      printf("The result is : %.2f\n\n", bmi);
    }

    printf("Press any key to return to the main menu.\n");

    getch();
    system("cls");
    main();
  }

};

class MainMenu {

  Intro intro;
  Member member;
  Credential credential;
  Gym gym;
  public:
    void mainMenu(void) {
      system("COLOR 1F");
      intro.intro_gym();

      // int rakam;
      int list;
      printf("\n=============================================================\n");
      printf("\n\n\t\t  WELCOME TO THE UNDERDOG GYM MANAGEMENT SOFTWARE ");
      printf("\n\n\t1. CREATE A NEW MEMBER");
      printf("\n\t2. MEMBER MANAGEMENT (requires admin login)");
      printf("\n\t3. WORKOUT PROGRAM SUGGESTION");
      printf("\n\t4. RULES AND REGULATIONS");
      printf("\n\t5. REVIEW PAYMENT METHODS & DISCOUNTS");
      printf("\n\t6. MAKE A BMI CALCULATION");
      printf("\n\t7. EXIT");
      printf("\n\n=============================================================\n\n");

      printf("\n\n\tENTER YOUR CHOICE:\t");
      scanf("%d", & list);
      switch (list) {

      case 1:
        member.new_member();
        break;

      case 2:
        member.member_management();
        break;

      case 3:
        gym.workout();
        break;

      case 4:
        gym.rules();
        break;

      case 5:
        credential.payment_methods();
        break;

      case 6:
        gym.bmi_calculation();
        break;

      case 7:
        printf("\n\n\tTHANK YOU,For Use This Software\n");
        exit(0);
        break;

      default:
        printf("\nWrong choise. Please enter the correct numbers to use program.\n");
        break;

      }
    }

};

int main() {
  MainMenu mainMenu;

  mainMenu.mainMenu();

}