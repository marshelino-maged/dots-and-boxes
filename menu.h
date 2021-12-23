void print_menu(){
    int i=0,j;
    printf(blue"\n\n\n\t\t\t\t\tWelcome to our game\n\n\t\t\t\t\t  Dots and Boxes\n\n\n\n\n");
    printf(yellow"\t 1 - new game\n \t 2 - load game\n \t 3 - top ten\n \t 4 - exit\n\n \t choose from 1 to 4 : "reset);
    while (1){
        i = scanint();
        if((i==1) || (i==2) || (i==3) || (i==4)){
            break;
        }
        else{
            printf(red"\t ERROR, please enter a number from 1 to 4 : "reset);
        }

    }
    system("cls");
    if(i==1){
        printf(yellow "\n\n\n\n\n\n\n\n\t 1 - Easy \n \t 2 - Medium \n \t 3 - Hard \n \t 4 - return to the main menu \n\t enter number from 1 to 4 : " reset);
        while(1){
            i = scanint();
            if(i==1){
                system("cls");
                printf(yellow"\n\n\n\t 1 - 1 player \n\t 2 - 2 players \n \t please enter a number: "reset);
                while(1){
                    i = scanint();
                    if(i==1){
                        //function to play easy against computer
                        return;
                    }
                    else if(i==2){
                        //function to play easy against your friend
                        return;
                    }
                    else{
                        printf(red"\t ERROR, please enter a number from 1 to 2 : "reset);
                    }
                }
            }
            else if(i==2){
                system("cls");
                printf(yellow"\n\n\n\t 1 - 1 player \n\t 2 - 2 players \n \t please enter a number: "reset);
                while(1){
                    i = scanint();
                    if(i==1){
                        //function to play medium against computer
                        return;
                    }
                    else if(i==2){
                        //function to play medium against your friend
                        return;
                    }
                    else{
                        printf(red"\t ERROR, please enter a number from 1 to 2 : "reset);
                    }
                }
            }
            else if(i==3){
                printf(yellow"\t 1 - 1 player \n\t 2 - 2 players \n \t please enter a number: "reset);
                while(1){
                    i = scanint();
                    if(i==1){
                        //function to play hard against computer
                        return;
                    }
                    else if(i==2){
                        //function to play hard against your friend
                        return;
                    }
                    else{
                        printf(red"\t ERROR, please enter a number from 1 to 2 : "reset);
                    }
                }
            }
            else if(i==4){
                system("cls");
                print_menu();
                }
            else{
                printf(red"\t ERROR, please enter a number from 1 to 4 : "reset);
            }
        }
    }
    else if(i==2){
        printf(yellow "\n\n\n\n\n\n\n\n\t 1 - Load game 1 \n \t 2 - Load game 2 \n \t 3 - Load game 3 \n \t 4 - return to the main menu \n\t Enter number from 1 to 4 : " reset);
        while(1){
            i = scanint();
            if(i==1){
                //load game one
                return;
            }
            else if(i==2){
                //load game two
                return;
            }
            else if(i==3){
                //load game three
                return;
            }
            else if(i==4){
                system("cls");
                print_menu();
            }
            else{
                printf(red"\t ERROR, please enter a number from 1 to 4 : "reset);
            }
        }
    }
    else if(i==3){
        printf(yellow "\n\n\n\n\n\n\n\n\n \t the top 10 are\n");
        printf("\t press enter to return to the main menu:"reset);
        scanint();
        system("cls");
        print_menu();

    }
    else if(i==4){
        exit(0);
    }
    return;
}

