#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void reaction(int Card_Num,char *Card);
void button_color_setting(char *color);
void button_disable(int first,int second);


char *card[16] = { "1","1","2","2","3","3","4","4","5","5","6","6","7","7","8","8" };
int pick[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
char *array[4][4] = { 0, };
int first_num,second_num;
GtkWidget *card_1,*card_2,*card_3,*card_4,*card_5,*card_6,*card_7,*card_8;
GtkWidget *card_16,*card_9,*card_10,*card_12,*card_13,*card_14,*card_15,*card_11;
GtkWidget *window;
GtkWidget *frame;
GtkWidget *level,*start,*Exit;
GdkColor Rcolor[16];
char *CardNumber;
char *First;
char *Second;
char *data[8] = {"1","2","3","4","5","6","7","8"};
char *Cardcolor[8]={"#FF0000","#00FFFF","#BF00FF","#0000FF","#00FF00","#FFFF00","#FF8000","#FF00BF"};
int answer_flag[16] ={0,};
int card_data[4][4] = {0,};
GdkColor Rcolor[16];
int select_flag =0;
char *CardNumber;

void destroy(GtkWidget *widget, gpointer data)
{
  gtk_main_quit();
}

void reaction(int Card_Num,char *Card)
{


  if(select_flag == 0)
  {
	button_color_setting("#000000");
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
		button_disable(first_num,second_num);
	}
        else
		printf("Fail..\n");
	First = Second = "0";
  }
  
  if(Card_Num == 0)
  {
  	gtk_widget_modify_bg(GTK_WIDGET(card_1),GTK_STATE_NORMAL,&Rcolor[0]);
  }
  else if(Card_Num == 1)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_2),GTK_STATE_NORMAL,&Rcolor[1]);
  }
  else if(Card_Num == 2)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_3),GTK_STATE_NORMAL,&Rcolor[2]);
  }
  else if(Card_Num == 3)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_4),GTK_STATE_NORMAL,&Rcolor[3]);
  }
  else if(Card_Num == 4)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_5),GTK_STATE_NORMAL,&Rcolor[4]);
  }
  else if(Card_Num == 5)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_6),GTK_STATE_NORMAL,&Rcolor[5]);
  }
  else if(Card_Num == 6)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_7),GTK_STATE_NORMAL,&Rcolor[6]);
  }
  else if(Card_Num == 7)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_8),GTK_STATE_NORMAL,&Rcolor[7]);
  }
  else if(Card_Num == 8)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_9),GTK_STATE_NORMAL,&Rcolor[8]);
  }
  else if(Card_Num == 9)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_10),GTK_STATE_NORMAL,&Rcolor[9]);
  }
  else if(Card_Num == 10)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_11),GTK_STATE_NORMAL,&Rcolor[10]);
  }
  else if(Card_Num == 11)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_12),GTK_STATE_NORMAL,&Rcolor[11]);
  }
  else if(Card_Num == 12)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_13),GTK_STATE_NORMAL,&Rcolor[12]);
  }
  else if(Card_Num == 13)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_14),GTK_STATE_NORMAL,&Rcolor[13]);
  }
  else if(Card_Num == 14)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_15),GTK_STATE_NORMAL,&Rcolor[14]);
  }
  else if(Card_Num == 15)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_16),GTK_STATE_NORMAL,&Rcolor[15]);
  }
}

void Random_Setting()
{
	int i, j, temp;

	srand(time(NULL));

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			while (1)
			{
				temp = rand() % 16;
				if (pick[temp] == 1)
				{
					array[i][j] = card[temp];
					pick[temp] = 0;
					break;
				}
			}
		}
	}
	return ;
}


void Window_Setting()
{
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "CARD GAME");
  gtk_window_set_default_size(GTK_WINDOW(window), 345,505);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  //Frame
  frame = gtk_fixed_new();
  gtk_container_add(GTK_CONTAINER(window),frame);
}

void Card_Setting()
{
  card_1 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_1,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_1,5,5);

  card_2 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_2,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_2,90,5);

  card_3 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_3,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_3,175,5);

  card_4 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_4,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_4,260,5);
  
  //Card 2_array
  card_5 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_5,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_5,5,130);

  card_6 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_6,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_6,90,130);

  card_7 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_7,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_7,175,130);

  card_8 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_8,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_8,260,130);
  //Card 3_array
  card_9 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_9,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_9,5,255);

  card_10 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_10,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_10,90,255);

  card_11 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_11,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_11,175,255);

  card_12 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_12,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_12,260,255);
  //Card 4_array
  card_13 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_13,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_13,5,380);

  card_14 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_14,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_14,90,380);

  card_15 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_15,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_15,175,380);

  card_16 = gtk_button_new_with_label("?");
  gtk_widget_set_size_request(card_16,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_16,260,380);
}

void Label_Setting()
{
  //option
  start = gtk_button_new_with_label("START");
  gtk_widget_set_size_request(start,120,30);
  gtk_fixed_put(GTK_FIXED(frame),start,380,320);

  Exit = gtk_button_new_with_label("EXIT");
  gtk_widget_set_size_request(Exit,120,30);
  gtk_fixed_put(GTK_FIXED(frame),Exit,380,355);
}
char *RandomColor(char *Card)
{
	int i=0;
	for(i=0;i<8;i++)
	{
		if(strcmp(Card,data[i]) == 0)
		{
			return Cardcolor[i];
		}	
	}
	return NULL;
}


void button_select_color()
{

  int i,j;
  for(i=0;i<4;i++)
  {
	for(j=0;j<4;j++)
	{
  		gdk_color_parse(RandomColor(array[i][j]), &Rcolor[(i*4)+j]);
  	}
  }
  gtk_widget_modify_bg(GTK_WIDGET(card_1),GTK_STATE_SELECTED,&Rcolor[0]);
  gtk_widget_modify_bg(GTK_WIDGET(card_2),GTK_STATE_SELECTED,&Rcolor[1]);
  gtk_widget_modify_bg(GTK_WIDGET(card_3),GTK_STATE_SELECTED,&Rcolor[2]);
  gtk_widget_modify_bg(GTK_WIDGET(card_4),GTK_STATE_SELECTED,&Rcolor[3]);
  gtk_widget_modify_bg(GTK_WIDGET(card_5),GTK_STATE_SELECTED,&Rcolor[4]);
  gtk_widget_modify_bg(GTK_WIDGET(card_6),GTK_STATE_SELECTED,&Rcolor[5]);
  gtk_widget_modify_bg(GTK_WIDGET(card_7),GTK_STATE_SELECTED,&Rcolor[6]);
  gtk_widget_modify_bg(GTK_WIDGET(card_8),GTK_STATE_SELECTED,&Rcolor[7]);
  gtk_widget_modify_bg(GTK_WIDGET(card_9),GTK_STATE_SELECTED,&Rcolor[8]);
  gtk_widget_modify_bg(GTK_WIDGET(card_10),GTK_STATE_SELECTED,&Rcolor[9]);
  gtk_widget_modify_bg(GTK_WIDGET(card_11),GTK_STATE_SELECTED,&Rcolor[10]);
  gtk_widget_modify_bg(GTK_WIDGET(card_12),GTK_STATE_SELECTED,&Rcolor[11]);
  gtk_widget_modify_bg(GTK_WIDGET(card_13),GTK_STATE_SELECTED,&Rcolor[12]);
  gtk_widget_modify_bg(GTK_WIDGET(card_14),GTK_STATE_SELECTED,&Rcolor[13]);
  gtk_widget_modify_bg(GTK_WIDGET(card_15),GTK_STATE_SELECTED,&Rcolor[14]);
  gtk_widget_modify_bg(GTK_WIDGET(card_16),GTK_STATE_SELECTED,&Rcolor[15]);
}

void button_color_setting(char *color)
{
  GdkColor bg;
  gdk_color_parse(color,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_1),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_2),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_3),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_4),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_5),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_6),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_7),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_8),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_9),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_10),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_11),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_12),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_13),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_14),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_15),GTK_STATE_NORMAL,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_16),GTK_STATE_NORMAL,&bg);
}


void button_disable(int first,int second)
{
  if(first == 0 || second == 0)
	gtk_widget_set_sensitive (card_1,0); 
  if(first == 1 || second == 1)
	gtk_widget_set_sensitive (card_2,0); 
  if(first == 2 || second == 2)
	gtk_widget_set_sensitive (card_3,0); 
  if(first == 3 || second == 3)
	gtk_widget_set_sensitive (card_4,0); 
  if(first == 4 || second == 4)
	gtk_widget_set_sensitive (card_5,0); 
  if(first == 5 || second == 5)
	gtk_widget_set_sensitive (card_6,0); 
  if(first == 6 || second == 6)
	gtk_widget_set_sensitive (card_7,0); 
  if(first == 7 || second == 7)
	gtk_widget_set_sensitive (card_8,0); 
  if(first == 8 || second == 8)
	gtk_widget_set_sensitive (card_9,0); 
  if(first == 9 || second == 9)
	gtk_widget_set_sensitive (card_10,0); 
  if(first == 10 || second == 10)
	gtk_widget_set_sensitive (card_11,0); 
  if(first == 11 || second == 11)
	gtk_widget_set_sensitive (card_12,0); 
  if(first == 12 || second == 12)
	gtk_widget_set_sensitive (card_13,0); 
  if(first == 13 || second == 13)
	gtk_widget_set_sensitive (card_14,0); 
  if(first == 14 || second == 14)
	gtk_widget_set_sensitive (card_15,0); 
  if(first == 15 || second == 15)
	gtk_widget_set_sensitive (card_16,0); 
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












