/**************************************************************************
 *									  *
 *  Copyright (C)  1988 Silicon Graphics, Inc.	  *
 *									  *
 *  These coded instructions, statements, and computer programs  contain  *
 *  unpublished  proprietary  information of Silicon Graphics, Inc., and  *
 *  are protected by Federal copyright law.  They  may  not be disclosed  *
 *  to  third  parties  or copied or duplicated in any form, in whole or  *
 *  in part, without the prior written consent of Silicon Graphics, Inc.  *
 *									  *
 **************************************************************************/

#include "gl.h"
#include "flight.h"
#include "f16_defs.h"
#include "objects.h"

/*

*/
/*############################################################################
 	MAKE 8 OBJECTS DEFINITION FILE 
############################################################################*/

make_f16(obj)
	Object obj;
{
        pushmatrix();

makeobj(obj++);		/* view[0] BELOW_LEFT_FRONT    BLF*/
/*  152 of 164 polygons visible  */
setpattern(0);
	color (silver6);
polf (4, f16_TAIL_top); 
polf (5, f16_TAIL_bottom); 
	color (silver1);
polf (8, f16_pilot_head_xy); 
polf (8, f16_pilot_head_yz); 
polf (8, f16_pilot_head_xz); 
        color (silver6);
setpattern(3);
polf (3, f16_cockpit_back_tip_3);              /*   BLF   */ 
polf (3, f16_cockpit_back_tip_4); 
polf (4, f16_cockpit_middle_2); 
polf (4, f16_cockpit_middle_1); 
polf (3, f16_cockpit_tip_2); 
polf (3, f16_cockpit_tip_1); 
polf (3, f16_cockpit_back_tip_2); 
polf (3, f16_cockpit_back_tip_1); 
polf (4, f16_cockpit_middle_3); 
polf (4, f16_cockpit_middle_4); 
polf (3, f16_cockpit_tip_3); 
polf (3, f16_cockpit_tip_4); 
setpattern(0);
	color (silver4);
polf (4, f16_FG_right_2); 
	color (silver3);
polf (4, f16_FG_right_1); 
	color (silver5);
polf (4, f16_FG_right_3); 
	color (silver3);
polf (4, f16_FG_top);               /*   BLF   */ 
polf (6, f16_right_missle_yz3); 
polf (6, f16_right_missle_xz3); 
polf (4, f16_right_back_wing); 
polf (4, f16_FG_left_1); 
polf (4, f16_right_missle_xz2); 
polf (4, f16_right_missle_yz2); 
	color (silver4);
polf (4, f16_FG_left_2); 
	color (silver5);
polf (4, f16_FG_left_3); 
	color (silver3);
polf (3, f16_right_missle_xz1); 
polf (3, f16_right_missle_yz1); 
	color (silver6);
polf (4, f16_FG_right_4);               /*   BLF   */ 
	color (silver3);
polf (4, f16_right_outer_wing); 
	color (silver7);
polf (4, f16_FG_right_5); 
	color (silver8);
polf (4, f16_FG_right_6); 
	color (silver9);
polf (4, f16_FG_bottom); 
	color (silver5);
polf (7, f16_right_middle_wing); 
	color (silver3);
polf (4, f16_CD_right_1); 
polf (4, f16_EF_left_1); 
	color (silver4);
polf (4, f16_EF_left_2); 
	color (silver5);
polf (4, f16_EF_left_3);               /*   BLF   */ 
	color (silver3);
polf (4, f16_CD_top); 
	color (silver6);
polf (4, f16_FG_left_4); 
	color (silver4);
polf (4, f16_BD_right_2); 
	color (silver8);
polf (4, f16_FG_left_6); 
	color (silver7);
polf (4, f16_FG_left_5); 
	color (silver5);
polf (4, f16_BD_right_3); 
	color (silver6);
polf (4, f16_EF_right_4); 
	color (silver5);
polf (3, f16_right_wing_fattener); 
	color (silver7);              /*   BLF   */ 
polf (4, f16_EF_right_5); 
	color (silver3);
polf (4, f16_CD_left_1); 
	color (silver8);
polf (4, f16_EF_right_6); 
	color (silver3);
polf (4, f16_DE_left_1); 
	color (silver5);
polf (3, f16_right_wing_chunk); 
	color (silver3);
polf (4, f16_left_back_wing); 
	color (silver9);
polf (4, f16_EF_bottom); 
	color (silver4);
polf (4, f16_DE_left_2);               /*   BLF   */ 
polf (4, f16_AB_right_2); 
	color (silver3);
polf (4, f16_AB_right_1); 
	color (silver5);
polf (4, f16_DE_left_3); 
polf (4, f16_AB_right_3); 
	color (silver3);
polf (4, f16_AB_top); 
	color (silver5);
polf (5, f16_right_front_wing); 


	color (silver5);
polf (7, f16_left_middle_wing); 
	color (silver6);
polf (4, f16_DE_right_4); 
	color (silver9);
polf (3, f16_BD_bottom); 
	color (silver4);
polf (4, f16_BD_left_2); 
	color (silver7);
polf (4, f16_DE_right_5);               /*   BLF   */ 
	color (silver6);
polf (3, f16_BD_right_4); 
	color (silver5);
polf (3, f16_SCOOP_right_extra); 
polf (3, f16_SCOOP_right_1); 
	color (silver8);
polf (3, f16_BD_right_6); 
	color (silver7);
polf (3, f16_BD_right_5); 
	color (silver4);
polf (3, f16_tip_right_2); 
	color (silver3);
polf (3, f16_tip_right_1); 
	color (silver5);
polf (3, f16_BD_right_extra); 
polf (3, f16_tip_right_3); 
	color (silver3);
polf (3, f16_tip_top); 
	color (silver6);              /*   BLF   */ 
polf (3, f16_SCOOP_top); 
	color (silver5);
polf (4, f16_BD_left_3); 
	color (silver8);
polf (4, f16_DE_right_6); 
	color (silver6);
polf (4, f16_EF_left_4); 
	color (silver8);
polf (4, f16_EF_left_6); 
	color (silver7);
polf (4, f16_EF_left_5); 
	color (silver9);
polf (4, f16_DE_bottom); 
	color (silver6);
polf (4, f16_AB_right_4); 
	color (silver7);
polf (4, f16_AB_right_5); 
	color (silver3);              /*   BLF   */ 
polf (4, f16_AB_left_1); 
	color (silver8);
polf (4, f16_AB_right_6); 
	color (silver9);
polf (4, f16_AB_bottom); 
	color (silver4);
polf (4, f16_AB_left_2); 
	color (silver3);
polf (6, f16_left_missle_xz3); 
polf (6, f16_left_missle_yz3); 
	color (silver5);
polf (4, f16_AB_left_3); 
	color (silver3);
polf (4, f16_left_outer_wing); 
	color (silver5);
polf (3, f16_BD_left_extra); 
	color (silver6);
polf (3, f16_BD_left_4); 
	color (silver7);
polf (3, f16_BD_left_5);               /*   BLF   */ 
	color (silver8);
polf (3, f16_BD_left_6); 
	color (silver6);
polf (4, f16_SCOOP_right_4); 
	color (silver5);
polf (3, f16_left_wing_fattener); 
	color (silver6);
polf (3, f16_tip_right_4); 
	color (silver7);
polf (3, f16_tip_right_5); 
	color (silver8);
polf (3, f16_tip_right_6); 
	color (silver9);
polf (3, f16_tip_bottom); 
	color (silver3);
polf (3, f16_tip_left_1); 
polf (4, f16_left_missle_xz2);               /*   BLF   */ 
polf (4, f16_left_missle_yz2); 
	color (silver4);
polf (3, f16_tip_left_2); 
	color (silver5);
polf (3, f16_tip_left_3); 
polf (3, f16_left_middle_wing_chunk); 
	color (silver7);
polf (4, f16_SCOOP_right_5); 
	color (silver6);
polf (4, f16_DE_left_4); 
	color (silver8);
polf (4, f16_DE_left_6); 
	color (silver7);
polf (4, f16_DE_left_5); 
	color (silver4);
polf (3, f16_SCOOP_left_1); 
	color (silver5);
polf (3, f16_SCOOP_left_extra); 
	color (silver5);
polf (3, f16_SCOOP_left_2); 
	color (silver8);              /*   BLF   */ 
polf (4, f16_SCOOP_right_6); 


	color (silver5);
polf (5, f16_left_front_wing); 
	color (silver3);
polf (3, f16_left_missle_xz1); 
polf (3, f16_left_missle_yz1); 
	color (silver8);
polf (4, f16_AB_left_6);               /*   BLF   */ 
	color (silver6);
polf (4, f16_AB_left_4); 
	color (silver7);
polf (4, f16_AB_left_5); 
	color (silver9);
polf (4, f16_SCOOP_bottom); 
	color (silver6);
polf (3, f16_tip_left_4); 
	color (silver8);
polf (3, f16_tip_left_6); 
	color (silver7);
polf (3, f16_tip_left_5); 
	color (silver6);
polf (4, f16_SCOOP_left_4); 
	color (silver8);
polf (4, f16_SCOOP_left_6); 
	color (silver7);
polf (4, f16_SCOOP_left_5);               /*   BLF   */ 
	color (silver9);
polf (8, f16_SCOOP_front_right); 
polf (6, f16_SCOOP_front_left); 


closeobj();


makeobj(obj++);		/* view[1] BELOW_RIGHT_FRONT  BRF */
/*  151 of 164 polygons visible  */
setpattern(0);
	color (silver6);
polf (4, f16_TAIL_top); 
polf (5, f16_TAIL_bottom); 
	color (silver1);
polf (8, f16_pilot_head_xy); 
polf (8, f16_pilot_head_yz); 
polf (8, f16_pilot_head_xz); 
setpattern(3);
        color(silver6);
polf (3, f16_cockpit_back_tip_2); 
polf (3, f16_cockpit_back_tip_1); 
polf (4, f16_cockpit_middle_3); 
polf (4, f16_cockpit_middle_4); 
polf (3, f16_cockpit_tip_3); 
polf (3, f16_cockpit_tip_4); 
polf (3, f16_cockpit_back_tip_3);                 /*  BRF  */ 
polf (3, f16_cockpit_back_tip_4); 
polf (4, f16_cockpit_middle_2); 
polf (4, f16_cockpit_middle_1); 
polf (3, f16_cockpit_tip_2); 
polf (3, f16_cockpit_tip_1); 
setpattern(0);
	color (silver4);
polf (4, f16_FG_left_2); 
	color (silver3);
polf (4, f16_FG_left_1); 
	color (silver5);
polf (4, f16_FG_left_3); 
	color (silver3);
polf (6, f16_left_missle_yz3); 
polf (6, f16_left_missle_xz3); 
polf (4, f16_left_back_wing); 
polf (4, f16_FG_top); 
polf (4, f16_FG_right_1); 
polf (4, f16_left_missle_xz2); 
polf (4, f16_left_missle_yz2); 
	color (silver4);                 /*  BRF  */ 
polf (4, f16_FG_right_2); 
	color (silver5);
polf (4, f16_FG_right_3); 
	color (silver3);
polf (3, f16_left_missle_xz1); 
polf (3, f16_left_missle_yz1); 
	color (silver6);
polf (4, f16_FG_left_4); 
	color (silver3);
polf (4, f16_left_outer_wing); 
	color (silver7);
polf (4, f16_FG_left_5); 
	color (silver8);
polf (4, f16_FG_left_6); 
	color (silver5);
polf (7, f16_left_middle_wing); 
	color (silver3);
polf (4, f16_CD_left_1); 
polf (4, f16_EF_right_1);                  /*  BRF  */ 
	color (silver4);
polf (4, f16_EF_right_2); 
	color (silver5);
polf (4, f16_EF_right_3); 
	color (silver9);
polf (4, f16_FG_bottom); 
	color (silver6);
polf (4, f16_FG_right_4); 
	color (silver4);
polf (4, f16_BD_left_2); 
	color (silver8);
polf (4, f16_FG_right_6); 
	color (silver7);
polf (4, f16_FG_right_5); 
	color (silver5);
polf (4, f16_BD_left_3); 
	color (silver6);
polf (4, f16_EF_left_4); 
	color (silver5);                 /*  BRF  */ 
polf (3, f16_left_wing_fattener); 
	color (silver3);
polf (4, f16_CD_right_1); 
	color (silver7);
polf (4, f16_EF_left_5); 
	color (silver8);
polf (4, f16_EF_left_6); 
	color (silver3);
polf (4, f16_DE_right_1); 
	color (silver5);
polf (3, f16_left_middle_wing_chunk); 
	color (silver3);
polf (4, f16_right_back_wing); 
	color (silver4);
polf (4, f16_DE_right_2); 
polf (4, f16_AB_left_2);                  /*  BRF  */ 
	color (silver3);
polf (4, f16_AB_left_1); 
	color (silver5);
polf (4, f16_DE_right_3); 
	color (silver3);
polf (4, f16_CD_top); 
	color (silver5);
polf (5, f16_left_front_wing); 


	color (silver5);
polf (7, f16_right_middle_wing); 
	color (silver6);
polf (4, f16_DE_left_4); 
	color (silver4);
polf (4, f16_BD_right_2); 
	color (silver7);
polf (4, f16_DE_left_5); 
	color (silver6);
polf (3, f16_BD_left_4); 
	color (silver8);
polf (3, f16_BD_left_6); 
	color (silver7);                 /*  BRF  */ 
polf (3, f16_BD_left_5); 
	color (silver4);
polf (3, f16_tip_left_2); 
	color (silver3);
polf (3, f16_tip_left_1); 
	color (silver5);
polf (3, f16_BD_left_extra); 
polf (3, f16_tip_left_3); 
polf (4, f16_BD_right_3); 
	color (silver9);
polf (4, f16_EF_bottom); 
	color (silver8);
polf (4, f16_DE_left_6); 
	color (silver6);
polf (4, f16_EF_right_4); 
	color (silver5);
polf (3, f16_SCOOP_left_extra); 
	color (silver4);                 /*  BRF  */ 
polf (3, f16_SCOOP_left_1); 
	color (silver8);
polf (4, f16_EF_right_6); 
	color (silver7);
polf (4, f16_EF_right_5); 
	color (silver6);
polf (4, f16_AB_left_4); 
	color (silver3);
polf (4, f16_AB_top); 
	color (silver7);
polf (4, f16_AB_left_5); 
	color (silver3);
polf (4, f16_AB_right_1); 
	color (silver8);
polf (4, f16_AB_left_6); 
	color (silver4);                 /*  BRF  */ 
polf (4, f16_AB_right_2); 
	color (silver3);
polf (6, f16_right_missle_xz3); 
polf (6, f16_right_missle_yz3); 
	color (silver5);
polf (4, f16_AB_right_3); 
	color (silver3);
polf (4, f16_right_outer_wing); 
	color (silver5);
polf (3, f16_BD_right_extra); 
	color (silver6);
polf (3, f16_BD_right_4); 
	color (silver7);
polf (3, f16_BD_right_5); 
	color (silver8);
polf (3, f16_BD_right_6); 
	color (silver9);
polf (3, f16_BD_bottom); 
	color (silver5);
polf (3, f16_right_wing_fattener);                  /*  BRF  */ 
	color (silver6);
polf (3, f16_tip_left_4); 
polf (4, f16_SCOOP_left_4); 
	color (silver7);
polf (3, f16_tip_left_5); 
	color (silver8);
polf (3, f16_tip_left_6); 
	color (silver3);
polf (3, f16_tip_top); 
	color (silver6);
polf (3, f16_SCOOP_top); 
	color (silver3);
polf (3, f16_tip_right_1); 
polf (4, f16_right_missle_yz2); 
polf (4, f16_right_missle_xz2); 
	color (silver4);
polf (3, f16_tip_right_2); 
	color (silver5);                 /*  BRF  */ 
polf (3, f16_SCOOP_right_1); 
polf (3, f16_tip_right_3); 
polf (3, f16_SCOOP_right_extra); 
	color (silver4);
polf (3, f16_SCOOP_right_2); 
	color (silver9);
polf (4, f16_DE_bottom); 
	color (silver5);
polf (3, f16_right_wing_chunk); 
	color (silver7);
polf (4, f16_SCOOP_left_5); 
	color (silver6);
polf (4, f16_DE_right_4); 
	color (silver8);
polf (4, f16_DE_right_6); 
	color (silver7);
polf (4, f16_DE_right_5); 

 
	color (silver8);
polf (4, f16_SCOOP_left_6); 
	color (silver5);
polf (5, f16_right_front_wing); 
	color (silver3);
polf (3, f16_right_missle_xz1); 
polf (3, f16_right_missle_yz1);                  /*  BRF  */ 
	color (silver9);
polf (4, f16_AB_bottom); 
	color (silver8);
polf (4, f16_AB_right_6); 
	color (silver6);
polf (4, f16_AB_right_4); 
	color (silver7);
polf (4, f16_AB_right_5); 
	color (silver9);
polf (3, f16_tip_bottom); 
	color (silver6);
polf (3, f16_tip_right_4); 
	color (silver8);
polf (3, f16_tip_right_6); 
	color (silver7);
polf (3, f16_tip_right_5);                  /*  BRF  */ 
	color (silver6);
polf (4, f16_SCOOP_right_4); 
	color (silver8);
polf (4, f16_SCOOP_right_6); 
	color (silver7);
polf (4, f16_SCOOP_right_5); 
	color (silver9);
polf (4, f16_SCOOP_bottom); 


	color (silver9);
polf (6, f16_SCOOP_front_left); 
polf (8, f16_SCOOP_front_right); 
closeobj();


makeobj(obj++);		/* view[2] ABOVE_LEFT_FRONT */
/*  142 of 164 polygons visible  */
	color (silver7);
polf (4, f16_FG_right_5); 
	color (silver8);
polf (4, f16_FG_right_6); 
	color (silver6);
polf (4, f16_FG_right_4); 
	color (silver9);
polf (4, f16_FG_bottom); 
	color (silver3);
polf (6, f16_right_missle_yz3); 
polf (6, f16_right_missle_xz3); 
polf (4, f16_right_back_wing);           /*  ALF  */


	color (silver8);
polf (4, f16_FG_left_6); 
	color (silver3);
polf (4, f16_right_missle_xz2); 
polf (4, f16_right_missle_yz2); 
	color (silver7);
polf (4, f16_FG_left_5);            /*  ALF  */
	color (silver6);
polf (4, f16_FG_left_4);   /* alf */
	color (silver3);
polf (3, f16_right_missle_yz1); 
polf (3, f16_right_missle_xz1); 


	color (silver5);
polf (4, f16_FG_right_3); 
	color (silver3);
polf (4, f16_right_outer_wing); 
	color (silver4);
polf (4, f16_FG_right_2);            /*  ALF  */
	color (silver3);
polf (4, f16_FG_right_1); 
polf (4, f16_FG_top); 
	color (silver5);
polf (7, f16_right_middle_wing); 
	color (silver8);
polf (4, f16_EF_left_6); 
polf (4, f16_EF_right_6); 
	color (silver9);
polf (4, f16_EF_bottom); 


	color (silver7);
polf (4, f16_EF_left_5); 
polf (4, f16_EF_right_5); 
	color (silver6);
polf (4, f16_EF_left_4); 
polf (4, f16_EF_right_4); 
	color (silver5);
polf (4, f16_FG_left_3); 
	color (silver3);
polf (4, f16_FG_left_1); 
	color (silver4);
polf (4, f16_FG_left_2); 
	color (silver5);
polf (4, f16_EF_right_3);            /*  ALF  */
	color (silver4);
polf (4, f16_EF_right_2); 
	color (silver5);
polf (3, f16_right_wing_fattener); 
	color (silver8);
polf (4, f16_SCOOP_left_6); 
	color (silver3);
polf (4, f16_EF_right_1); 
polf (4, f16_left_back_wing); 
	color (silver5);  /* ALF */
polf (3, f16_right_wing_chunk); 
	color (silver3);
polf (4, f16_EF_top_right); 
	color (silver7);
polf (4, f16_SCOOP_left_5); 
	color (silver8);
polf (4, f16_DE_left_6); 
polf (4, f16_DE_right_6); 
	color (silver9);
polf (4, f16_DE_bottom); 
	color (silver4);
polf (3, f16_SCOOP_right_2); 
	color (silver5);
polf (3, f16_SCOOP_right_extra); 
polf (3, f16_SCOOP_right_1); 
	color (silver7);
polf (4, f16_DE_left_5); 
polf (4, f16_DE_right_5); 
	color (silver6);
polf (3, f16_SCOOP_top); 
polf (4, f16_DE_left_4); 
polf (4, f16_DE_right_4); 
polf (4, f16_SCOOP_left_4); 
	color (silver5);
polf (5, f16_right_front_wing); 
polf (7, f16_left_middle_wing); 
polf (4, f16_DE_right_3);            /*  ALF  */
	color (silver8);
polf (3, f16_BD_right_6); 
	color (silver7);  /* ALF */
polf (3, f16_BD_right_5); 
	color (silver6);
polf (3, f16_BD_right_4); 
	color (silver5);
polf (3, f16_BD_right_extra); 
	color (silver4);
polf (4, f16_DE_right_2); 
	color (silver3);
polf (4, f16_EF_top_left); 
polf (4, f16_DE_right_1); 
	color (silver5);
polf (4, f16_EF_left_3); 
polf (3, f16_SCOOP_left_2);            /*  ALF  */
	color (silver3);
polf (4, f16_EF_left_1); 
	color (silver4);
polf (4, f16_EF_left_2); 
polf (3, f16_SCOOP_left_1); 
	color (silver5);
polf (3, f16_SCOOP_left_extra); 
	color (silver9);
polf (6, f16_SCOOP_front_left); 
polf (8, f16_SCOOP_front_right); 
	color (silver3);
polf (4, f16_DE_top); 
	color (silver5);
polf (4, f16_BD_right_3); 
	color (silver3);
polf (6, f16_left_missle_xz3);   /* ALF */
polf (6, f16_left_missle_yz3); 
	color (silver5);
polf (3, f16_BD_left_extra); 
	color (silver3);
polf (4, f16_left_outer_wing); 
	color (silver4);
polf (4, f16_BD_right_2); 
	color (silver3);
polf (4, f16_CD_top); 
	color (silver7);
polf (3, f16_tip_right_5); 
	color (silver8);
polf (3, f16_tip_right_6); 
	color (silver6);
polf (3, f16_tip_right_4); 
	color (silver9);
polf (3, f16_tip_bottom); 
	color (silver5);
polf (3, f16_left_wing_fattener); 
	color (silver3);           /*  ALF  */
polf (4, f16_left_missle_yz2); 
polf (4, f16_left_missle_xz2); 
	color (silver5);
polf (3, f16_left_middle_wing_chunk); 
polf (4, f16_AB_right_3); 
polf (4, f16_DE_left_3); 
	color (silver3);
polf (4, f16_DE_left_1); 
	color (silver4);
polf (4, f16_DE_left_2); 
polf (4, f16_AB_right_2); 
	color (silver3);
polf (4, f16_CD_right_1); 
	color (silver8);  /* ALF */
polf (4, f16_AB_left_6); 
	color (silver3);
polf (4, f16_AB_right_1); 
	color (silver5);
polf (5, f16_left_front_wing); 
	color (silver3);
polf (3, f16_left_missle_yz1); 
polf (3, f16_left_missle_xz1); 
	color (silver7);
polf (4, f16_AB_left_5); 
	color (silver3);
polf (4, f16_AB_top); 
	color (silver6);
polf (4, f16_AB_left_4); 
	color (silver5);
polf (3, f16_tip_right_3); 
	color (silver4);
polf (3, f16_tip_right_2); 
	color (silver3);
polf (3, f16_tip_right_1); 
polf (3, f16_tip_top); 
	color (silver5);
polf (4, f16_BD_left_3);   /* ALF */
	color (silver8);
polf (3, f16_tip_left_6); 
	color (silver7);
polf (3, f16_tip_left_5); 
	color (silver4);
polf (4, f16_BD_left_2); 
	color (silver6);
polf (3, f16_tip_left_4); 
	color (silver3);
polf (4, f16_CD_left_1); 
	color (silver5);
polf (4, f16_AB_left_3); 
	color (silver3);
polf (4, f16_AB_left_1); 
	color (silver4);
polf (4, f16_AB_left_2); 
	color (silver5);
polf (3, f16_tip_left_3); 
	color (silver3);
polf (3, f16_tip_left_1); 
	color (silver4);
polf (3, f16_tip_left_2);   /* ALF */
	color (silver6);
polf (5, f16_TAIL_bottom); 
polf (4, f16_TAIL_top); 
        color(silver4);
polf (4, f16_cockpit_cover);
	color (silver1);
polf (8, f16_pilot_head_xy); 
polf (8, f16_pilot_head_xz); 
polf (8, f16_pilot_head_yz); 
setpattern(3);
        color (silver6);
polf (3, f16_cockpit_back_tip_4); 
polf (3, f16_cockpit_back_tip_3); 
polf (4, f16_cockpit_middle_1); 
polf (4, f16_cockpit_middle_2); 
polf (3, f16_cockpit_tip_1); 
polf (3, f16_cockpit_tip_2); 
polf (3, f16_cockpit_back_tip_1); 
polf (3, f16_cockpit_back_tip_2); 
polf (4, f16_cockpit_middle_4); 
polf (4, f16_cockpit_middle_3); 
polf (3, f16_cockpit_tip_4); 
polf (3, f16_cockpit_tip_3); 
setpattern(0);
closeobj();  /* ALF */


makeobj(obj++);		/* view[3] ABOVE_RIGHT_FRONT    ARF */
/*  142 of 164 polygons visible  */
	color (silver7);
polf (4, f16_FG_left_5); 
	color (silver8);
polf (4, f16_FG_left_6); 
	color (silver6);
polf (4, f16_FG_left_4); 
	color (silver3);
polf (6, f16_left_missle_yz3); 
polf (6, f16_left_missle_xz3); 
polf (4, f16_left_back_wing); 


	color (silver9);
polf (4, f16_FG_bottom); 
	color (silver8);
polf (4, f16_FG_right_6); 
	color (silver3);
polf (4, f16_left_missle_xz2); 
polf (4, f16_left_missle_yz2); 
	color (silver7);
polf (4, f16_FG_right_5); 
	color (silver6);
polf (4, f16_FG_right_4); 
	color (silver8);
	color (silver3);
polf (3, f16_left_missle_xz1); 
polf (3, f16_left_missle_yz1); 


	color (silver5);
polf (4, f16_FG_left_3); 
	color (silver3);
polf (4, f16_left_outer_wing); 
	color (silver4);
polf (4, f16_FG_left_2); 
	color (silver3);                     /* ARF */
polf (4, f16_FG_left_1); 
	color (silver5);
polf (7, f16_left_middle_wing); 
	color (silver8);
polf (4, f16_EF_right_6); 
polf (4, f16_EF_left_6); 

                     /* ARF */
	color (silver7);
polf (4, f16_EF_right_5); 
polf (4, f16_EF_left_5); 
	color (silver6);
polf (4, f16_EF_right_4); 
polf (4, f16_EF_left_4); 
	color (silver3);
polf (4, f16_FG_top); 
	color (silver5);
polf (4, f16_FG_right_3); 
	color (silver3);
polf (4, f16_FG_right_1); 
	color (silver4);
polf (4, f16_FG_right_2); 
	color (silver5);
polf (4, f16_EF_left_3);                      /* ARF */
	color (silver4);
polf (4, f16_EF_left_2); 
	color (silver5);
polf (3, f16_left_wing_fattener); 
	color (silver8);
polf (4, f16_SCOOP_right_6); 
	color (silver5);
polf (3, f16_SCOOP_left_2); 
polf (3, f16_SCOOP_left_extra); 
	color (silver3);
polf (4, f16_EF_left_1); 
	color (silver4);
polf (3, f16_SCOOP_left_1); 
	color (silver3);
polf (4, f16_right_back_wing); 
	color (silver5);
polf (3, f16_left_middle_wing_chunk); 
	color (silver3);
polf (4, f16_EF_top_left); 
	color (silver7);
polf (4, f16_SCOOP_right_5); 
	color (silver8);
polf (4, f16_DE_right_6); 
polf (4, f16_DE_left_6); 
	color (silver9);
polf (4, f16_DE_bottom); 
polf (4, f16_EF_bottom); 
	color (silver7);
polf (4, f16_DE_right_5); 
polf (4, f16_DE_left_5); 
	color (silver6);
polf (4, f16_DE_right_4); 
polf (4, f16_DE_left_4); 
	color (silver5);                     /* ARF */
polf (5, f16_left_front_wing); 
	color (silver6);
polf (4, f16_SCOOP_right_4); 
	color (silver5);
polf (7, f16_right_middle_wing); 
polf (4, f16_DE_left_3); 
	color (silver8);
polf (3, f16_BD_left_6); 
	color (silver7);
polf (3, f16_BD_left_5); 
	color (silver6);
polf (3, f16_BD_left_4); 
	color (silver5);
polf (3, f16_BD_left_extra); 
	color (silver4);
polf (4, f16_DE_left_2); 
	color (silver3);
polf (4, f16_EF_top_right); 
polf (4, f16_DE_left_1); 
	color (silver5);
polf (4, f16_EF_right_3);                      /* ARF */
	color (silver3);
polf (4, f16_EF_right_1); 
	color (silver4);
polf (4, f16_EF_right_2); 
	color (silver6);
polf (3, f16_SCOOP_top); 
	color (silver4);
polf (3, f16_SCOOP_right_2); 
	color (silver5);
polf (3, f16_SCOOP_right_1); 
polf (3, f16_SCOOP_right_extra); 
polf (4, f16_BD_left_3); 
	color (silver9);
polf (8, f16_SCOOP_front_right); 
polf (6, f16_SCOOP_front_left); 
	color (silver3);
polf (6, f16_right_missle_xz3); 
polf (6, f16_right_missle_yz3); 
	color (silver5);                     /* ARF */
polf (3, f16_BD_right_extra); 
	color (silver3);
polf (4, f16_right_outer_wing); 
	color (silver4);
polf (4, f16_BD_left_2); 
	color (silver7);
polf (3, f16_tip_left_5); 
	color (silver8);
polf (3, f16_tip_left_6); 
	color (silver6);
polf (3, f16_tip_left_4); 
	color (silver5);
polf (3, f16_right_wing_fattener); 
	color (silver3);
polf (4, f16_right_missle_yz2); 
polf (4, f16_right_missle_xz2); 
	color (silver5);
polf (3, f16_right_wing_chunk); 
	color (silver3);
polf (4, f16_DE_top); 
	color (silver5);
polf (4, f16_AB_left_3); 
polf (4, f16_DE_right_3); 
	color (silver3);                     /* ARF */
polf (4, f16_DE_right_1); 
	color (silver4);
polf (4, f16_DE_right_2); 
	color (silver3);
polf (4, f16_CD_left_1); 
	color (silver4);
polf (4, f16_AB_left_2); 
	color (silver8);
polf (4, f16_AB_right_6); 
	color (silver3);
polf (4, f16_AB_left_1); 
	color (silver5);
polf (5, f16_right_front_wing); 
	color (silver3);
polf (3, f16_right_missle_yz1); 
polf (3, f16_right_missle_xz1); 
	color (silver7);
polf (4, f16_AB_right_5); 
	color (silver6);                     /* ARF */
polf (4, f16_AB_right_4); 
	color (silver3);
polf (4, f16_CD_top); 
	color (silver5);
polf (3, f16_tip_left_3); 
	color (silver4);
polf (3, f16_tip_left_2); 
	color (silver3);
polf (3, f16_tip_left_1); 
	color (silver9);
polf (3, f16_tip_bottom); 
	color (silver5);
polf (4, f16_BD_right_3); 
	color (silver8);
polf (3, f16_tip_right_6); 
	color (silver7);                     /* ARF */
polf (3, f16_tip_right_5); 
	color (silver4);
polf (4, f16_BD_right_2); 
	color (silver6);
polf (3, f16_tip_right_4); 
	color (silver3);
polf (4, f16_AB_top); 
	color (silver5);
polf (4, f16_AB_right_3); 
	color (silver3);
polf (4, f16_AB_right_1); 
	color (silver4);
polf (4, f16_AB_right_2); 
	color (silver3);
polf (4, f16_CD_right_1); 
polf (3, f16_tip_top); 
	color (silver5);                     /* ARF */
polf (3, f16_tip_right_3); 
	color (silver3);
polf (3, f16_tip_right_1); 
	color (silver4);
polf (3, f16_tip_right_2); 
	color (silver6);
polf (5, f16_TAIL_bottom); 
polf (4, f16_TAIL_top); 
        color(silver4);
polf (4, f16_cockpit_cover);
	color (silver1);
polf (8, f16_pilot_head_xy); 
polf (8, f16_pilot_head_xz); 
polf (8, f16_pilot_head_yz); 
setpattern(3);
        color (silver6);
polf (3, f16_cockpit_back_tip_1); 
polf (3, f16_cockpit_back_tip_2); 
polf (4, f16_cockpit_middle_4); 
polf (4, f16_cockpit_middle_3); 
polf (3, f16_cockpit_tip_4); 
polf (3, f16_cockpit_tip_3); 
polf (3, f16_cockpit_back_tip_4);                      /* ARF */
polf (3, f16_cockpit_back_tip_3); 
polf (4, f16_cockpit_middle_1); 
polf (4, f16_cockpit_middle_2); 
polf (3, f16_cockpit_tip_1); 
polf (3, f16_cockpit_tip_2); 
setpattern(0);
closeobj();


makeobj(obj++);		/* view[4] BELOW_LEFT_BEHIND */
/*  151 of 164 polygons visible  */
setpattern(0);
	color (silver1);
polf (8, f16_pilot_head_yz); 
polf (8, f16_pilot_head_xz); 
polf (8, f16_pilot_head_xy); 
setpattern(3);
        color (silver6);
polf (3, f16_cockpit_tip_2); 
polf (3, f16_cockpit_tip_1); 
polf (4, f16_cockpit_middle_2); 
polf (4, f16_cockpit_middle_1); 
polf (3, f16_cockpit_back_tip_3); 
polf (3, f16_cockpit_back_tip_4); 
polf (3, f16_cockpit_tip_3); 
polf (3, f16_cockpit_tip_4); 
polf (4, f16_cockpit_middle_3); 
polf (4, f16_cockpit_middle_4);                /*  BLB  */ 
polf (3, f16_cockpit_back_tip_2); 
polf (3, f16_cockpit_back_tip_1); 
setpattern(0);
	color (silver6);
polf (4, f16_TAIL_top); 
polf (5, f16_TAIL_bottom); 
	color (silver4);
polf (3, f16_tip_right_2); 
	color (silver3);
polf (3, f16_tip_right_1); 
	color (silver5);
polf (3, f16_tip_right_3); 
	color (silver3);
polf (3, f16_tip_top); 
	color (silver6);
polf (3, f16_tip_right_4); 
	color (silver7);                /*  BLB  */ 
polf (3, f16_tip_right_5); 
	color (silver8);
polf (3, f16_tip_right_6); 
	color (silver9);
polf (3, f16_tip_bottom); 
	color (silver3);
polf (3, f16_tip_left_1); 
	color (silver4);
polf (3, f16_tip_left_2); 
	color (silver5);
polf (3, f16_tip_left_3); 
	color (silver6);
polf (4, f16_AB_right_4); 
	color (silver7);
polf (4, f16_AB_right_5); 
	color (silver3);
polf (3, f16_right_missle_xz1); 
polf (3, f16_right_missle_yz1);                 /*  BLB  */ 
	color (silver5);
polf (5, f16_right_front_wing); 
	color (silver3);
polf (4, f16_AB_left_1); 
	color (silver8);
polf (4, f16_AB_right_6); 
	color (silver9);
polf (4, f16_AB_bottom); 
	color (silver4);
polf (4, f16_AB_left_2); 
	color (silver3);
polf (4, f16_CD_left_1); 
	color (silver4);
polf (4, f16_DE_right_2); 
	color (silver3);
polf (4, f16_DE_right_1); 
	color (silver5);
polf (4, f16_DE_right_3); 
polf (4, f16_AB_left_3); 
	color (silver3);
polf (4, f16_DE_top); 
	color (silver5);                /*  BLB  */ 
polf (3, f16_right_wing_chunk); 
	color (silver3);
polf (4, f16_right_missle_yz2); 
polf (4, f16_right_missle_xz2); 
	color (silver5);
polf (3, f16_right_wing_fattener); 
	color (silver6);
polf (3, f16_tip_left_4); 
	color (silver8);
polf (3, f16_tip_left_6); 
	color (silver7);
polf (3, f16_tip_left_5); 
	color (silver9);
polf (3, f16_BD_bottom); 
	color (silver4);
polf (4, f16_BD_left_2); 
	color (silver6);
polf (3, f16_BD_right_4); 
	color (silver8);
polf (3, f16_BD_right_6);                 /*  BLB  */ 
	color (silver3);
polf (4, f16_right_outer_wing); 
	color (silver7);
polf (3, f16_BD_right_5); 
	color (silver5);
polf (3, f16_BD_right_extra); 
	color (silver3);
polf (6, f16_right_missle_yz3); 
polf (6, f16_right_missle_xz3); 
	color (silver5);
polf (4, f16_BD_left_3); 
polf (3, f16_SCOOP_right_extra); 
	color (silver4);
polf (3, f16_SCOOP_right_2); 
	color (silver8);
polf (4, f16_AB_left_6); 
	color (silver6);
polf (4, f16_AB_left_4); 
	color (silver7);
polf (4, f16_AB_left_5); 
	color (silver4);                /*  BLB  */ 
polf (4, f16_EF_right_2); 
	color (silver3);
polf (4, f16_EF_right_1); 
	color (silver5);
polf (4, f16_EF_right_3); 
	color (silver3);
polf (4, f16_DE_left_1); 
polf (4, f16_EF_top_right); 
	color (silver4);
polf (4, f16_DE_left_2); 
	color (silver5);
polf (3, f16_BD_left_extra); 
	color (silver6);
polf (3, f16_BD_left_4); 
	color (silver7);
polf (3, f16_BD_left_5); 
	color (silver8);
polf (3, f16_BD_left_6); 
	color (silver5);
polf (4, f16_DE_left_3);                 /*  BLB  */ 
polf (7, f16_right_middle_wing); 
	color (silver6);
polf (4, f16_SCOOP_right_4); 
	color (silver5);
polf (5, f16_left_front_wing); 
	color (silver6);
polf (4, f16_DE_right_4); 
	color (silver7);
polf (4, f16_DE_right_5); 
	color (silver8);
polf (4, f16_DE_right_6); 
	color (silver7);
polf (4, f16_SCOOP_right_5); 
	color (silver3);
polf (4, f16_EF_top_left); 
	color (silver5);
polf (3, f16_left_middle_wing_chunk); 
	color (silver3);
polf (4, f16_right_back_wing); 
	color (silver4);
polf (3, f16_SCOOP_left_1);                 /*  BLB  */ 
	color (silver3);
polf (4, f16_EF_left_1); 
	color (silver5);
polf (3, f16_SCOOP_left_2); 
	color (silver9);
polf (4, f16_DE_bottom); 
	color (silver8);
polf (4, f16_SCOOP_right_6); 
	color (silver5);
polf (3, f16_left_wing_fattener); 
	color (silver4);
polf (4, f16_EF_left_2); 
	color (silver5);
polf (4, f16_EF_left_3); 
	color (silver9);
polf (4, f16_SCOOP_bottom); 
	color (silver6);
polf (4, f16_EF_right_4); 
	color (silver7);
polf (4, f16_EF_right_5); 
	color (silver8);
polf (4, f16_EF_right_6); 
	color (silver6);                /*  BLB  */ 
polf (4, f16_SCOOP_left_4); 
polf (4, f16_DE_left_4); 
	color (silver8);
polf (4, f16_DE_left_6); 
	color (silver7);
polf (4, f16_DE_left_5); 
	color (silver9);
polf (4, f16_EF_bottom); 
	color (silver8);
polf (4, f16_SCOOP_left_6); 
	color (silver7);
polf (4, f16_SCOOP_left_5); 
	color (silver6);
polf (4, f16_EF_left_4); 
	color (silver8);
polf (4, f16_EF_left_6); 
	color (silver7);
polf (4, f16_EF_left_5); 
	color (red);
polf (9, f16_FIRE_right); 
polf (7, f16_FIRE_left); 
	color (silver4);                /*  BLB  */ 
polf (4, f16_FG_right_2); 
	color (silver3);
polf (4, f16_FG_right_1); 
	color (silver5);
polf (4, f16_FG_right_3); 
	color (silver3);
polf (4, f16_FG_top); 


	color (silver5);                /*  BLB  */ 
polf (7, f16_left_middle_wing); 
	color (silver3);
polf (4, f16_FG_left_1); 
	color (silver4);
polf (4, f16_FG_left_2); 
	color (silver3);
polf (4, f16_left_outer_wing); 
	color (silver5);
polf (4, f16_FG_left_3); 


	color (silver3);                /*  BLB  */ 
polf (3, f16_left_missle_yz1); 
polf (3, f16_left_missle_xz1); 
	color (silver6);
polf (4, f16_FG_right_4); 
	color (silver7);
polf (4, f16_FG_right_5); 
	color (silver3);
polf (4, f16_left_missle_xz2); 
polf (4, f16_left_missle_yz2); 
	color (silver8);
polf (4, f16_FG_right_6); 
	color (silver9);
polf (4, f16_FG_bottom); 


	color (silver3);
polf (4, f16_left_back_wing); 
polf (6, f16_left_missle_xz3); 
polf (6, f16_left_missle_yz3); 
	color (silver6);
polf (4, f16_FG_left_4); 
	color (silver8);
polf (4, f16_FG_left_6); 
	color (silver7);
polf (4, f16_FG_left_5); 
closeobj();


makeobj(obj++);		/* view[5] BELOW_RIGHT_BEHIND */
/*  150 of 164 polygons visible  */
setpattern(0);
	color (silver1);
polf (8, f16_pilot_head_yz); 
polf (8, f16_pilot_head_xz); 
polf (8, f16_pilot_head_xy); 
setpattern(3);
        color (silver6);
polf (3, f16_cockpit_tip_3); 
polf (3, f16_cockpit_tip_4); 
polf (4, f16_cockpit_middle_3); 
polf (4, f16_cockpit_middle_4); 
polf (3, f16_cockpit_back_tip_2); 
polf (3, f16_cockpit_back_tip_1);                 /*  BRB  */ 
polf (3, f16_cockpit_tip_2); 
polf (3, f16_cockpit_tip_1); 
polf (4, f16_cockpit_middle_2); 
polf (4, f16_cockpit_middle_1); 
polf (3, f16_cockpit_back_tip_3); 
polf (3, f16_cockpit_back_tip_4); 
setpattern(0);
	color (silver6);
polf (4, f16_TAIL_top); 
polf (5, f16_TAIL_bottom); 
	color (silver4);
polf (3, f16_tip_left_2); 
	color (silver3);
polf (3, f16_tip_left_1); 
	color (silver5);
polf (3, f16_tip_left_3); 
	color (silver6);                 /*  BRB  */ 
polf (3, f16_tip_left_4); 
	color (silver7);
polf (3, f16_tip_left_5); 
	color (silver8);
polf (3, f16_tip_left_6); 
	color (silver3);
polf (3, f16_tip_top); 
polf (3, f16_tip_right_1); 
	color (silver4);
polf (3, f16_tip_right_2); 
	color (silver5);
polf (3, f16_tip_right_3); 
	color (silver6);
polf (4, f16_AB_left_4); 
	color (silver7);
polf (4, f16_AB_left_5); 
	color (silver3);
polf (3, f16_left_missle_yz1); 
polf (3, f16_left_missle_xz1); 
	color (silver5);
polf (5, f16_left_front_wing);                  /*  BRB  */ 
	color (silver3);
polf (4, f16_AB_right_1); 
	color (silver8);
polf (4, f16_AB_left_6); 
	color (silver3);
polf (4, f16_CD_right_1); 
	color (silver4);
polf (4, f16_AB_right_2); 
polf (4, f16_DE_left_2); 
	color (silver3);
polf (4, f16_DE_left_1); 
	color (silver5);
polf (4, f16_AB_right_3); 
polf (3, f16_left_middle_wing_chunk); 
	color (silver3);
polf (4, f16_left_missle_xz2); 
polf (4, f16_left_missle_yz2); 
	color (silver5);
polf (3, f16_left_wing_fattener); 
	color (silver9);                 /*  BRB  */ 
polf (3, f16_tip_bottom); 
	color (silver6);
polf (3, f16_tip_right_4); 
	color (silver8);
polf (3, f16_tip_right_6); 
	color (silver7);
polf (3, f16_tip_right_5); 
	color (silver4);
polf (4, f16_BD_right_2); 
	color (silver6);
polf (3, f16_BD_left_4); 
	color (silver8);
polf (3, f16_BD_left_6); 
	color (silver3);
polf (4, f16_left_outer_wing); 
	color (silver7);
polf (3, f16_BD_left_5); 
	color (silver5);                 /*  BRB  */ 
polf (3, f16_BD_left_extra); 
	color (silver3);
polf (6, f16_left_missle_yz3); 
polf (6, f16_left_missle_xz3); 
	color (silver5);
polf (4, f16_BD_right_3); 
	color (silver9);
polf (4, f16_AB_bottom); 
	color (silver8);
polf (4, f16_AB_right_6); 
	color (silver6);
polf (4, f16_AB_right_4); 
	color (silver7);
polf (4, f16_AB_right_5); 
	color (silver3);
polf (4, f16_DE_top); 
	color (silver5);
polf (3, f16_SCOOP_left_extra); 
	color (silver4);                 /*  BRB  */ 
polf (4, f16_EF_left_2); 
	color (silver3);
polf (4, f16_EF_left_1); 
	color (silver5);
polf (3, f16_SCOOP_left_2); 
polf (4, f16_EF_left_3); 
	color (silver3);
polf (4, f16_DE_right_1); 
polf (4, f16_EF_top_left); 
	color (silver4);
polf (4, f16_DE_right_2); 
	color (silver5);
polf (3, f16_BD_right_extra); 
	color (silver6);
polf (3, f16_BD_right_4); 
	color (silver7);
polf (3, f16_BD_right_5); 
	color (silver8);
polf (3, f16_BD_right_6); 
	color (silver5);                 /*  BRB  */ 
polf (4, f16_DE_right_3); 
	color (silver9);
polf (3, f16_BD_bottom); 
	color (silver5);
polf (7, f16_left_middle_wing); 
polf (5, f16_right_front_wing); 
	color (silver6);
polf (4, f16_SCOOP_left_4); 
polf (4, f16_DE_left_4); 
	color (silver7);
polf (4, f16_DE_left_5); 
	color (silver5);
polf (3, f16_SCOOP_right_1); 
	color (silver4);
polf (3, f16_SCOOP_right_2); 
	color (silver8);
polf (4, f16_DE_left_6); 
	color (silver7);
polf (4, f16_SCOOP_left_5); 
	color (silver3);                 /*  BRB  */ 
polf (4, f16_EF_top_right); 
	color (silver5);
polf (3, f16_right_wing_chunk); 
	color (silver3);
polf (4, f16_left_back_wing); 
polf (4, f16_EF_right_1); 
	color (silver8);
polf (4, f16_SCOOP_left_6); 
	color (silver5);
polf (3, f16_right_wing_fattener); 
	color (silver4);
polf (4, f16_EF_right_2); 
	color (silver5);
polf (4, f16_EF_right_3); 
	color (silver6);
polf (4, f16_EF_left_4); 
	color (silver7);
polf (4, f16_EF_left_5); 
	color (silver6);                 /*  BRB  */ 
polf (4, f16_SCOOP_right_4); 
	color (silver8);
polf (4, f16_EF_left_6); 
	color (silver9);
polf (4, f16_DE_bottom); 
	color (silver6);
polf (4, f16_DE_right_4); 
        color (silver8);
polf (4, f16_DE_right_6); 
	color (silver7);
polf (4, f16_DE_right_5); 
	color (silver8);
polf (4, f16_SCOOP_right_6); 
	color (silver7);
polf (4, f16_SCOOP_right_5); 
	color (silver9);
polf (4, f16_SCOOP_bottom); 
	color (silver9);
polf (4, f16_EF_bottom); 
	color (silver6);
polf (4, f16_EF_right_4);                  /*  BRB  */ 
	color (silver8);
polf (4, f16_EF_right_6); 
	color (silver7);
polf (4, f16_EF_right_5); 
	color (red);
polf (7, f16_FIRE_left); 
polf (9, f16_FIRE_right); 
	color (silver4);
polf (4, f16_FG_left_2); 
	color (silver3);
polf (4, f16_FG_left_1); 
	color (silver5);
polf (4, f16_FG_left_3); 


	color (silver5);
polf (7, f16_right_middle_wing); 
	color (silver3);
polf (4, f16_FG_top); 
polf (4, f16_FG_right_1); 
	color (silver4);
polf (4, f16_FG_right_2); 
	color (silver3);
polf (4, f16_right_outer_wing); 
	color (silver5);
polf (4, f16_FG_right_3); 


	color (silver3);                 /*  BRB  */ 
polf (3, f16_right_missle_xz1); 
polf (3, f16_right_missle_yz1); 
	color (silver6);
polf (4, f16_FG_left_4); 
	color (silver7);
polf (4, f16_FG_left_5); 
	color (silver3);
polf (4, f16_right_missle_xz2); 
polf (4, f16_right_missle_yz2); 
	color (silver8);
polf (4, f16_FG_left_6); 


	color (silver3);
polf (4, f16_right_back_wing); 
polf (6, f16_right_missle_xz3); 
polf (6, f16_right_missle_yz3); 
	color (silver9);
polf (4, f16_FG_bottom); 
	color (silver6);
polf (4, f16_FG_right_4); 
	color (silver8);
polf (4, f16_FG_right_6); 
	color (silver7);
polf (4, f16_FG_right_5); 
closeobj();


makeobj(obj++);		/* view[6] ABOVE_LEFT_BEHIND */
/*  153 of 164 polygons visible  */


	color (silver9);
polf (4, f16_SCOOP_bottom); 
	color (silver7);
polf (4, f16_SCOOP_right_5); 
	color (silver8);
polf (4, f16_SCOOP_right_6); 
	color (silver6);
polf (4, f16_SCOOP_right_4);                /*  ALB  */ 
	color (silver7);
polf (3, f16_tip_right_5); 
	color (silver8);
polf (3, f16_tip_right_6); 
	color (silver6);
polf (3, f16_tip_right_4); 
	color (silver9);
polf (3, f16_tip_bottom); 
	color (silver3);
polf (3, f16_right_missle_xz1); 
polf (3, f16_right_missle_yz1); 
	color (silver5);
polf (5, f16_right_front_wing); 


	color (silver8);
polf (4, f16_SCOOP_left_6); 
	color (silver7);
polf (4, f16_SCOOP_left_5); 
	color (silver5);
polf (3, f16_right_wing_chunk); 
	color (silver4);
polf (3, f16_SCOOP_right_2); 
	color (silver5);
polf (3, f16_SCOOP_right_extra); 
polf (3, f16_tip_right_3); 
polf (3, f16_SCOOP_right_1); 
	color (silver4);
polf (3, f16_tip_right_2);                 /*  ALB  */ 
	color (silver3);
polf (4, f16_right_missle_xz2); 
polf (3, f16_tip_right_1); 
polf (4, f16_right_missle_yz2); 
	color (silver6);
polf (3, f16_SCOOP_top); 
	color (silver3);
polf (3, f16_tip_top); 
	color (silver8);
polf (3, f16_tip_left_6); 
	color (silver7);
polf (3, f16_tip_left_5); 
	color (silver6);
polf (4, f16_SCOOP_left_4); 
polf (3, f16_tip_left_4); 
	color (silver5);                /*  ALB  */ 
polf (3, f16_right_wing_fattener); 
	color (silver9);
polf (3, f16_BD_bottom); 
	color (silver8);
polf (3, f16_BD_right_6); 
	color (silver7);
polf (3, f16_BD_right_5); 
	color (silver6);
polf (3, f16_BD_right_4); 
	color (silver5);
polf (3, f16_BD_right_extra); 
	color (silver3);
polf (4, f16_right_outer_wing); 
	color (silver5);
polf (4, f16_AB_right_3); 
	color (silver3);
polf (6, f16_right_missle_yz3); 
polf (6, f16_right_missle_xz3); 
	color (silver4);
polf (4, f16_AB_right_2);                 /*  ALB  */ 
	color (silver8);
polf (4, f16_AB_left_6); 
	color (silver3);
polf (4, f16_AB_right_1); 
	color (silver7);
polf (4, f16_AB_left_5); 
	color (silver3);
polf (4, f16_AB_top); 
	color (silver6);
polf (4, f16_AB_left_4); 
	color (silver5);
polf (3, f16_SCOOP_left_2); 
	color (silver7);
polf (4, f16_EF_right_5); 
	color (silver8);
polf (4, f16_EF_right_6); 
	color (silver4);
polf (3, f16_SCOOP_left_1);                 /*  ALB  */ 
	color (silver5);
polf (3, f16_SCOOP_left_extra); 
	color (silver6);
polf (4, f16_EF_right_4); 
	color (silver8);
polf (4, f16_DE_left_6); 
	color (silver9);
polf (4, f16_EF_bottom); 
	color (silver5);
polf (4, f16_BD_right_3); 
polf (3, f16_tip_left_3); 
	color (silver3);
polf (3, f16_tip_left_1); 
	color (silver4);
polf (3, f16_tip_left_2); 
	color (silver7);
polf (3, f16_BD_left_5); 
	color (silver8);                /*  ALB  */ 
polf (3, f16_BD_left_6); 
	color (silver6);
polf (3, f16_BD_left_4); 
	color (silver7);
polf (4, f16_DE_left_5); 
	color (silver4);
polf (4, f16_BD_right_2); 
	color (silver6);
polf (4, f16_DE_left_4); 
	color (silver5);
polf (7, f16_right_middle_wing); 


	color (silver5);
polf (5, f16_left_front_wing); 
	color (silver3);                /*  ALB  */ 
polf (4, f16_CD_top); 
	color (silver5);
polf (4, f16_AB_left_3); 
polf (4, f16_DE_right_3); 
	color (silver3);
polf (4, f16_AB_left_1); 
	color (silver4);
polf (4, f16_AB_left_2); 
polf (4, f16_DE_right_2); 
	color (silver3);
polf (4, f16_right_back_wing); 
	color (silver5);
polf (3, f16_left_middle_wing_chunk); 
	color (silver3);
polf (4, f16_DE_right_1); 
	color (silver8);
polf (4, f16_EF_left_6); 
	color (silver3);
polf (4, f16_DE_top); 
	color (silver7);
polf (4, f16_EF_left_5); 
	color (silver3);                /*  ALB  */ 
polf (4, f16_CD_right_1); 
	color (silver5);
polf (3, f16_left_wing_fattener); 
	color (silver6);
polf (4, f16_EF_left_4); 
	color (silver5);
polf (4, f16_BD_left_3); 
	color (silver4);
polf (4, f16_BD_left_2); 
	color (silver5);
polf (4, f16_EF_right_3); 
	color (silver4);
polf (4, f16_EF_right_2); 
	color (silver3);
polf (4, f16_EF_right_1); 
	color (silver5);
polf (4, f16_DE_left_3); 
	color (silver3);
polf (4, f16_EF_top_right); 
polf (4, f16_DE_left_1);                 /*  ALB  */ 
	color (silver4);
polf (4, f16_DE_left_2); 
	color (silver3);
polf (4, f16_CD_left_1); 
	color (silver3);
polf (4, f16_EF_top_left); 
	color (silver5);
polf (4, f16_EF_left_3); 
	color (silver3);
polf (4, f16_EF_left_1); 
	color (silver4);
polf (4, f16_EF_left_2); 
	color (red);
polf (9, f16_FIRE_right); 
polf (7, f16_FIRE_left); 
	color (silver7);
polf (4, f16_FG_right_5); 
	color (silver8);                /*  ALB  */ 
polf (4, f16_FG_right_6); 
	color (silver6);
polf (4, f16_FG_right_4); 
	color (silver9);
polf (4, f16_FG_bottom); 
	color (silver5);
polf (7, f16_left_middle_wing); 
	color (silver8);
polf (4, f16_FG_left_6); 
	color (silver7);
polf (4, f16_FG_left_5); 
	color (silver3);
polf (4, f16_left_outer_wing); 
	color (silver6);
polf (4, f16_FG_left_4); 
	color (silver3);
polf (3, f16_left_missle_yz1); 
polf (3, f16_left_missle_xz1);                 /*  ALB  */ 
	color (silver5);
polf (4, f16_FG_right_3); 
	color (silver4);
polf (4, f16_FG_right_2); 
	color (silver3);
polf (4, f16_left_missle_xz2); 
polf (4, f16_left_missle_yz2); 
polf (4, f16_FG_right_1); 
polf (4, f16_FG_top); 
polf (4, f16_left_back_wing); 
polf (6, f16_left_missle_xz3); 
polf (6, f16_left_missle_yz3); 
	color (silver5);
polf (4, f16_FG_left_3); 
	color (silver3);
polf (4, f16_FG_left_1); 
	color (silver4);
polf (4, f16_FG_left_2); 
        color(silver4);
polf (4, f16_cockpit_cover);
	color (silver1);                /*  ALB  */ 
polf (8, f16_pilot_head_yz); 
polf (8, f16_pilot_head_xz); 
polf (8, f16_pilot_head_xy); 
setpattern(3);
        color (silver6);
polf (3, f16_cockpit_tip_1); 
polf (3, f16_cockpit_tip_2); 
polf (4, f16_cockpit_middle_1); 
polf (4, f16_cockpit_middle_2); 
polf (3, f16_cockpit_back_tip_4); 
polf (3, f16_cockpit_back_tip_3); 
polf (3, f16_cockpit_tip_4); 
polf (3, f16_cockpit_tip_3); 
polf (4, f16_cockpit_middle_4); 
polf (4, f16_cockpit_middle_3); 
polf (3, f16_cockpit_back_tip_1); 
polf (3, f16_cockpit_back_tip_2); 
setpattern(0);                /*  ALB  */ 
polf (5, f16_TAIL_bottom); 
polf (4, f16_TAIL_top); 
closeobj();


makeobj(obj++);		/* view[7] ABOVE_RIGHT_BEHIND */
/*  153 of 164 polygons visible  */
	color (silver8);


	color (silver7);
polf (4, f16_SCOOP_left_5);                 /*  ARB  */ 
	color (silver8);
polf (4, f16_SCOOP_left_6); 
	color (silver6);
polf (4, f16_SCOOP_left_4); 
	color (silver7);
polf (3, f16_tip_left_5); 
	color (silver8);
polf (3, f16_tip_left_6); 
	color (silver6);
polf (3, f16_tip_left_4); 
	color (silver9);
polf (4, f16_SCOOP_bottom); 
	color (silver3);
polf (3, f16_left_missle_xz1); 
polf (3, f16_left_missle_yz1); 
	color (silver5);
polf (5, f16_left_front_wing); 


	color (silver8);
polf (4, f16_SCOOP_right_6); 
	color (silver5);
polf (3, f16_SCOOP_left_2); 
	color (silver5);
polf (3, f16_SCOOP_left_extra);                  /*  ARB  */ 
	color (silver4);
polf (3, f16_SCOOP_left_1); 
	color (silver7);
polf (4, f16_SCOOP_right_5); 
	color (silver5);
polf (3, f16_left_middle_wing_chunk); 
polf (3, f16_tip_left_3); 
	color (silver4);
polf (3, f16_tip_left_2); 
	color (silver3);
polf (3, f16_tip_left_1); 
polf (4, f16_left_missle_xz2); 
polf (4, f16_left_missle_yz2); 
	color (silver9);
polf (3, f16_tip_bottom); 
	color (silver8);
polf (3, f16_tip_right_6); 
	color (silver7);
polf (3, f16_tip_right_5); 
	color (silver6);                 /*  ARB  */ 
polf (3, f16_tip_right_4); 
	color (silver5);
polf (3, f16_left_wing_fattener); 
	color (silver6);
polf (4, f16_SCOOP_right_4); 
	color (silver8);
polf (3, f16_BD_left_6); 
	color (silver7);
polf (3, f16_BD_left_5); 
	color (silver6);
polf (3, f16_BD_left_4); 
	color (silver5);
polf (3, f16_BD_left_extra); 
	color (silver3);
polf (4, f16_left_outer_wing); 
	color (silver5);
polf (4, f16_AB_left_3); 
	color (silver3);
polf (6, f16_left_missle_yz3); 
polf (6, f16_left_missle_xz3); 
	color (silver4);                 /*  ARB  */ 
polf (4, f16_AB_left_2); 
	color (silver8);
polf (4, f16_AB_right_6); 
	color (silver3);
polf (4, f16_AB_left_1); 
	color (silver7);
polf (4, f16_AB_right_5); 
	color (silver6);
polf (4, f16_AB_right_4); 
	color (silver7);
polf (4, f16_EF_left_5); 
	color (silver8);
polf (4, f16_EF_left_6); 
	color (silver6);
polf (4, f16_EF_left_4); 
	color (silver8);                 /*  ARB  */ 
polf (4, f16_DE_right_6); 
	color (silver5);
polf (4, f16_BD_left_3); 
	color (silver6);
polf (3, f16_SCOOP_top); 
	color (silver3);
polf (3, f16_tip_top); 
	color (silver5);
polf (3, f16_tip_right_3); 
	color (silver4);
polf (3, f16_SCOOP_right_2); 
	color (silver3);
polf (3, f16_tip_right_1); 
	color (silver4);
polf (3, f16_tip_right_2); 
	color (silver7);
polf (3, f16_BD_right_5); 
	color (silver8);
polf (3, f16_BD_right_6);                  /*  ARB  */ 
	color (silver5);
polf (3, f16_SCOOP_right_1); 
	color (silver6);
polf (3, f16_BD_right_4); 
	color (silver5);
polf (3, f16_SCOOP_right_extra); 
	color (silver7);
polf (4, f16_DE_right_5); 
	color (silver4);
polf (4, f16_BD_left_2); 
	color (silver9);
polf (3, f16_BD_bottom); 
	color (silver6);
polf (4, f16_DE_right_4); 
	color (silver5);
polf (7, f16_left_middle_wing); 


	color (silver5);
polf (5, f16_right_front_wing); 
	color (silver3);
polf (4, f16_AB_top); 
	color (silver5);
polf (4, f16_AB_right_3); 
polf (4, f16_DE_left_3);                  /*  ARB  */ 
	color (silver3);
polf (4, f16_AB_right_1); 
	color (silver4);
polf (4, f16_AB_right_2); 
polf (4, f16_DE_left_2); 
	color (silver9);
polf (4, f16_EF_bottom); 
	color (silver3);
polf (4, f16_left_back_wing); 
	color (silver5);
polf (3, f16_right_wing_chunk); 
	color (silver3);
polf (4, f16_DE_left_1); 
	color (silver8);
polf (4, f16_EF_right_6); 
	color (silver3);
polf (4, f16_CD_left_1); 
	color (silver7);
polf (4, f16_EF_right_5); 
	color (silver5);
polf (3, f16_right_wing_fattener); 
	color (silver6);                 /*  ARB  */ 
polf (4, f16_EF_right_4); 
	color (silver5);
polf (4, f16_BD_right_3); 
	color (silver4);
polf (4, f16_BD_right_2); 
	color (silver3);
polf (4, f16_CD_top); 
	color (silver5);
polf (4, f16_EF_left_3); 
	color (silver4);
polf (4, f16_EF_left_2); 
	color (silver3);
polf (4, f16_EF_left_1); 
polf (4, f16_DE_top); 
	color (silver5);
polf (4, f16_DE_right_3); 
	color (silver3);
polf (4, f16_EF_top_left);                  /*  ARB  */ 
polf (4, f16_DE_right_1); 
	color (silver4);
polf (4, f16_DE_right_2); 
	color (silver3);
polf (4, f16_CD_right_1); 
	color (silver3);
polf (4, f16_EF_top_right); 
	color (silver5);
polf (4, f16_EF_right_3); 
	color (silver3);
polf (4, f16_EF_right_1); 
	color (silver4);
polf (4, f16_EF_right_2); 
	color (red);
polf (9, f16_FIRE_right); 
polf (7, f16_FIRE_left); 
	color (silver6);
polf (4, f16_FG_left_4); 
	color (silver7);
polf (4, f16_FG_left_5); 
	color (silver8);
polf (4, f16_FG_left_6); 
	color (silver5);
polf (7, f16_right_middle_wing); 
	color (silver9);                 /*  ARB  */ 
polf (4, f16_FG_bottom); 
	color (silver8);
polf (4, f16_FG_right_6); 
	color (silver7);
polf (4, f16_FG_right_5); 
	color (silver3);
polf (4, f16_right_outer_wing); 
	color (silver6);
polf (4, f16_FG_right_4); 
	color (silver3);
polf (3, f16_right_missle_yz1); 
polf (3, f16_right_missle_xz1); 
	color (silver5);
polf (4, f16_FG_left_3); 
	color (silver4);
polf (4, f16_FG_left_2); 
	color (silver3);
polf (4, f16_right_missle_xz2); 
polf (4, f16_right_missle_yz2); 
polf (4, f16_FG_left_1);                  /*  ARB  */ 
polf (4, f16_right_back_wing); 
polf (6, f16_right_missle_xz3); 
polf (6, f16_right_missle_yz3); 
polf (4, f16_FG_top); 
	color (silver5);
polf (4, f16_FG_right_3); 
	color (silver3);
polf (4, f16_FG_right_1); 
	color (silver4);
polf (4, f16_FG_right_2); 
        color(silver4);
polf (4, f16_cockpit_cover);
	color (silver1);
polf (8, f16_pilot_head_yz); 
polf (8, f16_pilot_head_xz); 
polf (8, f16_pilot_head_xy); 
setpattern(3);
        color (silver6);
polf (3, f16_cockpit_tip_4); 
polf (3, f16_cockpit_tip_3); 
polf (4, f16_cockpit_middle_4); 
polf (4, f16_cockpit_middle_3);                  /*  ARB  */ 
polf (3, f16_cockpit_back_tip_1); 
polf (3, f16_cockpit_back_tip_2); 
polf (3, f16_cockpit_tip_1); 
polf (3, f16_cockpit_tip_2); 
polf (4, f16_cockpit_middle_1); 
polf (4, f16_cockpit_middle_2); 
polf (3, f16_cockpit_back_tip_4); 
polf (3, f16_cockpit_back_tip_3); 
setpattern(0);
polf (5, f16_TAIL_bottom); 
polf (4, f16_TAIL_top); 
closeobj();

makeobj(obj++);   /* 9th view - from far away */
color(silver6);
polf(9,f16_far_away_1);
polf(6,f16_far_away_2);
polf(4,f16_far_away_3);
polf(9,f16_far_away_4);
polf(6,f16_far_away_5);
polf(7,f16_far_away_6);
closeobj();

makeobj(obj++);   /* 10th view - shadow */
color(black);
setpattern(3);
polf(9,f16_far_away_1);
polf(6,f16_far_away_2);
polf(4,f16_far_away_3);
polf(9,f16_far_away_4);
polf(6,f16_far_away_5);
polf(7,f16_far_away_6);
setpattern(0);
closeobj();

makeobj(obj+100);   /* 11th view - shadow from far away */
color(black);
setpattern(3);
polf(9,f16_far_away_1);
polf(6,f16_far_away_2);
polf(4,f16_far_away_3);
polf(9,f16_far_away_4);
polf(6,f16_far_away_5);
polf(7,f16_far_away_6);
setpattern(0);
closeobj();

popmatrix();
}
