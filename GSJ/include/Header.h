#include <gtk/gtk.h>
void button_color_setting(char *color);
void button_select_color(char *color);
void destroy(GtkWidget *widget, gpointer data);
void Card_Setting();
void Window_Setting();
void Random_Setting();
void Label_Setting();

extern char *card[16];
extern int pick[16];
extern char *array[4][4];

extern GtkWidget *card_1,*card_2,*card_3,*card_4,*card_5,*card_6,*card_7,*card_8;
extern GtkWidget *card_16,*card_9,*card_10,*card_12,*card_13,*card_14,*card_15,*card_11;
extern GtkWidget *window;
extern GtkWidget *frame;
extern GtkWidget *level,*start,*Exit;
