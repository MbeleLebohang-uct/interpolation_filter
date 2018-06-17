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
static const char *ng0 = "C:/Users/tate/Documents/School-UCT/4th Year/EEE4084F/workspace/cic_interpolator/cic_tb.v";
static const char *ng1 = "%d\n";
static unsigned int ng2[] = {0U, 0U};
static const char *ng3 = "data.txt";
static const char *ng4 = "r";
static const char *ng5 = "data_out.txt";
static const char *ng6 = "w";
static int ng7[] = {10, 0};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {5, 0};
static int ng10[] = {100, 0};



static void Always_37_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1448);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng1, 2, t0, (char)119, t8, 32);
    goto LAB2;

}

static void Initial_45_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(46, ng0);

LAB2:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng3, ng4);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(51, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng5, ng6);
    t1 = (t3 + 4);
    *((int *)t1) = 0;
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB1:    return;
}

static void Initial_55_3(char *t0)
{
    char t12[8];
    char t13[8];
    char t25[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);

LAB4:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6048);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 6048);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4264);
    *((int *)t2) = 1;
    t3 = (t0 + 3944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB6:    xsi_set_current_line(57, ng0);
    t10 = (t0 + 4248);
    *((int *)t10) = 1;
    t11 = (t0 + 3944);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 6048);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB9:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6052);
    *((int *)t8) = t7;

LAB10:    t9 = (t0 + 6052);
    if (*((int *)t9) > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(62, ng0);

LAB14:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    *((int *)t13) = xsi_vlogfile_feof(*((unsigned int *)t8));
    t9 = (t13 + 4);
    *((int *)t9) = 0;
    memset(t12, 0, 8);
    t10 = (t13 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t13);
    t14 = (t6 & t5);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t10) == 0)
        goto LAB15;

LAB17:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;

LAB18:    t16 = (t12 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 6056);
    *((int *)t8) = t7;

LAB23:    t9 = (t0 + 6056);
    if (*((int *)t9) > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(70, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

LAB11:    xsi_set_current_line(61, ng0);
    t10 = (t0 + 4280);
    *((int *)t10) = 1;
    t11 = (t0 + 3944);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    t2 = (t0 + 6052);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB10;

LAB15:    *((unsigned int *)t12) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(63, ng0);

LAB21:    xsi_set_current_line(64, ng0);
    t22 = (t0 + 1928);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = (t0 + 1768);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_bit_copy(t25, 0, t28, 0, 32);
    *((int *)t29) = xsi_vlogfile_fscanf(*((unsigned int *)t24), ng1, 2, t0, (char)119, t25, 32);
    t30 = (t29 + 4);
    *((int *)t30) = 0;
    t31 = (t0 + 1768);
    xsi_vlogvar_assign_value(t31, t25, 0, 0, 32);
    t32 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t32, t29, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4296);
    *((int *)t2) = 1;
    t3 = (t0 + 3944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    goto LAB14;

LAB24:    xsi_set_current_line(67, ng0);
    t10 = (t0 + 4312);
    *((int *)t10) = 1;
    t11 = (t0 + 3944);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    t2 = (t0 + 6056);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB23;

}


extern void work_m_00000000000432360189_0912569754_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_40_1,(void *)Initial_45_2,(void *)Initial_55_3};
	xsi_register_didat("work_m_00000000000432360189_0912569754", "isim/Comb_tb_isim_beh.exe.sim/work/m_00000000000432360189_0912569754.didat");
	xsi_register_executes(pe);
}
