#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char *card[16] = { "1","1","2","2","3","3","4","4","5","5","6","6","7","7","8","8" };
int pick[16] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
char *array[4][4] = { 0, };

GtkWidget *card_1,*card_2,*card_3,*card_4,*card_5,*card_6,*card_7,*card_8;
GtkWidget *card_16,*card_9,*card_10,*card_12,*card_13,*card_14,*card_15,*card_11;
GtkWidget *window;
GtkWidget *frame;
GtkWidget *level,*start,*Exit;

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

void button_select_color(char *color)
{
  GdkColor bg;
  gdk_color_parse(color,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_1),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_2),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_3),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_4),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_5),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_6),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_7),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_8),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_9),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_10),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_11),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_12),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_13),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_14),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_15),GTK_STATE_SELECTED,&bg);
  gtk_widget_modify_bg(GTK_WIDGET(card_16),GTK_STATE_SELECTED,&bg);
}

void Card_Setting()
{
  card_1 = gtk_button_new_with_label(array[0][0]);
  gtk_widget_set_size_request(card_1,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_1,5,5);

  card_2 = gtk_button_new_with_label(array[0][1]);
  gtk_widget_set_size_request(card_2,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_2,90,5);

  card_3 = gtk_button_new_with_label(array[0][2]);
  gtk_widget_set_size_request(card_3,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_3,175,5);

  card_4 = gtk_button_new_with_label(array[0][3]);
  gtk_widget_set_size_request(card_4,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_4,260,5);
  
  //Card 2_array
  card_5 = gtk_button_new_with_label(array[1][0]);
  gtk_widget_set_size_request(card_5,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_5,5,130);

  card_6 = gtk_button_new_with_label(array[1][1]);
  gtk_widget_set_size_request(card_6,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_6,90,130);

  card_7 = gtk_button_new_with_label(array[1][2]);
  gtk_widget_set_size_request(card_7,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_7,175,130);

  card_8 = gtk_button_new_with_label(array[1][3]);
  gtk_widget_set_size_request(card_8,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_8,260,130);
  //Card 3_array
  card_9 = gtk_button_new_with_label(array[2][0]);
  gtk_widget_set_size_request(card_9,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_9,5,255);

  card_10 = gtk_button_new_with_label(array[2][1]);
  gtk_widget_set_size_request(card_10,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_10,90,255);

  card_11 = gtk_button_new_with_label(array[2][2]);
  gtk_widget_set_size_request(card_11,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_11,175,255);

  card_12 = gtk_button_new_with_label(array[2][3]);
  gtk_widget_set_size_request(card_12,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_12,260,255);
  //Card 4_array
  card_13 = gtk_button_new_with_label(array[3][0]);
  gtk_widget_set_size_request(card_13,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_13,5,380);

  card_14 = gtk_button_new_with_label(array[3][1]);
  gtk_widget_set_size_request(card_14,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_14,90,380);

  card_15 = gtk_button_new_with_label(array[3][2]);
  gtk_widget_set_size_request(card_15,81,119);
  gtk_fixed_put(GTK_FIXED(frame),card_15,175,380);

  card_16 = gtk_button_new_with_label(array[3][3]);
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

void Window_Setting()
{
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "CARD GAME");
  gtk_window_set_default_size(GTK_WINDOW(window), 540,505);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  //Frame
  frame = gtk_fixed_new();
  gtk_container_add(GTK_CONTAINER(window),frame);
}

void destroy(GtkWidget *widget, gpointer data)
{
  gtk_main_quit();
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
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%s ", array[i][j]);
		}
		printf("\n");
	}
	return ;
}

