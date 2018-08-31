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
static const char *ng0 = "C:/Users/eidma/Desktop/Final Project/Divider.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {32U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};



static void NetDecl_34_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t26[8];
    char t42[8];
    char t43[8];
    char t66[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3368);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t8) == 0)
        goto LAB4;

LAB6:    t14 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t14) = 1;

LAB7:    memset(t4, 0, 8);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t5);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB11:    t22 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB12;

LAB13:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t22);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t22) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t66, 8);

LAB20:    t67 = (t0 + 5872);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memcpy(t71, t3, 8);
    xsi_driver_vfirst_trans(t67, 0, 31U);
    t72 = (t0 + 5760);
    *((int *)t72) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB11;

LAB12:    t27 = (t0 + 2888);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t26, 0, 8);
    t30 = (t26 + 4);
    t31 = (t29 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t26) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & 4294967295U);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 & 4294967295U);
    goto LAB13;

LAB14:    t44 = (t0 + 2888);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t43, 0, 8);
    t47 = (t43 + 4);
    t48 = (t46 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 0);
    *((unsigned int *)t43) = t50;
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 0);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t53 & 4294967295U);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 & 4294967295U);
    memset(t42, 0, 8);
    t55 = (t42 + 4);
    t56 = (t43 + 4);
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    *((unsigned int *)t42) = t58;
    *((unsigned int *)t55) = 0;
    if (*((unsigned int *)t56) != 0)
        goto LAB22;

LAB21:    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & 4294967295U);
    t64 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t64 & 4294967295U);
    t65 = ((char*)((ng1)));
    memset(t66, 0, 8);
    xsi_vlog_unsigned_add(t66, 32, t42, 32, t65, 32);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t26, 32, t66, 32);
    goto LAB20;

LAB18:    memcpy(t3, t26, 8);
    goto LAB20;

LAB22:    t59 = *((unsigned int *)t42);
    t60 = *((unsigned int *)t56);
    *((unsigned int *)t42) = (t59 | t60);
    t61 = *((unsigned int *)t55);
    t62 = *((unsigned int *)t56);
    *((unsigned int *)t55) = (t61 | t62);
    goto LAB21;

}

static void NetDecl_39_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 63U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t0 + 5936);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t3);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0U);
    t26 = (t0 + 5776);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Initial_41_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);

LAB1:    return;
}

static void Initial_42_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_44_4(char *t0)
{
    char t13[16];
    char t14[8];
    char t15[8];
    char t16[8];
    char t26[8];
    char t29[8];
    char t44[8];
    char t52[8];
    char t91[16];
    char t98[16];
    char t99[8];
    char t112[8];
    char t118[8];
    char t130[8];
    char t143[8];
    char t151[8];
    char t159[8];
    char t191[8];
    char t199[8];
    char t227[8];
    char t235[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    int t183;
    int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t234;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    char *t239;
    char *t240;
    char *t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    char *t249;
    char *t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    int t259;
    int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    char *t267;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5792);
    *((int *)t2) = 1;
    t3 = (t0 + 5472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB149;

LAB148:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB149;

LAB152:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB150;

LAB151:    t28 = (t14 + 4);
    t6 = *((unsigned int *)t28);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB153;

LAB154:
LAB155:
LAB8:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB189;

LAB186:    if (t21 != 0)
        goto LAB188;

LAB187:    *((unsigned int *)t14) = 1;

LAB189:    t28 = (t14 + 4);
    t24 = *((unsigned int *)t28);
    t25 = (~(t24));
    t31 = *((unsigned int *)t14);
    t32 = (t31 & t25);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB190;

LAB191:
LAB192:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3528);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 6);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    memset(t16, 0, 8);
    t5 = (t15 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB17:    t12 = (t16 + 4);
    t22 = *((unsigned int *)t16);
    t23 = (!(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB18;

LAB19:    memcpy(t52, t16, 8);

LAB20:    memset(t14, 0, 8);
    t80 = (t52 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t52);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t80) != 0)
        goto LAB34;

LAB35:    t87 = (t14 + 4);
    t88 = *((unsigned int *)t14);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB36;

LAB37:    t94 = *((unsigned int *)t14);
    t95 = (~(t94));
    t96 = *((unsigned int *)t87);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t87) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t14) > 0)
        goto LAB42;

LAB43:    memcpy(t13, t98, 16);

LAB44:    t114 = (t0 + 2888);
    xsi_vlogvar_assign_value(t114, t13, 0, 0, 64);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t2) == 0)
        goto LAB47;

LAB49:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;

LAB50:    memset(t16, 0, 8);
    t5 = (t15 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t5) != 0)
        goto LAB53;

LAB54:    t12 = (t16 + 4);
    t22 = *((unsigned int *)t16);
    t23 = (!(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB55;

LAB56:    memcpy(t52, t16, 8);

LAB57:    memset(t14, 0, 8);
    t80 = (t52 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t52);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t80) != 0)
        goto LAB71;

LAB72:    t87 = (t14 + 4);
    t88 = *((unsigned int *)t14);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB73;

LAB74:    t94 = *((unsigned int *)t14);
    t95 = (~(t94));
    t96 = *((unsigned int *)t87);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t87) > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t14) > 0)
        goto LAB79;

LAB80:    memcpy(t13, t98, 16);

LAB81:    t116 = (t0 + 3048);
    xsi_vlogvar_assign_value(t116, t13, 0, 0, 64);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t2) != 0)
        goto LAB86;

LAB87:    t5 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t5);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB88;

LAB89:    memcpy(t235, t14, 8);

LAB90:    t267 = (t0 + 3368);
    xsi_vlogvar_assign_value(t267, t235, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB8;

LAB10:    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t16) = 1;
    goto LAB17;

LAB16:    t11 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB17;

LAB18:    t27 = (t0 + 1368U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t29 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 31);
    t33 = (t32 & 1);
    *((unsigned int *)t29) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 31);
    t36 = (t35 & 1);
    *((unsigned int *)t27) = t36;
    memset(t26, 0, 8);
    t37 = (t29 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t29);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t37) == 0)
        goto LAB21;

LAB23:    t43 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t43) = 1;

LAB24:    memset(t44, 0, 8);
    t45 = (t26 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t26);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t45) != 0)
        goto LAB27;

LAB28:    t53 = *((unsigned int *)t16);
    t54 = *((unsigned int *)t44);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = (t16 + 4);
    t57 = (t44 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB21:    *((unsigned int *)t26) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t44) = 1;
    goto LAB28;

LAB27:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB28;

LAB29:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t16 + 4);
    t67 = (t44 + 4);
    t68 = *((unsigned int *)t66);
    t69 = (~(t68));
    t70 = *((unsigned int *)t16);
    t71 = (t70 & t69);
    t72 = *((unsigned int *)t67);
    t73 = (~(t72));
    t74 = *((unsigned int *)t44);
    t75 = (t74 & t73);
    t76 = (~(t71));
    t77 = (~(t75));
    t78 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t78 & t76);
    t79 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t79 & t77);
    goto LAB31;

LAB32:    *((unsigned int *)t14) = 1;
    goto LAB35;

LAB34:    t86 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB35;

LAB36:    t92 = (t0 + 1368U);
    t93 = *((char **)t92);
    t92 = ((char*)((ng4)));
    xsi_vlogtype_concat(t91, 64, 64, 2U, t92, 32, t93, 32);
    goto LAB37;

LAB38:    t100 = (t0 + 1368U);
    t101 = *((char **)t100);
    memset(t99, 0, 8);
    t100 = (t99 + 4);
    t102 = (t101 + 4);
    t103 = *((unsigned int *)t101);
    t104 = (~(t103));
    *((unsigned int *)t99) = t104;
    *((unsigned int *)t100) = 0;
    if (*((unsigned int *)t102) != 0)
        goto LAB46;

LAB45:    t109 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t109 & 4294967295U);
    t110 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t110 & 4294967295U);
    t111 = ((char*)((ng1)));
    memset(t112, 0, 8);
    xsi_vlog_unsigned_add(t112, 32, t99, 32, t111, 32);
    t113 = ((char*)((ng4)));
    xsi_vlogtype_concat(t98, 64, 64, 2U, t113, 32, t112, 32);
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t13, 64, t91, 64, t98, 64);
    goto LAB44;

LAB42:    memcpy(t13, t91, 16);
    goto LAB44;

LAB46:    t105 = *((unsigned int *)t99);
    t106 = *((unsigned int *)t102);
    *((unsigned int *)t99) = (t105 | t106);
    t107 = *((unsigned int *)t100);
    t108 = *((unsigned int *)t102);
    *((unsigned int *)t100) = (t107 | t108);
    goto LAB45;

LAB47:    *((unsigned int *)t15) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t16) = 1;
    goto LAB54;

LAB53:    t11 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB54;

LAB55:    t27 = (t0 + 1528U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t29 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 31);
    t33 = (t32 & 1);
    *((unsigned int *)t29) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 31);
    t36 = (t35 & 1);
    *((unsigned int *)t27) = t36;
    memset(t26, 0, 8);
    t37 = (t29 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t29);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB61;

LAB59:    if (*((unsigned int *)t37) == 0)
        goto LAB58;

LAB60:    t43 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t43) = 1;

LAB61:    memset(t44, 0, 8);
    t45 = (t26 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t26);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t45) != 0)
        goto LAB64;

LAB65:    t53 = *((unsigned int *)t16);
    t54 = *((unsigned int *)t44);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = (t16 + 4);
    t57 = (t44 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB57;

LAB58:    *((unsigned int *)t26) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t44) = 1;
    goto LAB65;

LAB64:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB65;

LAB66:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t16 + 4);
    t67 = (t44 + 4);
    t68 = *((unsigned int *)t66);
    t69 = (~(t68));
    t70 = *((unsigned int *)t16);
    t71 = (t70 & t69);
    t72 = *((unsigned int *)t67);
    t73 = (~(t72));
    t74 = *((unsigned int *)t44);
    t75 = (t74 & t73);
    t76 = (~(t71));
    t77 = (~(t75));
    t78 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t78 & t76);
    t79 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t79 & t77);
    goto LAB68;

LAB69:    *((unsigned int *)t14) = 1;
    goto LAB72;

LAB71:    t86 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB72;

LAB73:    t92 = ((char*)((ng4)));
    t93 = (t0 + 1528U);
    t100 = *((char **)t93);
    t93 = ((char*)((ng4)));
    xsi_vlogtype_concat(t91, 64, 64, 3U, t93, 1, t100, 32, t92, 31);
    goto LAB74;

LAB75:    t101 = ((char*)((ng4)));
    t102 = (t0 + 1528U);
    t111 = *((char **)t102);
    memset(t99, 0, 8);
    t102 = (t99 + 4);
    t113 = (t111 + 4);
    t103 = *((unsigned int *)t111);
    t104 = (~(t103));
    *((unsigned int *)t99) = t104;
    *((unsigned int *)t102) = 0;
    if (*((unsigned int *)t113) != 0)
        goto LAB83;

LAB82:    t109 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t109 & 4294967295U);
    t110 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t110 & 4294967295U);
    t114 = ((char*)((ng1)));
    memset(t112, 0, 8);
    xsi_vlog_unsigned_add(t112, 32, t99, 32, t114, 32);
    t115 = ((char*)((ng4)));
    xsi_vlogtype_concat(t98, 64, 64, 3U, t115, 1, t112, 32, t101, 31);
    goto LAB76;

LAB77:    xsi_vlog_unsigned_bit_combine(t13, 64, t91, 64, t98, 64);
    goto LAB81;

LAB79:    memcpy(t13, t91, 16);
    goto LAB81;

LAB83:    t105 = *((unsigned int *)t99);
    t106 = *((unsigned int *)t113);
    *((unsigned int *)t99) = (t105 | t106);
    t107 = *((unsigned int *)t102);
    t108 = *((unsigned int *)t113);
    *((unsigned int *)t102) = (t107 | t108);
    goto LAB82;

LAB84:    *((unsigned int *)t14) = 1;
    goto LAB87;

LAB86:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB87;

LAB88:    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t27 = (t12 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t15) = t22;
    t23 = *((unsigned int *)t27);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t11) = t25;
    memset(t16, 0, 8);
    t28 = (t15 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (~(t31));
    t33 = *((unsigned int *)t15);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t28) != 0)
        goto LAB93;

LAB94:    t37 = (t16 + 4);
    t36 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t37);
    t39 = (t36 || t38);
    if (t39 > 0)
        goto LAB95;

LAB96:    memcpy(t52, t16, 8);

LAB97:    memset(t99, 0, 8);
    t93 = (t52 + 4);
    t103 = *((unsigned int *)t93);
    t104 = (~(t103));
    t105 = *((unsigned int *)t52);
    t106 = (t105 & t104);
    t107 = (t106 & 1U);
    if (t107 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t93) != 0)
        goto LAB111;

LAB112:    t101 = (t99 + 4);
    t108 = *((unsigned int *)t99);
    t109 = (!(t108));
    t110 = *((unsigned int *)t101);
    t117 = (t109 || t110);
    if (t117 > 0)
        goto LAB113;

LAB114:    memcpy(t199, t99, 8);

LAB115:    memset(t227, 0, 8);
    t228 = (t199 + 4);
    t229 = *((unsigned int *)t228);
    t230 = (~(t229));
    t231 = *((unsigned int *)t199);
    t232 = (t231 & t230);
    t233 = (t232 & 1U);
    if (t233 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t228) != 0)
        goto LAB143;

LAB144:    t236 = *((unsigned int *)t14);
    t237 = *((unsigned int *)t227);
    t238 = (t236 & t237);
    *((unsigned int *)t235) = t238;
    t239 = (t14 + 4);
    t240 = (t227 + 4);
    t241 = (t235 + 4);
    t242 = *((unsigned int *)t239);
    t243 = *((unsigned int *)t240);
    t244 = (t242 | t243);
    *((unsigned int *)t241) = t244;
    t245 = *((unsigned int *)t241);
    t246 = (t245 != 0);
    if (t246 == 1)
        goto LAB145;

LAB146:
LAB147:    goto LAB90;

LAB91:    *((unsigned int *)t16) = 1;
    goto LAB94;

LAB93:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB94;

LAB95:    t43 = (t0 + 1368U);
    t45 = *((char **)t43);
    memset(t29, 0, 8);
    t43 = (t29 + 4);
    t51 = (t45 + 4);
    t40 = *((unsigned int *)t45);
    t41 = (t40 >> 31);
    t42 = (t41 & 1);
    *((unsigned int *)t29) = t42;
    t46 = *((unsigned int *)t51);
    t47 = (t46 >> 31);
    t48 = (t47 & 1);
    *((unsigned int *)t43) = t48;
    memset(t26, 0, 8);
    t56 = (t29 + 4);
    t49 = *((unsigned int *)t56);
    t50 = (~(t49));
    t53 = *((unsigned int *)t29);
    t54 = (t53 & t50);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB101;

LAB99:    if (*((unsigned int *)t56) == 0)
        goto LAB98;

LAB100:    t57 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t57) = 1;

LAB101:    memset(t44, 0, 8);
    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t58) != 0)
        goto LAB104;

LAB105:    t64 = *((unsigned int *)t16);
    t65 = *((unsigned int *)t44);
    t68 = (t64 & t65);
    *((unsigned int *)t52) = t68;
    t67 = (t16 + 4);
    t80 = (t44 + 4);
    t86 = (t52 + 4);
    t69 = *((unsigned int *)t67);
    t70 = *((unsigned int *)t80);
    t72 = (t69 | t70);
    *((unsigned int *)t86) = t72;
    t73 = *((unsigned int *)t86);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB106;

LAB107:
LAB108:    goto LAB97;

LAB98:    *((unsigned int *)t26) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t44) = 1;
    goto LAB105;

LAB104:    t66 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB105;

LAB106:    t76 = *((unsigned int *)t52);
    t77 = *((unsigned int *)t86);
    *((unsigned int *)t52) = (t76 | t77);
    t87 = (t16 + 4);
    t92 = (t44 + 4);
    t78 = *((unsigned int *)t16);
    t79 = (~(t78));
    t81 = *((unsigned int *)t87);
    t82 = (~(t81));
    t83 = *((unsigned int *)t44);
    t84 = (~(t83));
    t85 = *((unsigned int *)t92);
    t88 = (~(t85));
    t71 = (t79 & t82);
    t75 = (t84 & t88);
    t89 = (~(t71));
    t90 = (~(t75));
    t94 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t94 & t89);
    t95 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t95 & t90);
    t96 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t96 & t89);
    t97 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t97 & t90);
    goto LAB108;

LAB109:    *((unsigned int *)t99) = 1;
    goto LAB112;

LAB111:    t100 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB112;

LAB113:    t102 = (t0 + 1528U);
    t111 = *((char **)t102);
    memset(t118, 0, 8);
    t102 = (t118 + 4);
    t113 = (t111 + 4);
    t119 = *((unsigned int *)t111);
    t120 = (t119 >> 31);
    t121 = (t120 & 1);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t113);
    t123 = (t122 >> 31);
    t124 = (t123 & 1);
    *((unsigned int *)t102) = t124;
    memset(t112, 0, 8);
    t114 = (t118 + 4);
    t125 = *((unsigned int *)t114);
    t126 = (~(t125));
    t127 = *((unsigned int *)t118);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB119;

LAB117:    if (*((unsigned int *)t114) == 0)
        goto LAB116;

LAB118:    t115 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t115) = 1;

LAB119:    memset(t130, 0, 8);
    t116 = (t112 + 4);
    t131 = *((unsigned int *)t116);
    t132 = (~(t131));
    t133 = *((unsigned int *)t112);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t116) != 0)
        goto LAB122;

LAB123:    t137 = (t130 + 4);
    t138 = *((unsigned int *)t130);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB124;

LAB125:    memcpy(t159, t130, 8);

LAB126:    memset(t191, 0, 8);
    t192 = (t159 + 4);
    t193 = *((unsigned int *)t192);
    t194 = (~(t193));
    t195 = *((unsigned int *)t159);
    t196 = (t195 & t194);
    t197 = (t196 & 1U);
    if (t197 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t192) != 0)
        goto LAB136;

LAB137:    t200 = *((unsigned int *)t99);
    t201 = *((unsigned int *)t191);
    t202 = (t200 | t201);
    *((unsigned int *)t199) = t202;
    t203 = (t99 + 4);
    t204 = (t191 + 4);
    t205 = (t199 + 4);
    t206 = *((unsigned int *)t203);
    t207 = *((unsigned int *)t204);
    t208 = (t206 | t207);
    *((unsigned int *)t205) = t208;
    t209 = *((unsigned int *)t205);
    t210 = (t209 != 0);
    if (t210 == 1)
        goto LAB138;

LAB139:
LAB140:    goto LAB115;

LAB116:    *((unsigned int *)t112) = 1;
    goto LAB119;

LAB120:    *((unsigned int *)t130) = 1;
    goto LAB123;

LAB122:    t136 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB123;

LAB124:    t141 = (t0 + 1368U);
    t142 = *((char **)t141);
    memset(t143, 0, 8);
    t141 = (t143 + 4);
    t144 = (t142 + 4);
    t145 = *((unsigned int *)t142);
    t146 = (t145 >> 31);
    t147 = (t146 & 1);
    *((unsigned int *)t143) = t147;
    t148 = *((unsigned int *)t144);
    t149 = (t148 >> 31);
    t150 = (t149 & 1);
    *((unsigned int *)t141) = t150;
    memset(t151, 0, 8);
    t152 = (t143 + 4);
    t153 = *((unsigned int *)t152);
    t154 = (~(t153));
    t155 = *((unsigned int *)t143);
    t156 = (t155 & t154);
    t157 = (t156 & 1U);
    if (t157 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t152) != 0)
        goto LAB129;

LAB130:    t160 = *((unsigned int *)t130);
    t161 = *((unsigned int *)t151);
    t162 = (t160 & t161);
    *((unsigned int *)t159) = t162;
    t163 = (t130 + 4);
    t164 = (t151 + 4);
    t165 = (t159 + 4);
    t166 = *((unsigned int *)t163);
    t167 = *((unsigned int *)t164);
    t168 = (t166 | t167);
    *((unsigned int *)t165) = t168;
    t169 = *((unsigned int *)t165);
    t170 = (t169 != 0);
    if (t170 == 1)
        goto LAB131;

LAB132:
LAB133:    goto LAB126;

LAB127:    *((unsigned int *)t151) = 1;
    goto LAB130;

LAB129:    t158 = (t151 + 4);
    *((unsigned int *)t151) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB130;

LAB131:    t171 = *((unsigned int *)t159);
    t172 = *((unsigned int *)t165);
    *((unsigned int *)t159) = (t171 | t172);
    t173 = (t130 + 4);
    t174 = (t151 + 4);
    t175 = *((unsigned int *)t130);
    t176 = (~(t175));
    t177 = *((unsigned int *)t173);
    t178 = (~(t177));
    t179 = *((unsigned int *)t151);
    t180 = (~(t179));
    t181 = *((unsigned int *)t174);
    t182 = (~(t181));
    t183 = (t176 & t178);
    t184 = (t180 & t182);
    t185 = (~(t183));
    t186 = (~(t184));
    t187 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t187 & t185);
    t188 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t188 & t186);
    t189 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t189 & t185);
    t190 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t190 & t186);
    goto LAB133;

LAB134:    *((unsigned int *)t191) = 1;
    goto LAB137;

LAB136:    t198 = (t191 + 4);
    *((unsigned int *)t191) = 1;
    *((unsigned int *)t198) = 1;
    goto LAB137;

LAB138:    t211 = *((unsigned int *)t199);
    t212 = *((unsigned int *)t205);
    *((unsigned int *)t199) = (t211 | t212);
    t213 = (t99 + 4);
    t214 = (t191 + 4);
    t215 = *((unsigned int *)t213);
    t216 = (~(t215));
    t217 = *((unsigned int *)t99);
    t218 = (t217 & t216);
    t219 = *((unsigned int *)t214);
    t220 = (~(t219));
    t221 = *((unsigned int *)t191);
    t222 = (t221 & t220);
    t223 = (~(t218));
    t224 = (~(t222));
    t225 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t225 & t223);
    t226 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t226 & t224);
    goto LAB140;

LAB141:    *((unsigned int *)t227) = 1;
    goto LAB144;

LAB143:    t234 = (t227 + 4);
    *((unsigned int *)t227) = 1;
    *((unsigned int *)t234) = 1;
    goto LAB144;

LAB145:    t247 = *((unsigned int *)t235);
    t248 = *((unsigned int *)t241);
    *((unsigned int *)t235) = (t247 | t248);
    t249 = (t14 + 4);
    t250 = (t227 + 4);
    t251 = *((unsigned int *)t14);
    t252 = (~(t251));
    t253 = *((unsigned int *)t249);
    t254 = (~(t253));
    t255 = *((unsigned int *)t227);
    t256 = (~(t255));
    t257 = *((unsigned int *)t250);
    t258 = (~(t257));
    t259 = (t252 & t254);
    t260 = (t256 & t258);
    t261 = (~(t259));
    t262 = (~(t260));
    t263 = *((unsigned int *)t241);
    *((unsigned int *)t241) = (t263 & t261);
    t264 = *((unsigned int *)t241);
    *((unsigned int *)t241) = (t264 & t262);
    t265 = *((unsigned int *)t235);
    *((unsigned int *)t235) = (t265 & t261);
    t266 = *((unsigned int *)t235);
    *((unsigned int *)t235) = (t266 & t262);
    goto LAB147;

LAB149:    t27 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB151;

LAB150:    *((unsigned int *)t14) = 1;
    goto LAB151;

LAB153:    xsi_set_current_line(65, ng0);

LAB156:    xsi_set_current_line(67, ng0);
    t30 = (t0 + 2888);
    t37 = (t30 + 56U);
    t43 = *((char **)t37);
    t45 = (t0 + 3048);
    t51 = (t45 + 56U);
    t56 = *((char **)t51);
    xsi_vlog_unsigned_minus(t13, 64, t43, 64, t56, 64);
    t57 = (t0 + 3208);
    xsi_vlogvar_assign_value(t57, t13, 0, 0, 64);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_lshift(t14, 32, t4, 32, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 8);
    t12 = (t4 + 12);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 31);
    t17 = (t10 & 1);
    *((unsigned int *)t5) = t17;
    memset(t14, 0, 8);
    t27 = (t15 + 4);
    t18 = *((unsigned int *)t27);
    t19 = (~(t18));
    t20 = *((unsigned int *)t15);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB160;

LAB158:    if (*((unsigned int *)t27) == 0)
        goto LAB157;

LAB159:    t28 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t28) = 1;

LAB160:    t30 = (t14 + 4);
    t23 = *((unsigned int *)t30);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t31 = (t25 & t24);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB161;

LAB162:
LAB163:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB170;

LAB168:    if (*((unsigned int *)t5) == 0)
        goto LAB167;

LAB169:    t11 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t11) = 1;

LAB170:    memset(t15, 0, 8);
    t12 = (t16 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB171;

LAB172:    if (*((unsigned int *)t12) != 0)
        goto LAB173;

LAB174:    t28 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    t23 = *((unsigned int *)t28);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB175;

LAB176:    t25 = *((unsigned int *)t15);
    t31 = (~(t25));
    t32 = *((unsigned int *)t28);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB177;

LAB178:    if (*((unsigned int *)t28) > 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t15) > 0)
        goto LAB181;

LAB182:    memcpy(t14, t29, 8);

LAB183:    t67 = (t0 + 2568);
    xsi_vlogvar_assign_value(t67, t14, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    xsi_vlog_unsigned_rshift(t13, 64, t4, 64, t5, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 64);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 6, t4, 6, t5, 6);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 6);
    goto LAB155;

LAB157:    *((unsigned int *)t14) = 1;
    goto LAB160;

LAB161:    xsi_set_current_line(71, ng0);

LAB164:    xsi_set_current_line(73, ng0);
    t37 = (t0 + 3208);
    t43 = (t37 + 56U);
    t45 = *((char **)t43);
    t51 = (t0 + 2888);
    xsi_vlogvar_assign_value(t51, t45, 0, 0, 64);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t14, t11, 2, t12, 32, 1);
    t27 = (t14 + 4);
    t6 = *((unsigned int *)t27);
    t71 = (!(t6));
    if (t71 == 1)
        goto LAB165;

LAB166:    goto LAB163;

LAB165:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t14), 1);
    goto LAB166;

LAB167:    *((unsigned int *)t16) = 1;
    goto LAB170;

LAB171:    *((unsigned int *)t15) = 1;
    goto LAB174;

LAB173:    t27 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB174;

LAB175:    t30 = (t0 + 2728);
    t37 = (t30 + 56U);
    t43 = *((char **)t37);
    goto LAB176;

LAB177:    t45 = (t0 + 2728);
    t51 = (t45 + 56U);
    t56 = *((char **)t51);
    memset(t26, 0, 8);
    t57 = (t26 + 4);
    t58 = (t56 + 4);
    t34 = *((unsigned int *)t56);
    t35 = (~(t34));
    *((unsigned int *)t26) = t35;
    *((unsigned int *)t57) = 0;
    if (*((unsigned int *)t58) != 0)
        goto LAB185;

LAB184:    t41 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t41 & 4294967295U);
    t42 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t42 & 4294967295U);
    t66 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t26, 32, t66, 32);
    goto LAB178;

LAB179:    xsi_vlog_unsigned_bit_combine(t14, 32, t43, 32, t29, 32);
    goto LAB183;

LAB181:    memcpy(t14, t43, 8);
    goto LAB183;

LAB185:    t36 = *((unsigned int *)t26);
    t38 = *((unsigned int *)t58);
    *((unsigned int *)t26) = (t36 | t38);
    t39 = *((unsigned int *)t57);
    t40 = *((unsigned int *)t58);
    *((unsigned int *)t57) = (t39 | t40);
    goto LAB184;

LAB188:    t27 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB189;

LAB190:    xsi_set_current_line(88, ng0);

LAB193:    xsi_set_current_line(89, ng0);
    t30 = (t0 + 2568);
    t37 = (t30 + 56U);
    t43 = *((char **)t37);
    t45 = (t0 + 2248);
    xsi_vlogvar_assign_value(t45, t43, 0, 0, 32);
    goto LAB192;

}


extern void work_m_00000000003123982679_3819539136_init()
{
	static char *pe[] = {(void *)NetDecl_34_0,(void *)NetDecl_39_1,(void *)Initial_41_2,(void *)Initial_42_3,(void *)Always_44_4};
	xsi_register_didat("work_m_00000000003123982679_3819539136", "isim/testBCD_isim_beh.exe.sim/work/m_00000000003123982679_3819539136.didat");
	xsi_register_executes(pe);
}
