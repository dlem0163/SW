#include <gtk/gtk.h>
void button_color_setting(char *color);
void button_select_color();
void destroy(GtkWidget *widget, gpointer data);
void Card_Setting();
void Window_Setting();
void Random_Setting();
void Label_Setting();
char *RandomColor(char *Card);
void button_disable(int first,int second);
void reaction(int Card_Num,char *Card);
void Widget_Show();
void Card1_Press();
void Card2_Press();
void Card3_Press();
void Card4_Press();
void Card5_Press();
void Card6_Press();
void Card7_Press();
void Card8_Press();
void Card9_Press();
void Card10_Press();
void Card11_Press();
void Card12_Press();
void Card13_Press();
void Card14_Press();
void Card15_Press();
void Card16_Press();

extern int card_data[4][4];
extern int answer_flag[16];
extern char *CardNumber;
extern int first_num,second_num;
extern char *First;
extern char *Second;
extern char *Cardcolor[8];
extern char *card[16];
extern int pick[16];
extern char *array[4][4];
extern GdkColor Rcolor[16];
extern char *data[8];
extern GdkColor Rcolor[16];
extern int select_flag;
extern char *CardNumber;
extern char *First;
extern char *Second;
extern int first_num,second_num;
extern GtkWidget *card_1,*card_2,*card_3,*card_4,*card_5,*card_6,*card_7,*card_8;
extern GtkWidget *card_16,*card_9,*card_10,*card_12,*card_13,*card_14,*card_15,*card_11;
extern GtkWidget *window;
extern GtkWidget *frame;
extern GtkWidget *level,*start,*Exit;