#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>

int flag[4][4] = {0,};

int select_flag =0;

int First;
int Second;


GtkWidget *card_1,*card_2,*card_3,*card_4,*card_5,*card_6,*card_7,*card_8;
GtkWidget *card_16,*card_9,*card_10,*card_12,*card_13,*card_14,*card_15,*card_11;

void reaction(int Card_Num);

void Card1_Press()
{
  reaction(1);
}
void Card2_Press()
{
  reaction(2);
}
void Card3_Press()
{
  reaction(3);
}
void Card4_Press()
{
  reaction(4);
}
void Card5_Press()
{
  reaction(5);
}
void Card6_Press()
{
  reaction(6);
}
void Card7_Press()
{
  reaction(7);
}
void Card8_Press()
{
  reaction(8);
}
void Card9_Press()
{
  reaction(9);
}
void Card10_Press()
{
  reaction(10);
}
void Card11_Press()
{
  reaction(11);
}
void Card12_Press()
{
  reaction(12);
}
void Card13_Press()
{
  reaction(13);
}
void Card14_Press()
{
  reaction(14);
}
void Card15_Press()
{
  reaction(15);
}
void Card16_Press()
{
  reaction(16);
}

void button_color_setting(char *color)
{
  GdkColor bg;
  gdk_color_parse( color, &bg);
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

void reaction(int Card_Num)
{
  GdkColor blue;
  gdk_color_parse( "#0000FF", &blue);

  if(select_flag == 0)
  {
        button_color_setting("#FF0000");
  	First = Card_Num;
	select_flag = 1;
  }
  else if(select_flag == 1)	
  {
	Second = Card_Num;
  	printf("Card Number is %d(Frist),%d(Second)\n",First,Second);
  	select_flag = 0;
	if(First == Second)
		printf("같은 카드를 선택하지마시오.\n");
	First = Second = 0;
  }
  
  if(Card_Num == 1)
  {
  	gtk_widget_modify_bg(GTK_WIDGET(card_1),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 2)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_2),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 3)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_3),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 4)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_4),GTK_STATE_NORMAL,&blue);
  }
  else if(Card_Num == 5)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_5),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 6)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_6),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 7)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_7),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 8)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_8),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 9)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_9),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 10)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_10),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 11)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_11),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 12)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_12),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 13)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_13),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 14)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_14),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 15)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_15),GTK_STATE_NORMAL,&blue);
  }

  else if(Card_Num == 16)
  {
	gtk_widget_modify_bg(GTK_WIDGET(card_16),GTK_STATE_NORMAL,&blue);
  }
}


void destroy(GtkWidget *widget, gpointer data)
{
  gtk_main_quit();
}

int main( int argc, char *argv[])
{
  GtkWidget *window;
  GtkWidget *frame;
  GtkWidget *level,*exit,*start;
  GtkWidget *score_label,*score;

  GdkColor red,blue;
  gdk_color_parse( "#FF0000", &red);
  gdk_color_parse( "#0000FF", &blue);


  gtk_init(&argc, &argv);
  //Window
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "CARD GAME");
  gtk_window_set_default_size(GTK_WINDOW(window), 540,505);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  //Frame
  frame = gtk_fixed_new();
  gtk_container_add(GTK_CONTAINER(window),frame);
  //Card 1_array
  card_1 = gtk_button_new_with_label("1");
  gtk_widget_set_size_request(card_1,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_1,5,5);

  card_2 = gtk_button_new_with_label("2");
  gtk_widget_set_size_request(card_2,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_2,90,5);

  card_3 = gtk_button_new_with_label("3");
  gtk_widget_set_size_request(card_3,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_3,175,5);

  card_4 = gtk_button_new_with_label("4");
  gtk_widget_set_size_request(card_4,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_4,260,5);
  
  //Card 2_array
  card_5 = gtk_button_new_with_label("5");
  gtk_widget_set_size_request(card_5,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_5,5,130);

  card_6 = gtk_button_new_with_label("6");
  gtk_widget_set_size_request(card_6,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_6,90,130);

  card_7 = gtk_button_new_with_label("7");
  gtk_widget_set_size_request(card_7,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_7,175,130);

  card_8 = gtk_button_new_with_label("8");
  gtk_widget_set_size_request(card_8,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_8,260,130);
  //Card 3_array
  card_9 = gtk_button_new_with_label("9");
  gtk_widget_set_size_request(card_9,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_9,5,255);

  card_10 = gtk_button_new_with_label("10");
  gtk_widget_set_size_request(card_10,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_10,90,255);

  card_11 = gtk_button_new_with_label("11");
  gtk_widget_set_size_request(card_11,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_11,175,255);

  card_12 = gtk_button_new_with_label("12");
  gtk_widget_set_size_request(card_12,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_12,260,255);
  //Card 4_array
  card_13 = gtk_button_new_with_label("13");
  gtk_widget_set_size_request(card_13,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_13,5,380);

  card_14 = gtk_button_new_with_label("14");
  gtk_widget_set_size_request(card_14,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_14,90,380);

  card_15 = gtk_button_new_with_label("15");
  gtk_widget_set_size_request(card_15,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_15,175,380);

  card_16 = gtk_button_new_with_label("16");
  gtk_widget_set_size_request(card_16,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_16,260,380);


  //Test label
  level = gtk_label_new("LEVEL XX");
  gtk_fixed_put(GTK_FIXED(frame),level,410,60);

  score_label = gtk_label_new("- SCORE- ");
  gtk_fixed_put(GTK_FIXED(frame),score_label,410,120);

  score = gtk_label_new("00000000");
  gtk_fixed_put(GTK_FIXED(frame),score,410,140);
  //option
  start = gtk_button_new_with_label("START");
  gtk_widget_set_size_request(start,120,30);
  gtk_fixed_put(GTK_FIXED(frame),start,380,320);

  exit = gtk_button_new_with_label("EXIT");
  gtk_widget_set_size_request(exit,120,30);
  gtk_fixed_put(GTK_FIXED(frame),exit,380,355);


  //Color_SELECTED
  gtk_widget_modify_bg(GTK_WIDGET(card_1),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_2),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_3),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_4),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_5),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_6),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_7),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_8),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_9),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_10),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_11),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_12),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_13),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_14),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_15),GTK_STATE_SELECTED,&red);
  gtk_widget_modify_bg(GTK_WIDGET(card_16),GTK_STATE_SELECTED,&red);

  button_color_setting("#FF0000");	 


   
  //Widget Show
  gtk_widget_show_all(window);
  g_signal_connect_swapped(G_OBJECT(window), "destroy",
      G_CALLBACK(gtk_main_quit), NULL);
  g_signal_connect(card_1,"clicked",G_CALLBACK(Card1_Press),(gpointer)"1");
  g_signal_connect(card_2,"clicked",G_CALLBACK(Card2_Press),(gpointer)"2");
  g_signal_connect(card_3,"clicked",G_CALLBACK(Card3_Press),(gpointer)"3");
  g_signal_connect(card_4,"clicked",G_CALLBACK(Card4_Press),(gpointer)"4");
  g_signal_connect(card_5,"clicked",G_CALLBACK(Card5_Press),(gpointer)"5");
  g_signal_connect(card_6,"clicked",G_CALLBACK(Card6_Press),(gpointer)"6");
  g_signal_connect(card_7,"clicked",G_CALLBACK(Card7_Press),(gpointer)"7");
  g_signal_connect(card_8,"clicked",G_CALLBACK(Card8_Press),(gpointer)"8");
  g_signal_connect(card_9,"clicked",G_CALLBACK(Card9_Press),(gpointer)"9");
  g_signal_connect(card_10,"clicked",G_CALLBACK(Card10_Press),(gpointer)"10");
  g_signal_connect(card_11,"clicked",G_CALLBACK(Card11_Press),(gpointer)"11");
  g_signal_connect(card_12,"clicked",G_CALLBACK(Card12_Press),(gpointer)"12");
  g_signal_connect(card_13,"clicked",G_CALLBACK(Card13_Press),(gpointer)"13");
  g_signal_connect(card_14,"clicked",G_CALLBACK(Card14_Press),(gpointer)"14");
  g_signal_connect(card_15,"clicked",G_CALLBACK(Card15_Press),(gpointer)"15");
  g_signal_connect(card_16,"clicked",G_CALLBACK(Card16_Press),(gpointer)"16");
  g_signal_connect(exit,"clicked",G_CALLBACK(destroy),(gpointer)"exit");
  g_signal_connect(start,"clicked",G_CALLBACK(destroy),(gpointer)"start");
  gtk_main();

 
  return 0;
}
