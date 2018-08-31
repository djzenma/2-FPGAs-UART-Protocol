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
static const char *ng0 = "C:/Users/eidma/Desktop/Final Project/Clock_Divider.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {400, 0};
static int ng4[] = {1, 0};



static void Initial_24_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(24, ng0);

LAB2:    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1744);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1584);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_28_1(char *t0)
{
    char t9[8];
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 2912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3232);
    *((int *)t2) = 1;
    t3 = (t0 + 2944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1744);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t8, 32, t7, 32);
    t10 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t9, 32, t10, 32);
    memset(t12, 0, 8);
    t13 = (t6 + 4);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB9;

LAB6:    if (t24 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t12) = 1;

LAB9:    t28 = (t12 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t5, 32);
    t6 = (t0 + 1744);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 32);
    goto LAB2;

LAB8:    t27 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);

LAB13:    xsi_set_current_line(30, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 1744);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 32);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t5) == 0)
        goto LAB14;

LAB16:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB17:    t7 = (t9 + 4);
    t8 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB19;

LAB18:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t29 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t29 & 1U);
    t10 = (t0 + 1584);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB12;

LAB14:    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB19:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t8);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB18;

}


extern void work_m_00000000003671650302_2275660060_init()
{
	static char *pe[] = {(void *)Initial_24_0,(void *)Always_28_1};
	xsi_register_didat("work_m_00000000003671650302_2275660060", "isim/receiveTest_isim_beh.exe.sim/work/m_00000000003671650302_2275660060.didat");
	xsi_register_executes(pe);
}
