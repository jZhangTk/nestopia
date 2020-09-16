#ifndef _GTKUI_INPUT_H_
#define _GTKUI_INPUT_H_

typedef struct {
	guint u;
	guint d;
	guint l;
	guint r;
	guint select;
	guint start;
	guint a;
	guint b;
	guint ta;
	guint tb;
} gpad_t;

typedef struct {
	guint qsave1;
	guint qsave2;
	guint qsave3;
	guint qsave4;
	guint qsave5;
	guint qsave6;
	guint qsave7;
	guint qsave8;
	guint qsave9;
	guint qsave0;
	guint qload1;
	guint qload2;
	guint qload3;
	guint qload4;
	guint qload5;
	guint qload6;
	guint qload7;
	guint qload8;
	guint qload9;
	guint qload0;
	guint screenshot;
	guint fdsflip;
	guint fdsswitch;
	guint insertcoin1;
	guint insertcoin2;
	guint reset;
	guint ffspeedtoggle;
	guint incrementffspeed;
	guint decrementffspeed;
	guint ffspeed;
	guint rwstart;
	guint rwstop;
	guint fullscreen;
	guint filter;
	guint scalefactor;
} gkeys_t;

typedef struct {
	// User Interface
	char *qsave1;
	char *qsave2;
	char *qsave3;
	char *qsave4;
	char *qsave5;
	char *qsave6;
	char *qsave7;
	char *qsave8;
	char *qsave9;
	char *qsave0;
	char *qload1;
	char *qload2;
	char *qload3;
	char *qload4;
	char *qload5;
	char *qload6;
	char *qload7;
	char *qload8;
	char *qload9;
	char *qload0;
	
	char *screenshot;
	
	char *fdsflip;
	char *fdsswitch;
	
	char *insertcoin1;
	char *insertcoin2;
	
	char *reset;
	
	char *ffspeedtoggle;
	char *incrementffspeed;
	char *decrementffspeed;
	char *ffspeed;
	char *rwstart;
	char *rwstop;
	
	char *fullscreen;
	char *filter;
	char *scalefactor;
	
	// Player 1
	char *kb_p1u;
	char *kb_p1d;
	char *kb_p1l;
	char *kb_p1r;
	char *kb_p1select;
	char *kb_p1start;
	char *kb_p1a;
	char *kb_p1b;
	char *kb_p1ta;
	char *kb_p1tb;
	
	// Player 2
	char *kb_p2u;
	char *kb_p2d;
	char *kb_p2l;
	char *kb_p2r;
	char *kb_p2select;
	char *kb_p2start;
	char *kb_p2a;
	char *kb_p2b;
	char *kb_p2ta;
	char *kb_p2tb;
} ginputsettings_t;

void gtkui_input_set_default();
void gtkui_input_config_read();
void gtkui_input_config_write();
void gtkui_input_config_process_key(GtkWidget *widget, GdkEventKey *event, gpointer userdata);
void gtkui_input_config_signals_init();
void gtkui_input_config_signals_deinit();
void gtkui_input_config_key(int pnum, int bnum);
void gtkui_input_config_js(int pnum, int bnum);
void gtkui_input_null();
int gtkui_input_process_key(GtkWidget *widget, GdkEventKey *event, gpointer userdata);
int gtkui_input_process_key_nsf(GtkWidget *widget, GdkEventKey *event, gpointer userdata);
int gtkui_input_process_mouse(GtkWidget *widget, GdkEventButton *event, gpointer userdata);

#endif
