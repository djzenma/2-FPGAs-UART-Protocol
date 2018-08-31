/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/eidma/Desktop/Final Project/SegementCounter.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};



static void Initial_23_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_26_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;

LAB0:    t1 = (t0 + 2616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2936);
    *((int *)t2) = 1;
    t3 = (t0 + 2648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 2, t7, 32);
    t9 = (t0 + 1448);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    goto LAB2;

}


extern void work_m_00000000000976864222_1545729217_init()
{
	static char *pe[] = {(void *)Initial_23_0,(void *)Always_26_1};
	xsi_register_didat("work_m_00000000000976864222_1545729217", "isim/receiveTest_isim_beh.exe.sim/work/m_00000000000976864222_1545729217.didat");
	xsi_register_executes(pe);
}
