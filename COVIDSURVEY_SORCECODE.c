#include <stdio.h>
#include <conio.h>
#include <windows.h>
//#include <curl/curl.h>

int covid_point = 0;
struct profile {
    char firstname[51];
    char lastname[51];
    int age;
    char province[100], district[100];
} info;

void color(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void pos_xy(int x, int y) {
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main() {
    int set[] = {7, 7, 7};
    int counter = 2;
    char key;
    printf("\t|  #####  ####### #     # ### ######      #####  #     # ######  #     # ####### #     #  |\n");
    printf("\t| #     # #     # #     #  #  #     #    #     # #     # #     # #     # #        #   #   |\n");
    printf("\t| #       #     # #     #  #  #     #    #       #     # #     # #     # #         # #    |\n");
    printf("\t| #       #     # #     #  #  #     #     #####  #     # ######  #     # #####      #     |\n");
    printf("\t| #       #     #  #   #   #  #     #          # #     # #   #    #   #  #          #     |\n");
    printf("\t| #     # #     #   # #    #  #     #    #     # #     # #    #    # #   #          #     |\n");
    printf("\t|  #####  #######    #    ### ######      #####   #####  #     #    #    #######    #     |\n\n");
    color(11);
	printf("\t\t\t\t\tCase [189,999,999]\n\n");
	color(10);
	printf("\t\t\t\t\tRecovered [189,999,999]\n\n");
	color(12);
    printf("\t\t\t\t\tDeath [189,999,999]");
    for(int i = 0 ;;) {
        pos_xy(40,16);
        color(set[0]);
        printf("> Start Survey");

        pos_xy(40,18);
        color(set[1]);
        printf("> Covid Statistic");

        pos_xy(40,20);
        color(set[2]);
        printf("> Exit Program");

        key = _getch();

        if(key == 72 && (counter >= 2 && counter <= 3)) {
            counter--;
        } 
        if(key == 80 && (counter >= 1 && counter <= 2)) {
            counter++;
        } 
        if(key == '\r') {
            if(counter == 1) {
            	system("cls");
                info_page();
                break;
            }
            if(counter == 2) {
            	system("cls");
                //info_page();
                break;
            }
            if(counter == 3) {
                PostMessage(GetConsoleWindow(), WM_CLOSE, 0, 0);
            }
        }
        set[0] = 7;
        set[1] = 7;
        set[2] = 7;
        
        if(counter == counter) {
        	set[counter-1] = 14;
		}
    }

    return 0;
}

int info_page() {
    printf("\t|  #####  ####### #     # ### ######      #####  #     # ######  #     # ####### #     #  |\n");
    printf("\t| #     # #     # #     #  #  #     #    #     # #     # #     # #     # #        #   #   |\n");
    printf("\t| #       #     # #     #  #  #     #    #       #     # #     # #     # #         # #    |\n");
    printf("\t| #       #     # #     #  #  #     #     #####  #     # ######  #     # #####      #     |\n");
    printf("\t| #       #     #  #   #   #  #     #          # #     # #   #    #   #  #          #     |\n");
    printf("\t| #     # #     #   # #    #  #     #    #     # #     # #    #    # #   #          #     |\n");
    printf("\t|  #####  #######    #    ### ######      #####   #####  #     #    #    #######    #     |\n\n");
    printf("\t|Please enter your information below.\n");
    printf("\n\t\tFirst Name : ");
    scanf("%s", &info.firstname);
    printf("\n\t\tLast Name : ");
    scanf("%s", &info.lastname);
    printf("\n\t\tAge : ");
    scanf("%d", &info.age);
    printf("\n\t\tProvince : ");
    scanf("%s", &info.province);
    printf("\n\t\tDistrict : ");
    scanf("%s", &info.district);
    sleep(1);
    system("cls");
    question_page();
}

int question_page() {
	
	int set[] = {10, 12};
    int counter = 2;
    char key;
    char question[][1024] = {
		"Do you have a history of traveling to a foreign country or district that had the coronavirus infection (COVID-19) in the previous 14 days?",
		"Are you in close contact with people from areas where the ongoing Coronavirus Disease (COVID-19) is reported?",
		"Do you have a close history of or have contact with patients eligible or confirmed by the Coronavirus 2019 (COVID-19)?",
		"Did you or someone close to an event where there were more than 100 people in the previous 14 days?",
		"Do you have fever (Temp 37.5 Celcius) ?",
		"Do you have cough ?",
		"Do you have runny nose ?",
		"Do you have fast breath or hardly breath ?",
		"Do you have anosmia (don't smell anything)"
	};
	int question_point[] = {
		20,
		20,
		30,
		40,
		20,
		20,
		30,
		50
	};
    int num_question = 0;
    
    
	for(int i = 0 ;;) {
		
		pos_xy(0, 0);
		color(7);
		printf("\t|  #####  ####### #     # ### ######      #####  #     # ######  #     # ####### #     #  |\n");
	    printf("\t| #     # #     # #     #  #  #     #    #     # #     # #     # #     # #        #   #   |\n");
	    printf("\t| #       #     # #     #  #  #     #    #       #     # #     # #     # #         # #    |\n");
	    printf("\t| #       #     # #     #  #  #     #     #####  #     # ######  #     # #####      #     |\n");
	    printf("\t| #       #     #  #   #   #  #     #          # #     # #   #    #   #  #          #     |\n");
	    printf("\t| #     # #     #   # #    #  #     #    #     # #     # #    #    # #   #          #     |\n");
	    printf("\t|  #####  #######    #    ### ######      #####   #####  #     #    #    #######    #     |\n\n");
		
		pos_xy(12,8);
		color(7);
		printf("\n\tQ | %s\n", question[num_question]);	
        pos_xy(12,12);
        color(set[0]);
        printf("> True");

        pos_xy(12,14);
        color(set[1]);
        printf("> False");

        key = _getch();
        if(key == 72 && (counter == 2)) {
            counter--;
        } 
        if(key == 80 && (counter == 1)) {
            counter++;
        } 
        if(key == '\r') {
            if(counter == 1) {
            	covid_point += question_point[num_question];
            	system("cls");
            	if(num_question == 8) {
            		sleep(1);
            		result_page();
				} else {
					num_question++;
				}
            }
            if(counter == 2) {
            	system("cls");
            	if(num_question == 8) {
            		sleep(1);
            		result_page();
				} else {
					num_question++;
				}
            }
        }
        set[0] = 10;
        set[1] = 12;
        if(counter == 1) {
            set[0] = 15;
        }
        if(counter == 2) {
            set[1] = 15;
        }
    }
}

int result_page() {
	int set[] = {7, 7, 7};
    int counter = 2;
    char key;
	for(int i = 0 ;;) {
		
		pos_xy(0, 0);
		color(7);
		printf("\t|  #####  ####### #     # ### ######      #####  #     # ######  #     # ####### #     #  |\n");
	    printf("\t| #     # #     # #     #  #  #     #    #     # #     # #     # #     # #        #   #   |\n");
	    printf("\t| #       #     # #     #  #  #     #    #       #     # #     # #     # #         # #    |\n");
	    printf("\t| #       #     # #     #  #  #     #     #####  #     # ######  #     # #####      #     |\n");
	    printf("\t| #       #     #  #   #   #  #     #          # #     # #   #    #   #  #          #     |\n");
	    printf("\t| #     # #     #   # #    #  #     #    #     # #     # #    #    # #   #          #     |\n");
	    printf("\t|  #####  #######    #    ### ######      #####   #####  #     #    #    #######    #     |\n\n");
		
		pos_xy(35,10);
        color(7);
        printf("> Result : %s You are infected !!!", info.firstname);
		
		
        pos_xy(40,16);
        color(set[0]);
        printf("> Back to Main Menu");

        pos_xy(40,18);
        color(set[1]);
        printf("> Exit Program");

        key = _getch();

        if(key == 72 && (counter == 2)) {
            counter--;
        } 
        if(key == 80 && (counter == 1)) {
            counter++;
        } 
        if(key == '\r') {
            if(counter == 1) {
            	system("cls");
            	main();
            	break;
            }
            if(counter == 2) {
                PostMessage(GetConsoleWindow(), WM_CLOSE, 0, 0);
            }
        }
        set[0] = 7;
        set[1] = 7;
        set[2] = 7;
        if(counter == counter) {
            set[counter] = 14;
        }
    }
}
