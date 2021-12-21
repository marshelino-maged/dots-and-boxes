int print_menu(){
    int i=0;
    printf(blue"\n\n\n\t\t\t\t\tWelcome to our game\n\n\t\t\t\t\t  Dots and Boxes\n\n\n\n\n");
    printf(yellow"\t 1-new game\n \t 2-load game\n \t 3-top ten\n \t 4-exit\n\n \t choose from 1 to 4 : "reset);
    while(i==0){
        scanf("%d",&i);
        if((i==1) || (i==2) || (i==3) || (i==4)){
            return i;
        }
        else{
            printf(red"\t ERROR, please enter a number from 1 to 4 : "reset);
            i = 0;
        }
    }
}
void print_menu2(int i){
    int j;
    if(i==1){
        printf(blue "\t 1-Easy \n \t 2-Medium \n \t 3-Hard \n\t enter number from 1 to 3 : " reset);
    }
    else if(i==2){
        printf(blue "\t 1-Load game 1 \n \t 2-Load game 2 \n \t 3-Load game 3 \n\t Enter number from 1 to 3 : " reset);
    }
    else if(i==3){
        printf(yellow "\n \t the top 10 are" reset);
    }
    else if(i==4){
        exit(0);
    }
    return;
}
