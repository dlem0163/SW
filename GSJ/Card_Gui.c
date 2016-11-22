#include <gtk/gtk.h>


char buf[5];

void reaction(GtkWidget *widget, gpointer label)
{
	//sprintf(buf,"%s",label);
	//gtk_label_set_text(label,buf);
}

int main( int argc, char *argv[])
{
  GtkWidget *window;
  GtkWidget *label;
  GtkWidget *frame;
  GtkWidget *card_1,*card_2,*card_3,*card_4,*card_5,*card_6,*card_7,*card_8;

  gtk_init(&argc, &argv);
  //Window
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "CARD GAME");
  gtk_window_set_default_size(GTK_WINDOW(window), 300,200);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  //Frame
  frame = gtk_fixed_new();
  gtk_container_add(GTK_CONTAINER(window),frame);
  //Card
  card_1 = gtk_button_new_with_label("1");
  gtk_widget_set_size_request(card_1,81,129);
  gtk_fixed_put(GTK_FIXED(frame),card_1,5,5);

  card_2 = gtk_button_new_with_label("2");
  gtk_widget_set_size_request(card_2,81,129);
  gtk_fixed_put(GTK_FIXED(frame),card_2,90,5);

  card_3 = gtk_button_new_with_label("3");
  gtk_widget_set_size_request(card_3,81,129);
  gtk_fixed_put(GTK_FIXED(frame),card_3,175,5);

  card_4 = gtk_button_new_with_label("4");
  gtk_widget_set_size_request(card_4,81,129);
  gtk_fixed_put(GTK_FIXED(frame),card_4,260,5);

  card_5 = gtk_button_new_with_label("5");
  gtk_widget_set_size_request(card_5,81,129);
  gtk_fixed_put(GTK_FIXED(frame),card_5,5,140);

  card_6 = gtk_button_new_with_label("6");
  gtk_widget_set_size_request(card_6,81,129);
  gtk_fixed_put(GTK_FIXED(frame),card_6,90,140);

  card_7 = gtk_button_new_with_label("7");
  gtk_widget_set_size_request(card_7,81,129);
  gtk_fixed_put(GTK_FIXED(frame),card_7,175,140);
  
  card_8 = gtk_button_new_with_label("8");
  gtk_widget_set_size_request(card_8,81,129);
  gtk_fixed_put(GTK_FIXED(frame),card_8,260,140);

  //Test label
  label = gtk_label_new("NULL");
  gtk_fixed_put(GTK_FIXED(frame),label,280,180);

  gtk_widget_show_all(window);
  g_signal_connect_swapped(G_OBJECT(window), "destroy",
      G_CALLBACK(gtk_main_quit), NULL);
  g_signal_connect(card_1,"clicked",G_CALLBACK(reaction),label);
  g_signal_connect(card_2,"clicked",G_CALLBACK(reaction),label);
  g_signal_connect(card_3,"clicked",G_CALLBACK(reaction),label);
  g_signal_connect(card_4,"clicked",G_CALLBACK(reaction),label);
  g_signal_connect(card_5,"clicked",G_CALLBACK(reaction),label);
  g_signal_connect(card_6,"clicked",G_CALLBACK(reaction),label);
  g_signal_connect(card_7,"clicked",G_CALLBACK(reaction),label);
  g_signal_connect(card_8,"clicked",G_CALLBACK(reaction),label);
  gtk_main();

  return 0;
}
