#include<stdio.h>
#include<conio.h>
#include<string.h>

char ttt[3][3]={'1','2','3','4','5','6','7','8','9'};
int count=0;
char ch, p1[20],p2[20],p;
char checkwin()
{
 if(ttt[0][0]=='X'&& ttt[0][1]=='X'&&ttt[0][2]=='X')
  {

      return 'X';
  }
  else if(ttt[0][0]=='X'&& ttt[1][0]=='X'&&ttt[2][0]=='X')
  {

      return 'X';
  }
  else if(ttt[0][0]=='X'&& ttt[1][1]=='X'&&ttt[2][2]=='X')
  {

      return 'X';
  }
else if(ttt[1][0]=='X'&& ttt[1][1]=='X'&&ttt[1][2]=='X')
  {

      return 'X';
  }
  else if(ttt[2][0]=='X'&& ttt[2][1]=='X'&&ttt[2][2]=='X')
  {

      return 'X';
  }
 else  if(ttt[2][0]=='X'&& ttt[1][1]=='X'&&ttt[0][2]=='X')
  {

      return 'X';
  }
 else  if(ttt[0][1]=='X'&& ttt[1][1]=='X'&&ttt[2][1]=='X')
  {

      return 'X';
  }
else if(ttt[0][2]=='X'&& ttt[1][2]=='X'&&ttt[2][2]=='X')
  {

      return 'X';
  }
  else if(ttt[0][0]=='O'&& ttt[0][1]=='O'&&ttt[0][2]=='O')
  {

      return 'O';
  }
  else if(ttt[0][0]=='O'&& ttt[1][0]=='O'&&ttt[2][0]=='O')
  {

      return 'O';
  }
 else  if(ttt[0][0]=='O'&& ttt[1][1]=='O'&&ttt[2][2]=='O')
  {

      return 'O';
  }
  else if(ttt[1][0]=='O'&& ttt[1][1]=='O'&&ttt[1][2]=='O')
  {

      return 'O';
  }
  else if(ttt[2][0]=='O'&& ttt[2][1]=='O'&&ttt[2][2]=='O')
  {

      return 'O';
  }
 else  if(ttt[2][0]=='O'&& ttt[1][1]=='O'&&ttt[0][2]=='O')
  {

      return 'O';
  }
 else  if(ttt[0][1]=='O'&& ttt[1][1]=='O'&&ttt[2][1]=='O')
  {

      return 'O';
  }
 else if(ttt[0][2]=='O'&& ttt[1][2]=='O'&&ttt[2][2]=='O')
  {

      return 'O';
  }
  else
  {
      return 'n';
  }
  }
void drawboard()
{
    int i,j;
    printf("\n\n\n\n");
    for(i=0;i<3;i++)
    {
        printf("\t\t\t\t|");
        for(j=0;j<3;j++)
        {
            printf("%c |",ttt[i][j]);
        }
        printf("\n\t\t\t\t|--|--|--|\n");
    }


}
void command()
{
    int i=0;
    char ret;
    ret=checkwin();
    while(i<1)
    {
    if(ret=='X')
    {
        printf("\n\t\t\t\t%s win the Match",p1);
        count=0;
        break;
    }
    else if(ret=='O')
    {
        printf("\n\t\t\t\t%s win the Match",p2);
        count=0;
        break;
    }
    else if(ret=='n')
    {
        printf("\n\t\t\t\tMatch draw");
        count=0;
        break;
    }
    i++;
    }
}
void again()
{
char ch;


    printf("\n\n# RETURN MENU (PRESS 1)");
    printf("\n# CONTINUE (PRESS 2)\n.....");
    scanf("%c",&ch);
    if(ch=='1')
    {
      ttt[0][0]='1';
      ttt[0][1]='2';
      ttt[0][2]='3';
      ttt[1][0]='4';
      ttt[1][1]='5';
      ttt[1][2]='6';
      ttt[2][0]='7';
      ttt[2][1]='8';
      ttt[2][2]='9';

        system("cls");
        firstlayout();

    }
    if(ch=='2')
    {
      ttt[0][0]='1';
      ttt[0][1]='2';
      ttt[0][2]='3';
      ttt[1][0]='4';
      ttt[1][1]='5';
      ttt[1][2]='6';
      ttt[2][0]='7';
      ttt[2][1]='8';
      ttt[2][2]='9';

        system("cls");
        drawboard();
        input();
    }

}

void input()
{

    int i,j;
    char ch,p,e;
    while(1)
    {

        count++;
     if(count%2==0)

    {
        printf("\n\n\n\t\t\t%s its your turn.....",p1);
        scanf("%c",&ch);
        fflush(stdin);
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(ttt[i][j]==ch)
                {
                    ttt[i][j]='X';

                }
            }
        }
   }
   else
   {
       printf("\n\n\n\t\t\t%s its your turn.....",p2);
        scanf("%c",&p);
        fflush(stdin);
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(ttt[i][j]==p)
                {
                    ttt[i][j]='O';

                }
            }
        }
   }


(system("cls"));
drawboard();
e=checkwin();
if(e=='X' || e=='O')
{
    command();
    break;
    }
else if(e='n'&& count==9)
{
        command();
    break;
}

    }
again();
}

void firstlayout()
{
    char cp;
    label1:
    printf("\n\n\t\t\t\t\t T I C   T A C  T O E");
printf("\n\n # Start the game (PRESS 1)");
printf("\n # Quit the game (PRESS 2)");
printf("\n # Instraction (PRESS 3)");
printf("\nEnter tour choice:");
scanf("%d",&ch);
switch(ch)
{
    case 1:{
        system("cls");
        printf("\n\n\t\t\t\t\t T I C   T A C  T O E");
        printf("\n\n\n\t\t\t# who will play for player 1 ? Enter your name..\n");
        fflush(stdin);
        printf("\t\t\t.......");
        gets(p1);
        printf("\n\t\t\t%s your sign is X\n",p1);
        printf("\n\t\t\t# who will play for player 2? Enter your name..\n");
        fflush(stdin);
        printf("\t\t\t.......");
        gets(p2);
        printf("\n\t\t\t%s your sign is O\n",p2);
        printf("\n\t\t\t");
        system("pause");
        system("cls");
        drawboard();
        input();

       break;

    }
    case 2:
        {
            system("cls");

            printf("\n\n\t\t\t\t\t T I C   T A C  T O E");
            printf("\n\n\t\t\t# want to quit the game?? (press y/n)\n");
            fflush(stdin);
            printf("\t\t\t");
            scanf("%c",&cp);
            if(cp=='n'|| cp=='N')
            {
                system("cls");
                goto label1;
            }
        }
}
}

int main()
{
firstlayout();
getch();
}
