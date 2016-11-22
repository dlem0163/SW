#include <gtk/gtk.h>

int flag[16] = {0,};

void reaction(GtkWidget *widget, gpointer data)
{

  volatile int x,y;
  GdkColor red,white;
  gdk_color_parse ("red", &red);
  gdk_color_parse ("white", &white);
  gtk_widget_modify_bg ( widget, GTK_STATE_NORMAL, &red);
}

int main( int argc, char *argv[])
{
  GtkWidget *window;
  GtkWidget *frame;
  GtkWidget *card_1,*card_2,*card_3,*card_4,*card_5,*card_6,*card_7,*card_8;
  GtkWidget *card_16,*card_9,*card_10,*card_12,*card_13,*card_14,*card_15,*card_11;
  GtkWidget *level,*exit,*start;
  GtkWidget *score_label,*score;


  gtk_init(&argc, &argv);
  //Window
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "CARD GAME");
  gtk_window_set_default_size(GTK_WINDOW(window), 540,505);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  //Frame
  frame = gtk_fixed_new();
  gtk_container_add(GTK_CONTAINER(window),frame);
  //Card 1
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
  
  //Card 2
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
  //Card 3
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
  //Card 4
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


  
  //Widget Show
  gtk_widget_show_all(window);
  g_signal_connect_swapped(G_OBJECT(window), "destroy",
      G_CALLBACK(gtk_main_quit), NULL);
  g_signal_connect(card_1,"clicked",G_CALLBACK(reaction),(gpointer)"1");
  g_signal_connect(card_2,"clicked",G_CALLBACK(reaction),(gpointer)"2");
  g_signal_connect(card_3,"clicked",G_CALLBACK(reaction),(gpointer)"3");
  g_signal_connect(card_4,"clicked",G_CALLBACK(reaction),(gpointer)"4");
  g_signal_connect(card_5,"clicked",G_CALLBACK(reaction),(gpointer)"5");
  g_signal_connect(card_6,"clicked",G_CALLBACK(reaction),(gpointer)"6");
  g_signal_connect(card_7,"clicked",G_CALLBACK(reaction),(gpointer)"7");
  g_signal_connect(card_8,"clicked",G_CALLBACK(reaction),(gpointer)"8");
  g_signal_connect(card_9,"clicked",G_CALLBACK(reaction),(gpointer)"9");
  g_signal_connect(card_10,"clicked",G_CALLBACK(reaction),(gpointer)"10");
  g_signal_connect(card_11,"clicked",G_CALLBACK(reaction),(gpointer)"11");
  g_signal_connect(card_12,"clicked",G_CALLBACK(reaction),(gpointer)"12");
  g_signal_connect(card_13,"clicked",G_CALLBACK(reaction),(gpointer)"13");
  g_signal_connect(card_14,"clicked",G_CALLBACK(reaction),(gpointer)"14");
  g_signal_connect(card_15,"clicked",G_CALLBACK(reaction),(gpointer)"15");
  g_signal_connect(card_16,"clicked",G_CALLBACK(reaction),(gpointer)"16");
  g_signal_connect(exit,"clicked",G_CALLBACK(reaction),(gpointer)"exit");
  g_signal_connect(start,"clicked",G_CALLBACK(reaction),(gpointer)"start");
  gtk_main();

 
  return 0;
}
