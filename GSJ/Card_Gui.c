#include <gtk/gtk.h>


char buf[5];

void reaction(GtkWidget *widget, gpointer label,int value)
{
	sprintf(buf,"%d",value);
	gtk_label_set_text(label,buf);
}

int main( int argc, char *argv[])
{
  GtkWidget *window;
  GtkWidget *label;
  GtkWidget *frame;
  GtkWidget *card_1;



  gtk_init(&argc, &argv);
  //Window
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "CARD GAME");
  gtk_window_set_default_size(GTK_WINDOW(window), 400,400);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  //Frame
  frame = gtk_fixed_new();
  gtk_container_add(GTK_CONTAINER(window),frame);
  //Card
  card_1 = gtk_button_new_with_label("1");
  gtk_widget_set_size_request(card_1,40,40);
  gtk_fixed_put(GTK_FIXED(frame),card_1,30,30);

  label = gtk_label_new("NULL");
  gtk_fixed_put(GTK_FIXED(frame),label,100,50);

  gtk_widget_show_all(window);
  g_signal_connect_swapped(G_OBJECT(window), "destroy",
      G_CALLBACK(gtk_main_quit), NULL);
  g_signal_connect(card_1,"clicked",G_CALLBACK(reaction),label);

  gtk_main();

  return 0;
}
