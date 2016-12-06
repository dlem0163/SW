#include "Header.h"
#include <string.h>

int card_data[4][4] = {0,};
char *data[8] = {"1","2","3","4","5","6","7","8"};
int answer_flag[16] ={0,};
int select_flag =0;
int first_num,second_num;
char *First;
char *Second;
char *CardNumber;
GdkColor CardColor[8];
char *Cardcolor[8]={"#FF0000","F000000","#BF00FF","0000FF","00FF00","#FFFF00","FF8000","FF00BF"};


GtkWidget *card_1,*card_2,*card_3,*card_4,*card_5,*card_6,*card_7,*card_8;
GtkWidget *card_16,*card_9,*card_10,*card_12,*card_13,*card_14,*card_15,*card_11;
GtkWidget *window;
GtkWidget *frame;
GtkWidget *level,*start,*Exit;
GdkColor action_button,select_button,normal_button;

void reaction(int Card_Num,char *Card)
{
  GdkColor blue;
  gdk_color_parse( "#0000FF", &blue);

  if(select_flag == 0)
  {
        button_color_setting("#FF0000");
  	First = Card;
	first_num = Card_Num;
	select_flag = 1;
  }
  else if(select_flag == 1)	
  {
	Second = Card;
	second_num = Card_Num;
  	printf("Card Number is %s(Frist),%s(Second)\n",First,Second);
  	select_flag = 0;
	if(strcmp(First,Second) == 0)
	{
		printf("Answer!!\n");
		answer_flag[first_num] = 1;
		answer_flag[second_num] = 1;
		for(int i=0;i<16;i++)
		{
			printf("flag is %d\n",answer_flag[i]);
		}
	}
        else
		printf("Fail..\n");
	First = Second = "0";
  }
  
  if(Card_Num == 0)
  {
  	gtk_widget_modify_bg(GTK_WIDGET(card_1),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 1)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_2),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 2)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_3),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 3)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_4),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 4)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_5),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 5)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_6),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 6)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_7),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 7)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_8),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 8)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_9),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 9)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_10),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 10)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_11),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 11)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_12),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 12)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_13),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 13)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_14),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 14)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_15),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 15)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_16),GTK_STATE_NORMAL,&blue);
  }
}
void Card1_Press()
{
  CardNumber = array[0][0];
  reaction(0,CardNumber);
}
void Card2_Press()
{
  CardNumber = array[0][1];
  reaction(1,CardNumber);
}
void Card3_Press()
{
  CardNumber = array[0][2];
  reaction(2,CardNumber);
}
void Card4_Press()
{
  CardNumber = array[0][3];
  reaction(3,CardNumber);
}
void Card5_Press()
{
  CardNumber = array[1][0];
  reaction(4,CardNumber);
}
void Card6_Press()
{
  CardNumber = array[1][1];
  reaction(5,CardNumber);
}
void Card7_Press()
{
  CardNumber = array[1][2];
  reaction(6,CardNumber);
}
void Card8_Press()
{
  CardNumber = array[1][3];
  reaction(7,CardNumber);
}
void Card9_Press()
{
  CardNumber = array[2][0];
  reaction(8,CardNumber);
}
void Card10_Press()
{
  CardNumber = array[2][1];
  reaction(9,CardNumber);
}
void Card11_Press()
{
  CardNumber = array[2][2];
  reaction(10,CardNumber);
}
void Card12_Press()
{
  CardNumber = array[2][3];
  reaction(11,CardNumber);
}
void Card13_Press()
{
  CardNumber = array[3][0];
  reaction(12,CardNumber);
}
void Card14_Press()
{
  CardNumber = array[3][1];
  reaction(13,CardNumber);
}
void Card15_Press()
{
  CardNumber = array[3][2];
  reaction(14,CardNumber);
}
void Card16_Press()
{
  CardNumber = array[3][3];
  reaction(15,CardNumber);
}



void Widget_Show()
{
  gtk_widget_show_all(window);
  g_signal_connect_swapped(G_OBJECT(window), "destroy",
      G_CALLBACK(gtk_main_quit), NULL);
  g_signal_connect(card_1,"clicked",G_CALLBACK(Card1_Press),NULL);
  g_signal_connect(card_2,"clicked",G_CALLBACK(Card2_Press),NULL);
  g_signal_connect(card_3,"clicked",G_CALLBACK(Card3_Press),NULL);
  g_signal_connect(card_4,"clicked",G_CALLBACK(Card4_Press),NULL);
  g_signal_connect(card_5,"clicked",G_CALLBACK(Card5_Press),NULL);
  g_signal_connect(card_6,"clicked",G_CALLBACK(Card6_Press),NULL);
  g_signal_connect(card_7,"clicked",G_CALLBACK(Card7_Press),NULL);
  g_signal_connect(card_8,"clicked",G_CALLBACK(Card8_Press),NULL);
  g_signal_connect(card_9,"clicked",G_CALLBACK(Card9_Press),NULL);
  g_signal_connect(card_10,"clicked",G_CALLBACK(Card10_Press),NULL);
  g_signal_connect(card_11,"clicked",G_CALLBACK(Card11_Press),NULL);
  g_signal_connect(card_12,"clicked",G_CALLBACK(Card12_Press),NULL);
  g_signal_connect(card_13,"clicked",G_CALLBACK(Card13_Press),NULL);
  g_signal_connect(card_14,"clicked",G_CALLBACK(Card14_Press),NULL);
  g_signal_connect(card_15,"clicked",G_CALLBACK(Card15_Press),NULL);
  g_signal_connect(card_16,"clicked",G_CALLBACK(Card16_Press),NULL);
  g_signal_connect(Exit,"clicked",G_CALLBACK(destroy),(gpointer)NULL);
  g_signal_connect(start,"clicked",G_CALLBACK(destroy),(gpointer)NULL);
  gtk_main();
}





int main( int argc, char *argv[])
{
  int i,j;
  GdkColor red,blue;
  gdk_color_parse( "#FF0000", &red);
  gdk_color_parse( "#0000FF", &blue);

  gtk_init(&argc, &argv);
  Random_Setting();
  //Window
  Window_Setting();
  //Card_Setting
  Card_Setting();
  //Label_Setting
  Label_Setting();
  //Color_SELECTED
  button_select_color("#FF0000");
  button_color_setting("#FF0000");	    
  //Widget Show
  Widget_Show();

 
  return 0;
}
