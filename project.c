#include <stdio.h>
#include<string.h>
#include <stdlib.h>

void admin();
void add_students();
void view_students();
void update_students();
void delete_students();
void Students();
void Main_Menu();
int choice ;  
char name1[50][50];
char name2[50][50];
int numStudents=0; 
int num;

int main() {
 
while(1){

  // Main Menu 
   Main_Menu();
   
  // Choice Enter  check case number choose : if,elseif or switch
  
switch (choice) //Switch1 Main Menu : Admin,Student,Exit. 
{
  // Choose "1" Admin Menu:
     case 1:
       system("cls");
       admin();
   case 2:
        Students();
      break;
    
    case 3:
      exit(0);
      break;  
    default:
     printf("Invalid Value !!!");
     break;
  }
  
}
    
return 0;
  
}

 // Main_Menu :  
   void Main_Menu(){
       printf("\nLogin As:\n\n1.Admin\n2.Student\n3.Exit\n\n");
      printf("Enter Your Choice:");
        scanf("%d",&choice);
   }
  //admin fun    
    void admin(){
    while(1){
  printf("\n|Logged In as Admin|\n");
  printf("\n1. Add Student Record\n");
    printf("\n2. View All Student Records\n");
    printf("\n3. update Student Record\n");
    printf("\n4. Delete Student Record\n");
    printf("\n5. Main Menu\n");
    printf("\n6. Exit\n");
    printf("\nEnter Choice :");
    scanf("%d",&choice);
         
    // Switch2 Admin Menu 6 Option: Add ,View,Update,Delete,Exit,Main Menu.  
    switch(choice){ 
      //Choose "1" Add Students 
      case 1:
    system("cls");
      add_students();
      system("cls");
        break;
      
      //Choose "2" View Students 
        case 2:
           system("cls");
           view_students();
            break;
            
        case 3:
           system("cls");
           update_students();
           break;
        case 4:
        system("cls");  
    delete_students();
    break; 
    
    case 5:
      system("cls");
        Main_Menu();
        break;
    case 6:
      exit(0);
      break;
      default:
            printf("Invalid Value !!!");
            break;
  }

   

}
}
  
  // add student
  
  void add_students(){
      printf ("Enter The First Name:");
            scanf("%s",name1[numStudents]);
            printf("Enter The Last Name:");
            scanf("%s",name2[numStudents]);
            numStudents++;
  }

// view students

    void view_students(){
  printf("\t\t|Students Record|\t\t\t\n");
            printf("-------------------------------------------\n");
            printf ("Number\t\t\tName\n");
            for(num=0;num<numStudents;num++){
            printf ("%d\t\t\t%s%s\n",num+1,name1[num],name2[num]);
            }
            printf("-------------------------------------------\n");
            
            printf ("1.Back To Admin Menu\n");
            printf("2.Exit\n");
           
            printf("Enter Choice:");
            scanf("%d",&choice);
             if (choice == 1) {
                      system("cls");
                admin();
            } else if (choice == 2) {
                exit(0);
            }
        }
        
        
// update Students
    void update_students(){
        printf("Enter the number of the student you want to update: ");
        scanf("%d", &num);
        num--; // array is 0-indexed

    printf("Enter the new first name: ");
    scanf("%s", name1[num]);
    printf("Enter the new last name: ");
    scanf("%s", name2[num]);
}


//Delete Studentes 
void delete_students() {
    printf("Enter the number of the student you want to delete: ");
    scanf("%d", &num);
    num--; // array is 0-indexed

    //
    for (int i = num; i < numStudents - 1; i++) {
        strcpy(name1[i], name1[i+1]);
        strcpy(name2[i], name2[i+1]);
    }

    // Decrement number of students
    numStudents--;
}

// Students
void Students(){
     printf("\t\t|Students Page|\t\t\nWelcome As Students\t\n\n\n\n");
     printf ("1.Back To Main Menu\n");
     printf("2.Exit\n");
     printf("Enter Choice:");
     scanf("%d",&choice);
     switch (choice){
       case 1:
         Main_Menu();
         break;
        case 2:
          exit(0);
          break;
          
}
}