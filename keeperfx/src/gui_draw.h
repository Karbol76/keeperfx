/******************************************************************************/
// Free implementation of Bullfrog's Dungeon Keeper strategy game.
/******************************************************************************/
/** @file gui_draw.h
 *     Header file for gui_draw.c.
 * @par Purpose:
 *     GUI elements drawing functions.
 * @par Comment:
 *     Just a header file - #defines, typedefs, function prototypes etc.
 * @author   Tomasz Lis
 * @date     20 Jan 2009 - 30 Jan 2009
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/

#ifndef DK_GUIDRAW_H
#define DK_GUIDRAW_H

#include "bflib_basics.h"
#include "globals.h"

#include "bflib_video.h"
#include "vidmode.h"

// Sprites
// note - this is temporary value; not correct
#define GUI_PANEL_SPRITES_COUNT      9000
// Positioning constants for menus
#define POS_AUTO -9999
#define POS_MOUSMID -999
#define POS_MOUSPRV -998
#define POS_SCRCTR  -997
#define POS_SCRBTM  -996
#define POS_GAMECTR  999

#ifdef __cplusplus
extern "C" {
#endif
/******************************************************************************/
struct GuiButton;
/******************************************************************************/
extern char gui_textbuf[TEXT_BUFFER_LENGTH];
/******************************************************************************/
DLLIMPORT extern struct TbSprite *_DK_button_sprite;
#define button_sprite _DK_button_sprite

DLLIMPORT struct TbSprite *_DK_gui_panel_sprites;
#define gui_panel_sprites _DK_gui_panel_sprites
DLLIMPORT struct TbSprite *_DK_end_gui_panel_sprites;
#define end_gui_panel_sprites _DK_end_gui_panel_sprites
DLLIMPORT extern unsigned char * _DK_gui_panel_sprite_data;
#define gui_panel_sprite_data _DK_gui_panel_sprite_data
DLLIMPORT extern unsigned char * _DK_end_gui_panel_sprite_data;
#define end_gui_panel_sprite_data _DK_end_gui_panel_sprite_data
DLLIMPORT extern unsigned char *_DK_frontend_background;
#define frontend_background _DK_frontend_background
DLLIMPORT struct TbSprite *_DK_frontend_sprite;
#define frontend_sprite _DK_frontend_sprite
DLLIMPORT struct TbSprite *_DK_frontend_end_sprite;
#define frontend_end_sprite _DK_frontend_end_sprite
DLLIMPORT extern unsigned char * _DK_frontend_sprite_data;
#define frontend_sprite_data _DK_frontend_sprite_data
DLLIMPORT extern unsigned char * _DK_frontend_end_sprite_data;
#define frontend_end_sprite_data _DK_frontend_end_sprite_data

/******************************************************************************/
int get_bitmap_max_scale(int img_w,int img_h,int rect_w,int rect_h);

void draw_bar64k(long pos_x, long pos_y, long width);
void draw_lit_bar64k(long pos_x, long pos_y, long width);
void draw_slab64k(long pos_x, long pos_y, long width, long height);
void draw_ornate_slab64k(long pos_x, long pos_y, long width, long height);
void draw_ornate_slab_outline64k(long pos_x, long pos_y, long width, long height);
void draw_round_slab64k(long pos_x, long pos_y, long width, long height);
void draw_button_string(struct GuiButton *gbtn, char *text);
int draw_text_box(const char *text);
void draw_scroll_box(struct GuiButton *gbtn, long a2);

void draw_gui_panel_sprite_left(long x, long y, long spridx);
void draw_gui_panel_sprite_rmleft(long x, long y, long spridx, unsigned long remap);
void draw_gui_panel_sprite_ocleft(long x, long y, long spridx, TbPixel color);
void draw_gui_panel_sprite_centered(long x, long y, long spridx);
void draw_gui_panel_sprite_occentered(long x, long y, long spridx, TbPixel color);

void frontend_copy_background_at(int rect_x,int rect_y,int rect_w,int rect_h);
/******************************************************************************/
#ifdef __cplusplus
}
#endif
#endif