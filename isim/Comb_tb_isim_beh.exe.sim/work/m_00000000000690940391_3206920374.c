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
static const char *ng0 = "C:/Users/tate/Documents/School-UCT/4th Year/EEE4084F/workspace/cic_interpolator/SRAM.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_55_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(56, ng0);

LAB2:    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2496);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2496);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 744);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t5, 32, t4, 32);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t3, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB6:    xsi_set_current_line(60, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 2656);
    t18 = (t0 + 2656);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2656);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2496);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 1, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2496);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 2496);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, *((unsigned int *)t17), t37, 0LL);
    goto LAB8;

}

static void Always_65_1(char *t0)
{
    char t20[8];
    char t21[8];
    char t22[8];
    char t23[8];
    char t41[8];
    char t42[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    int t36;
    int t37;
    int t38;
    int t39;
    char *t40;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4144);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1776U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(85, ng0);

LAB29:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2656);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t18 = (t0 + 2656);
    t19 = (t18 + 64U);
    t24 = *((char **)t19);
    t25 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t20, 32, t4, t12, t24, 1, 1, t25, 32, 1);
    t26 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t26, t20, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(67, ng0);

LAB9:    xsi_set_current_line(68, ng0);
    t11 = (t0 + 1616U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(74, ng0);

LAB20:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2656);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t18 = (t0 + 2656);
    t19 = (t18 + 64U);
    t24 = *((char **)t19);
    t25 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t20, 32, t4, t12, t24, 1, 1, t25, 32, 1);
    t26 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t26, t20, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t11 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t11, 32, t5, 32);
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t4, 32, t20, 32);
    t12 = (t21 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t21);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2656);
    t4 = (t0 + 2656);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2656);
    t18 = (t12 + 64U);
    t19 = *((char **)t18);
    t24 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t20, t21, t11, t19, 1, 1, t24, 32, 1);
    t25 = (t20 + 4);
    t6 = *((unsigned int *)t25);
    t34 = (!(t6));
    t26 = (t21 + 4);
    t7 = *((unsigned int *)t26);
    t36 = (!(t7));
    t37 = (t34 && t36);
    if (t37 == 1)
        goto LAB27;

LAB28:
LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(68, ng0);

LAB13:    xsi_set_current_line(69, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t11 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t11, 32, t5, 32);
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t4, 32, t20, 32);
    t12 = (t21 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t21);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(71, ng0);

LAB17:    xsi_set_current_line(72, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 2656);
    t24 = (t0 + 2656);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 2656);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = (t0 + 2496);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 1, 1, t32, 32, 1);
    t33 = (t22 + 4);
    t13 = *((unsigned int *)t33);
    t34 = (!(t13));
    t35 = (t23 + 4);
    t14 = *((unsigned int *)t35);
    t36 = (!(t14));
    t37 = (t34 && t36);
    if (t37 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t5, 32);
    t11 = (t0 + 2496);
    xsi_vlogvar_assign_value(t11, t20, 0, 0, 32);
    goto LAB14;

LAB18:    t15 = *((unsigned int *)t22);
    t16 = *((unsigned int *)t23);
    t38 = (t15 - t16);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, *((unsigned int *)t23), t39, 0LL);
    goto LAB19;

LAB22:    xsi_set_current_line(78, ng0);

LAB24:    xsi_set_current_line(79, ng0);
    t18 = (t0 + 2656);
    t19 = (t18 + 56U);
    t24 = *((char **)t19);
    t25 = (t0 + 2656);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2656);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 2496);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng2)));
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t33, 32, t35, 32);
    xsi_vlog_generic_get_array_select_value(t22, 32, t24, t27, t30, 1, 1, t23, 32, 1);
    t40 = (t0 + 2656);
    t43 = (t0 + 2656);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 2656);
    t47 = (t46 + 64U);
    t48 = *((char **)t47);
    t49 = (t0 + 2496);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    xsi_vlog_generic_convert_array_indices(t41, t42, t45, t48, 1, 1, t51, 32, 1);
    t52 = (t41 + 4);
    t13 = *((unsigned int *)t52);
    t34 = (!(t13));
    t53 = (t42 + 4);
    t14 = *((unsigned int *)t53);
    t36 = (!(t14));
    t37 = (t34 && t36);
    if (t37 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t5, 32);
    t11 = (t0 + 2496);
    xsi_vlogvar_assign_value(t11, t20, 0, 0, 32);
    goto LAB21;

LAB25:    t15 = *((unsigned int *)t41);
    t16 = *((unsigned int *)t42);
    t38 = (t15 - t16);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t40, t22, 0, *((unsigned int *)t42), t39, 0LL);
    goto LAB26;

LAB27:    t8 = *((unsigned int *)t20);
    t9 = *((unsigned int *)t21);
    t38 = (t8 - t9);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t21), t39, 0LL);
    goto LAB28;

}


extern void work_m_00000000000690940391_3206920374_init()
{
	static char *pe[] = {(void *)Initial_55_0,(void *)Always_65_1};
	xsi_register_didat("work_m_00000000000690940391_3206920374", "isim/Comb_tb_isim_beh.exe.sim/work/m_00000000000690940391_3206920374.didat");
	xsi_register_executes(pe);
}
