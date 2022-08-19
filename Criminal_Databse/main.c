#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Database {
    int convict_code;
    char fname[100];
    char lname[100];
    int age;
    char gender[10];
    char weight[20];
    char height[30];
    char haircolor[30];
    char eyecolor[30];
    char crime[100];
    char details[200];
    char court[50];
    char act[40];
    char punishment[80];
    char faddress[100];
    char fir[40];
    char datearr[40];
    struct Database *next;

} *head;

void
insert(int convict_code, char *fname, char *lname, int age, char *gender, char *weight, char *height, char *haircolor,
       char *eyecolor, char *crime, char *details, char *court, char *act, char *punishment, char *faddress, char *fir,
       char *datearr) {

    struct Database *Database = (struct Database *) malloc(sizeof(struct Database));
    Database->convict_code = convict_code;
    strcpy(Database->fname, fname);
    strcpy(Database->lname, lname);
    Database->age = age;
    strcpy(Database->gender, gender);
    strcpy(Database->weight, weight);
    strcpy(Database->height, height);
    strcpy(Database->haircolor, haircolor);
    strcpy(Database->eyecolor, eyecolor);
    strcpy(Database->crime, crime);
    strcpy(Database->details, details);
    strcpy(Database->court, court);
    strcpy(Database->act, act);
    strcpy(Database->punishment, punishment);
    strcpy(Database->faddress, faddress);
    strcpy(Database->fir, fir);
    strcpy(Database->datearr, datearr);
    Database->next = NULL;

    if (head == NULL) {
        head = Database;
    } else {
        Database->next = head;
        head = Database;
    }

}

void update(int convict_code) {

    struct Database *temp = head;
    while (temp != NULL) {

        if (temp->convict_code == convict_code) {
            printf("----Record with Convict Code %d Found !!!----\n\n", convict_code);
            printf("   Enter new convict First name: ");
            fflush(stdin);
            gets(temp->fname);
            printf("   Enter new convict last name: ");
            fflush(stdin);
            gets(temp->lname);
            printf("   Enter new Convict's Conviction: ");
            fflush(stdin);
            gets(temp->punishment);
            printf("   Enter new age: ");
            scanf("%d", &temp->age);
            printf("   Enter new Gender: ");
            fflush(stdin);
            gets(temp->gender);
            printf("   Enter new Weight: ");
            fflush(stdin);
            gets(temp->weight);
            printf("   Enter new Height:");
            fflush(stdin);
            gets(temp->height);
            printf("   Enter new Haircolor: ");
            fflush(stdin);
            gets(temp->haircolor);
            printf("   Enter new Eyecolor: ");
            fflush(stdin);
            gets(temp->eyecolor);
            printf("   Enter updation Crime is: ");
            fflush(stdin);
            gets(temp->crime);
            printf("   Enter updation in Face Details: ");
            fflush(stdin);
            gets(temp->details);
            printf("   Enter updatation ofCourt: ");
            fflush(stdin);
            gets(temp->court);
            printf("   Enter new ACT(under which convicted):");
            fflush(stdin);
            gets(temp->act);
            printf("   Enter new Convict's Conviction: ");
            fflush(stdin);
            gets(temp->punishment);
            printf("   Enter new Complete Address of Police Station: ");
            fflush(stdin);
            gets(temp->faddress);
            printf("   Enter new FIR Number: ");
            fflush(stdin);
            gets(temp->fir);
            printf("   Enter new Date of Arrest: ");
            fflush(stdin);
            gets(temp->datearr);
            printf("   Updation Successful!!!\n");
            return;
        }
        temp = temp->next;

    }
    printf("Convict Name with Convict Code %d is not found !!!\n", convict_code);

}

void Delete(int convict_code) {

    struct Database *temp1 = head;
    struct Database *temp2 = head;
    while (temp1 != NULL) {

        if (temp1->convict_code == convict_code) {

            printf("Record with Convict Code %d Found !!!\n", convict_code);

            if (temp1 == temp2) {
                head = head->next;
                free(temp1);
            } else {
                temp2->next = temp1->next;
                free(temp1);
            }

            printf("Record Successfully Deleted !!!\n");
            return;

        }
        temp2 = temp1;
        temp1 = temp1->next;

    }
    printf("Convict Name with Convict Code %d is not found !!!\n", convict_code);

}

void fordelay(int j) {
    int i, k;
    for (i = 0; i < j; i++)
        k = i;
}

void search_convict_code(int convict_code) {
    int i;
    printf("\n\nSEARCHING");
    for (i = 0; i <= 6; i++) {
        fordelay(100000000);
        printf(". ");
    }
    struct Database *temp = head;
    while (temp != NULL) {
        if (temp->convict_code == convict_code) {
            printf("\n");
            printf("\n----SHOWING THE DETAILS OF CONVICT %s %s----\n", temp->fname, temp->lname);
            printf("   Convict Code: %d\n", temp->convict_code);
            printf("   Convict Name: %s %s\n", temp->fname, temp->lname);
            printf("   Age: %d\n", temp->age);
            printf("   Gender: %s\n", temp->gender);
            printf("   Weight: %s\n", temp->weight);
            printf("   Height: %s\n", temp->height);
            printf("   Hair colour: %s\n", temp->haircolor);
            printf("   Eye colour: %s\n", temp->eyecolor);
            printf("   Convict's Crime: %s\n", temp->crime);
            printf("   Face Details: %s\n", temp->details);
            printf("   Court is: %s\n", temp->court);
            printf("   ACT(under which convicted): %s\n", temp->act);
            printf("   PRISONER'S CONVICTION IS Prisoner's Conviction Is: %s\n", temp->punishment);
            printf("   Complete Address of Police Station: %s\n", temp->faddress);
            printf("   FIR Number: %s\n", temp->fir);
            printf("   Date of Arrested: %s\n\n", temp->datearr);

            return;
        }
        temp = temp->next;
    }
    printf("\n\nConvict Name with Convict Code %d is not found !!!\n", convict_code);
}

void search_first_name(char fname[100]) {
    int i;
    printf("\n\nSEARCHING");
    for (i = 0; i <= 6; i++) {
        fordelay(100000000);
        printf(". ");
    }
    struct Database *temp = head;
    while (temp != NULL) {
        if (stricmp(temp->fname, fname) == 0) {
            printf("\n");
            printf("\n----SHOWING THE DETAILS OF CONVICT %s %s----\n", temp->fname, temp->lname);
            printf("   Convict Code: %d\n", temp->convict_code);
            printf("   Convict Name: %s %s\n", temp->fname, temp->lname);
            printf("   Age: %d\n", temp->age);
            printf("   Gender: %s\n", temp->gender);
            printf("   Weight: %s\n", temp->weight);
            printf("   Height: %s\n", temp->height);
            printf("   Hair colour: %s\n", temp->haircolor);
            printf("   Eye colour: %s\n", temp->eyecolor);
            printf("   Convict's Crime: %s\n", temp->crime);
            printf("   Face Details: %s\n", temp->details);
            printf("   Court is: %s\n", temp->court);
            printf("   ACT(under which convicted): %s\n", temp->act);
            printf("   PRISONER'S CONVICTION IS Prisoner's Conviction Is: %s\n", temp->punishment);
            printf("   Complete Address of Police Station: %s\n", temp->faddress);
            printf("   FIR Number: %s\n", temp->fir);
            printf("   Date of Arrested: %s\n\n", temp->datearr);

            return;
        }
        temp = temp->next;
    }
    printf("\n\nConvict Name with First name: %s :Details not found !!!\n", fname);
}

void search_last_name(char lname[100]) {
    int i;
    printf("\n\nSEARCHING");
    for (i = 0; i <= 6; i++) {
        fordelay(100000000);
        printf(". ");
    }
    struct Database *temp = head;
    while (temp != NULL) {
        if (stricmp(temp->lname, lname) == 0) {
            printf("\n");
            printf("\n----SHOWING THE DETAILS OF CONVICT %s %s----\n", temp->fname, temp->lname);
            printf("   Convict Code: %d\n", temp->convict_code);
            printf("   Convict Name: %s %s\n", temp->fname, temp->lname);
            printf("   Age: %d\n", temp->age);
            printf("   Gender: %s\n", temp->gender);
            printf("   Weight: %s\n", temp->weight);
            printf("   Height: %s\n", temp->height);
            printf("   Hair color: %s\n", temp->haircolor);
            printf("   Eye colour: %s\n", temp->eyecolor);
            printf("   Convict's Crime: %s\n", temp->crime);
            printf("   Face Details: %s\n", temp->details);
            printf("   Court is: %s\n", temp->court);
            printf("   ACT(under which convicted): %s\n", temp->act);
            printf("   PRISONER'S CONVICTION IS Prisoner's Conviction Is: %s\n", temp->punishment);
            printf("   Complete Address of Police Station: %s\n", temp->faddress);
            printf("   FIR Number: %s\n", temp->fir);
            printf("   Date of Arrested: %s\n\n", temp->datearr);

            return;
        }
        temp = temp->next;
    }
    printf("\n\nConvict Name with Last name: %s :Details not found !!!\n", lname);
}

void search_FIR_number(char fir[40]) {
    int i;
    printf("\n\nSEARCHING");
    for (i = 0; i <= 6; i++) {
        fordelay(100000000);
        printf(". ");
    }
    struct Database *temp = head;
    while (temp != NULL) {
        if (stricmp(temp->fir, fir) == 0) {
            printf("\n");
            printf("\n----SHOWING THE DETAILS OF CONVICT %s %s----\n", temp->fname, temp->lname);
            printf("   Convict Code: %d\n", temp->convict_code);
            printf("   Convict Name: %s %s\n", temp->fname, temp->lname);
            printf("   Age: %d\n", temp->age);
            printf("   Gender: %s\n", temp->gender);
            printf("   Weight: %s\n", temp->weight);
            printf("   Height: %s\n", temp->height);
            printf("   Hair colour: %s\n", temp->haircolor);
            printf("   Eye colour: %s\n", temp->eyecolor);
            printf("   Convict's Crime: %s\n", temp->crime);
            printf("   Face Details: %s\n", temp->details);
            printf("   Court is: %s\n", temp->court);
            printf("   ACT(under which convicted): %s\n", temp->act);
            printf("   PRISONER'S CONVICTION IS Prisoner's Conviction Is: %s\n", temp->punishment);
            printf("   Complete Address of Police Station: %s\n", temp->faddress);
            printf("   FIR Number: %s\n", temp->fir);
            printf("   Date of Arrested: %s\n\n", temp->datearr);

            return;
        }
        temp = temp->next;
    }
    printf("\n\nConvict Detail with FIR Number: %s not found !!!\n", fir);
}

void search_eye_color(char eyecolor[30]) {
    int i;
    printf("\n\nSEARCHING");
    for (i = 0; i <= 6; i++) {
        fordelay(100000000);
        printf(". ");
    }
    struct Database *temp = head;
    while (temp != NULL) {
        if (stricmp(temp->eyecolor, eyecolor) == 0) {
            printf("\n");
            printf("\n----SHOWING THE DETAILS OF CONVICT %s %s----\n", temp->fname, temp->lname);
            printf("   Convict Code: %d\n", temp->convict_code);
            printf("   Convict Name: %s %s\n", temp->fname, temp->lname);
            printf("   Age: %d\n", temp->age);
            printf("   Gender: %s\n", temp->gender);
            printf("   Weight: %s\n", temp->weight);
            printf("   Height: %s\n", temp->height);
            printf("   Hair colour: %s\n", temp->haircolor);
            printf("   Eye colour: %s\n", temp->eyecolor);
            printf("   Convict's Crime: %s\n", temp->crime);
            printf("   Face Details: %s\n", temp->details);
            printf("   Court is: %s\n", temp->court);
            printf("   ACT(under which convicted): %s\n", temp->act);
            printf("   PRISONER'S CONVICTION IS Prisoner's Conviction Is: %s\n", temp->punishment);
            printf("   Complete Address of Police Station: %s\n", temp->faddress);
            printf("   FIR Number: %s\n", temp->fir);
            printf("   Date of Arrested: %s\n\n", temp->datearr);


            return;
        }
        temp = temp->next;
    }
    printf("\n\nConvict Detail with Eye Colour: %s not found !!!\n", eyecolor);
}

void search_date_of_arrest(char datearr[40]) {
    int i;
    printf("\n\nSEARCHING");
    for (i = 0; i <= 6; i++) {
        fordelay(100000000);
        printf(". ");
    }
    struct Database *temp = head;
    while (temp != NULL) {
        if (stricmp(temp->datearr, datearr) == 0) {
            printf("\n");
            printf("\n----SHOWING THE DETAILS OF CONVICT %s %s----\n", temp->fname, temp->lname);
            printf("   Convict Code: %d\n", temp->convict_code);
            printf("   Convict Name: %s %s\n", temp->fname, temp->lname);
            printf("   Age: %d\n", temp->age);
            printf("   Gender: %s\n", temp->gender);
            printf("   Weight: %s\n", temp->weight);
            printf("   Height: %s\n", temp->height);
            printf("   Hair colour: %s\n", temp->haircolor);
            printf("   Eye colour: %s\n", temp->eyecolor);
            printf("   Convict's Crime: %s\n", temp->crime);
            printf("   Face Details: %s\n", temp->details);
            printf("   Court is: %s\n", temp->court);
            printf("   ACT(under which convicted): %s\n", temp->act);
            printf("   PRISONER'S CONVICTION IS Prisoner's Conviction Is: %s\n", temp->punishment);
            printf("   Complete Address of Police Station: %s\n", temp->faddress);
            printf("   FIR Number: %s\n", temp->fir);
            printf("   Date of Arrested: %s\n\n", temp->datearr);


            return;
        }
        temp = temp->next;
    }
    printf("\n\nConvict Detail with Arrested Date: %s not found !!!\n", datearr);
}

void search_Crime(char crime[100]) {
    int i;
    printf("\n\nSEARCHING");
    for (i = 0; i <= 6; i++) {
        fordelay(100000000);
        printf(". ");
    }
    struct Database *temp = head;
    while (temp != NULL) {
        if (stricmp(temp->crime, crime) == 0) {
            printf("\n");
            printf("\n----SHOWING THE DETAILS OF CONVICT %s %s----\n", temp->fname, temp->lname);
            printf("   Convict Code: %d\n", temp->convict_code);
            printf("   Convict Name: %s %s\n", temp->fname, temp->lname);
            printf("   Age: %d\n", temp->age);
            printf("   Gender: %s\n", temp->gender);
            printf("   Weight: %s\n", temp->weight);
            printf("   Height: %s\n", temp->height);
            printf("   Hair colour: %s\n", temp->haircolor);
            printf("   Eye colour: %s\n", temp->eyecolor);
            printf("   Convict's Crime: %s\n", temp->crime);
            printf("   Face Details: %s\n", temp->details);
            printf("   Court is: %s\n", temp->court);
            printf("   ACT(under which convicted): %s\n", temp->act);
            printf("   PRISONER'S CONVICTION IS Prisoner's Conviction Is: %s\n", temp->punishment);
            printf("   Complete Address of Police Station: %s\n", temp->faddress);
            printf("   FIR Number: %s\n", temp->fir);
            printf("   Date of Arrested: %s\n\n", temp->datearr);


            return;
        }
        temp = temp->next;
    }
    printf("\n\nConvict Detail with Crime: %s not found !!!\n", crime);
}

void search_court_name(char court[50]) {
    int i;
    printf("\n\nSEARCHING");
    for (i = 0; i <= 6; i++) {
        fordelay(100000000);
        printf(". ");
    }
    struct Database *temp = head;
    while (temp != NULL) {
        if (stricmp(temp->court, court) == 0) {
            printf("\n");
            printf("\n----SHOWING THE DETAILS OF CONVICT %s %s----\n", temp->fname, temp->lname);
            printf("   Convict Code: %d\n", temp->convict_code);
            printf("   Convict Name: %s %s\n", temp->fname, temp->lname);
            printf("   Age: %d\n", temp->age);
            printf("   Gender: %s\n", temp->gender);
            printf("   Weight: %s\n", temp->weight);
            printf("   Height: %s\n", temp->height);
            printf("   Hair colour: %s\n", temp->haircolor);
            printf("   Eye colour: %s\n", temp->eyecolor);
            printf("   Convict's Crime: %s\n", temp->crime);
            printf("   Face Details: %s\n", temp->details);
            printf("   Court is: %s\n", temp->court);
            printf("   ACT(under which convicted): %s\n", temp->act);
            printf("   PRISONER'S CONVICTION IS Prisoner's Conviction Is: %s\n", temp->punishment);
            printf("   Complete Address of Police Station: %s\n", temp->faddress);
            printf("   FIR Number: %s\n", temp->fir);
            printf("   Date of Arrested: %s\n\n", temp->datearr);


            return;
        }
        temp = temp->next;
    }
    printf("\nConvict Detail with Court Name: %s where he/she punished, not found !!!\n", court);
}

void search_hair_color(char haircolor[30]) {
    int i;
    printf("\n\nSEARCHING");
    for (i = 0; i <= 6; i++) {
        fordelay(100000000);
        printf(". ");
    }
    struct Database *temp = head;
    while (temp != NULL) {
        if (stricmp(temp->haircolor, haircolor) == 0) {
            printf("\n");
            printf("\n----SHOWING THE DETAILS OF CONVICT %s %s----\n", temp->fname, temp->lname);
            printf("   Convict Code: %d\n", temp->convict_code);
            printf("   Convict Name: %s %s\n", temp->fname, temp->lname);
            printf("   Age: %d\n", temp->age);
            printf("   Gender: %s\n", temp->gender);
            printf("   Weight: %s\n", temp->weight);
            printf("   Height: %s\n", temp->height);
            printf("   Hair colour: %s\n", temp->haircolor);
            printf("   Eye colour: %s\n", temp->eyecolor);
            printf("   Convict's Crime: %s\n", temp->crime);
            printf("   Face Details: %s\n", temp->details);
            printf("   Court is: %s\n", temp->court);
            printf("   ACT(under which convicted): %s\n", temp->act);
            printf("   PRISONER'S CONVICTION IS Prisoner's Conviction Is: %s\n", temp->punishment);
            printf("   Complete Address of Police Station: %s\n", temp->faddress);
            printf("   FIR Number: %s\n", temp->fir);
            printf("   Date of Arrested: %s\n\n", temp->datearr);


            return;
        }
        temp = temp->next;
    }
    printf("\n\nConvict Detail Hair Colour: %s not found !!!\n", haircolor);
}

void display() {
    struct Database *temp = head;
    if (temp == NULL) {
        printf("Unable to fetch,DATABASE is empty!!!");
    } else {

        while (temp != NULL) {

            printf("   Convict Code: %d\n", temp->convict_code);
            printf("   Convict Name: %s %s\n", temp->fname, temp->lname);
            printf("   Age: %d\n", temp->age);
            printf("   Gender: %s\n", temp->gender);
            printf("   Weight: %s\n", temp->weight);
            printf("   Height: %s\n", temp->height);
            printf("   Hair colour: %s\n", temp->haircolor);
            printf("   Eye colour: %s\n", temp->eyecolor);
            printf("   Convict's Crime: %s\n", temp->crime);
            printf("   Face Details: %s\n", temp->details);
            printf("   Court is: %s\n", temp->court);
            printf("   ACT(under which convicted): %s\n", temp->act);
            printf("   CRIMINAL'S CONVICTION IS: %s\n", temp->punishment);
            printf("   Complete Address of Police Station: %s\n", temp->faddress);
            printf("   FIR Number: %s\n", temp->fir);
            printf("   Date of Arrested: %s\n\n", temp->datearr);

            temp = temp->next;


        }
    }
}

int main() {
    char username[15];
    char password[12];
    head = NULL;

    int choice;
    char fname[100];
    char lname[100];
    int convict_code;
    int age;
    char gender[10];
    char weight[20];
    char height[30];
    char haircolor[30];
    char eyecolor[30];
    char crime[100];
    char details[200];
    char court[50];
    char act[40];
    char punishment[80];
    char faddress[100];
    char fir[40];
    char datearr[40];
    int i;


    printf("\n  ======================  LOGIN PAGE ======================  \n");

    printf(" \n                       ENTER USERNAME:-");
    scanf("%s", &username);

    printf(" \n                       ENTER PASSWORD:-");
    scanf("%s", &password);

    if (strcmp(username, "admin") == 0) {
        if (strcmp(password, "Aakash") == 0) {

            printf("  \n\n\n    WELCOME TO CRIMINAL DATABASE(CD) !! YOUR LOGIN IS SUCCESSFUL");

            printf("\n\n\t====================================\n");
            printf("\t        -CRIMINAL DATABASE-\n");
            printf("\t====================================\n");

            printf("\n\nLOADING");
            for (i = 0; i <= 6; i++) {
                fordelay(100000000);
                printf(". ");
            }
            printf("\n");
            jump:
            printf("\n\n\t::MAIN MENU::\n");

            printf("1. To input Convict details\n2. To search for Convict details\n3. To Delete Convict details\n4. To update Convict details\n5. Display all Convict details\n6. EXIT");
            do {
                printf("\n\nEnter Choice: ");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        printf("\n Enter Convict Code: ");
                        scanf("%d", &convict_code);
                        printf("Enter Convict First Name: ");
                        fflush(stdin);
                        gets(fname);
                        printf("Enter Last Name: ");
                        fflush(stdin);
                        gets(lname);
                        printf("Enter Age: ");
                        scanf("%d", &age);
                        printf("Enter Gender: ");
                        fflush(stdin);
                        gets(gender);
                        printf("Enter Weight: ");
                        fflush(stdin);
                        gets(weight);
                        printf("Enter Height:");
                        fflush(stdin);
                        gets(height);
                        printf("Enter Hair color: ");
                        fflush(stdin);
                        gets(haircolor);
                        printf("Enter Eye color: ");
                        fflush(stdin);
                        gets(eyecolor);
                        printf("Enter Crime is: ");
                        fflush(stdin);
                        gets(crime);
                        printf("Enter Face Details: ");
                        fflush(stdin);
                        gets(details);
                        printf("Enter Court: ");
                        fflush(stdin);
                        gets(court);
                        printf("Enter ACT(under which convicted):");
                        fflush(stdin);
                        gets(act);
                        printf("Enter Convict's Conviction: ");
                        fflush(stdin);
                        gets(punishment);
                        printf("Enter Complete Address of Police Station: ");
                        fflush(stdin);
                        gets(faddress);
                        printf("Enter FIR Number: ");
                        fflush(stdin);
                        gets(fir);
                        printf("Enter Date of Arrest: ");
                        fflush(stdin);
                        gets(datearr);
                        insert(convict_code, fname, lname, age, gender, weight, height, haircolor, eyecolor, crime,
                               details, court, act, punishment, faddress, fir, datearr);
                        break;
                    case 2:
                        printf("\n\n\t::SEARCH MENU::\n");
                        printf("1. Search by Convict Code\n2. Search by Convict First Name\n3. Search by Convict Last Name\n4. Search by FIR Number\n5. Search by Eye Colour\n6. Search by Date of Arrest\n7. Search by Crime\n8. Search by Court Name \n9. Search by Hair Colour\n10. EXIT Search ");
                        do {
                            printf("\n\nEnter Choice for Search: ");
                            scanf("%d", &choice);
                            switch (choice) {
                                case 1:
                                    printf("\n Enter Convict Code: ");
                                    scanf("%d", &convict_code);
                                    search_convict_code(convict_code);
                                    break;
                                case 2:
                                    printf("Enter Convict First Name: ");
                                    fflush(stdin);
                                    gets(fname);
                                    search_first_name(fname);
                                    break;
                                case 3:
                                    printf("Enter Convict Last Name: ");
                                    fflush(stdin);
                                    gets(lname);
                                    search_last_name(lname);
                                    break;
                                case 4:
                                    printf("Enter FIR Number: ");
                                    fflush(stdin);
                                    gets(fir);
                                    search_FIR_number(fir);
                                    break;
                                case 5:
                                    printf("Enter Eye Colour: ");
                                    fflush(stdin);
                                    gets(eyecolor);
                                    search_eye_color(eyecolor);
                                    break;
                                case 6:
                                    printf("Enter Date of Arrest: ");
                                    fflush(stdin);
                                    gets(datearr);
                                    search_date_of_arrest(datearr);
                                    break;
                                case 7:
                                    printf("Enter Crime: ");
                                    fflush(stdin);
                                    gets(crime);
                                    search_Crime(crime);
                                    break;
                                case 8:
                                    printf("Enter Court Name: ");
                                    fflush(stdin);
                                    gets(court);
                                    search_court_name(court);
                                    break;
                                case 9:
                                    printf("Enter Hair Colour: ");
                                    fflush(stdin);
                                    gets(haircolor);
                                    search_hair_color(haircolor);
                                    break;
                                case 10:
                                    goto jump;
                                default:
                                    printf("\nInvalid choice...Try again...\n");
                                    break;
                            }

                        } while (choice != 0);
                        break;
                    case 3:
                        printf("Enter Convict Code to delete: ");
                        scanf("%d", &convict_code);
                        Delete(convict_code);
                        break;
                    case 4:
                        printf("Enter Convict Code to update: ");
                        scanf("%d", &convict_code);
                        update(convict_code);
                        break;
                    case 5:
                        printf("\n\n");
                        printf("----DISPLAYING ALL THE CONVICTS DETAILS-----\n\n");
                        display();
                        break;
                    case 6:
                        exit(EXIT_SUCCESS);

                    default:
                        printf("\nInvalid choice...Try again...\n");
                        break;

                }

            } while (choice != 0);


        } else {
            printf("\nwrong password");
        }
    } else {
        printf("\nUser doesn't exist");
    }

    return 0;

}