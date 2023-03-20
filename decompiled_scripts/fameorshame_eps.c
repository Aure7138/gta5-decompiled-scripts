#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	struct<3> Local_21 = { 0, 0, 0 } ;
	struct<18> Local_24 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_89 = 0;
	struct<178> Local_90[27];
	var uLocal_4897 = 0;
	struct<24> Local_4898[30];
	var uLocal_5619 = 0;
	struct<24> Local_5620[24];
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	float fLocal_6199 = 0f;
	float fLocal_6200 = 0f;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	bool bLocal_6205 = 0;
	bool bLocal_6206 = 0;
	int iLocal_6207 = 0;
	int iLocal_6208 = 0;
	int iLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	bool bLocal_6214 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_89 = 29;
	fLocal_6199 = 0.075f;
	fLocal_6200 = 0.725f;
	iLocal_6207 = 1;
	iLocal_6208 = 1;
	bLocal_6214 = true;
	unk_0xD80ABA7495D14FDA(1);
	if (unk_0x4B4BD87E3D30C50D(3))
	{
		func_39();
	}
	bLocal_6214 = false;
	unk_0x16AA81661A0624FB(0);
	unk_0x68C5CF653C62F393(1);
	func_34(1);
	unk_0x3C0CECAD08F71003("FOS_EP_1_P6", 8);
	func_17(0);
	func_8(1, 1, 1, 0);
	while (true)
	{
		unk_0x4FF90702C879D619(0f);
		unk_0x793A58190AAE48FC(0f);
		func_7(unk_0x77F050A399DB77ED());
		if (func_2())
		{
			func_39();
		}
		if (bLocal_6206)
		{
			unk_0x812DA59718C7CF24(0.5f, 0.5f);
			func_1(0.1f, 0.1f, "NUMBER", 1, 0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x978803CE12B5FCBA(sParam2);
	unk_0xA50C1D6E503AA51E(iParam3);
	unk_0x1AC4FC30A9B7577A(fParam0, fParam1, iParam4);
}

int func_2()
{
	unk_0xEEE00D02F7C5099B(Local_21.f_0, Local_21.f_1, Local_21.f_2);
	unk_0x131FDF75BBD94FA0(-1f);
	switch (iLocal_6209)
	{
		case 0:
			unk_0xCA6D671341405469(0);
			func_6();
			unk_0xCA6D671341405469(500);
			unk_0xE568A9F724E3F204(0);
			iLocal_6209++;
			break;
		
		case 1:
			if (!unk_0x6A9CCF8AF1D0CCC8())
			{
				if (bLocal_6214)
				{
					func_4();
				}
				unk_0x081248E2DE8DB6A4(uLocal_6203);
				unk_0x50137349427F6296(uLocal_6201, 0.2f, 0.34f, 0.410001f, 0.69f, 100, 100, 100, 255, 0);
				unk_0x081248E2DE8DB6A4(uLocal_6204);
				if (bLocal_6205)
				{
					unk_0x758017413321C628(uLocal_6202, "SET_TEXT");
					func_3("KEYNOTE_NAME");
					func_3("KEYNOTE_TITLE");
					unk_0x098CA28C04E62E55();
					unk_0x50137349427F6296(uLocal_6202, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_3(char* sParam0)
{
	unk_0xC976485333F81CE8(sParam0);
	unk_0xC8C5D5B9E15EB2E2();
}

void func_4()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x63615B86EAB5835F();
	iVar1 = 0;
	while (iVar1 <= (16 - 1))
	{
		if (Local_24[iVar1] != -1)
		{
			if ((!unk_0xB56FEBC510E7E9DE(uLocal_58, iVar1) && iVar0 >= Local_24[iVar1]) && iVar0 < Local_24.f_17[iVar1])
			{
				func_5();
				unk_0x573691DB812DC8AA(&uLocal_58, iVar1);
			}
		}
		iVar1++;
	}
}

void func_5()
{
}

void func_6()
{
}

bool func_7(var uParam0)
{
	if (!unk_0x1F2158D615BC4B25(uParam0))
	{
		return 0;
	}
	return !unk_0x0B6E83A9A7ED3EBA(uParam0);
}

void func_8(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_16(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_15())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_14(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_16(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_14(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_9(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
	}
}

int func_9(int iParam0)
{
	if (func_11(iParam0, 0))
	{
		return 1;
	}
	if (func_10())
	{
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_11(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_12(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_12(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_13();
	}
	if (Global_1315888[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_13()
{
	return Global_1312746;
}

int func_14(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4967E3B78238C06C() != iParam0 && uParam2)
		{
			unk_0x5377CB2488C9CA95(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_15()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 13);
	}
}

void func_17(bool bParam0)
{
	int iVar0;
	
	if (func_7(unk_0x77F050A399DB77ED()))
	{
		unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), 689.1f, 586.5f, 130.5f, 1, 0, 0, 1);
		unk_0xD1C12864812BFA0A(689.1f, 586.5f, 130.5f, 500f, 0);
		unk_0x2D06EBC73345EBB9(unk_0x77F050A399DB77ED(), 1);
	}
	func_33(0);
	func_32(&uLocal_6213, 0);
	unk_0xBF0BB216A3C6E336(689.1f, 586.5f, 130.5f, 80f, 0);
	while (!unk_0x496F0FD72B5C07F1())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x662B16D41D950D87();
	if (bParam0)
	{
		unk_0x564E857358FF5719("LInvader");
		while (!unk_0x4DEBC98223AC90EF("LInvader"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0x3D558D0CEB790C97("EXTRASUNNY");
	iLocal_59[0] = joaat("a_m_y_hipster_01");
	iLocal_59[1] = joaat("a_m_y_hipster_02");
	iLocal_59[2] = joaat("a_m_y_hipster_03");
	iLocal_59[3] = joaat("a_f_y_hipster_01");
	iLocal_59[4] = joaat("a_f_y_hipster_02");
	iLocal_59[5] = joaat("a_f_y_hipster_03");
	iLocal_59[6] = joaat("a_f_y_hipster_04");
	iLocal_59[7] = joaat("a_f_y_bevhills_01");
	iLocal_59[8] = joaat("a_m_m_business_01");
	iLocal_59[9] = joaat("a_m_m_bevhills_02");
	iLocal_59[10] = joaat("a_m_m_skater_01");
	iLocal_59[11] = joaat("a_m_y_beachvesp_01");
	iLocal_59[12] = joaat("a_m_y_bevhills_01");
	iLocal_59[13] = joaat("a_f_m_bevhills_01");
	iLocal_59[14] = joaat("a_m_m_ktown_01");
	iLocal_59[15] = joaat("a_m_y_busicas_01");
	iLocal_59[16] = joaat("a_m_y_business_02");
	iLocal_59[17] = joaat("a_m_y_gay_01");
	iLocal_59[18] = joaat("a_m_y_ktown_02");
	iLocal_59[19] = joaat("a_m_m_bevhills_02");
	iLocal_59[20] = joaat("a_m_y_business_03");
	iLocal_59[21] = joaat("a_m_y_gay_02");
	iLocal_59[22] = joaat("a_m_m_malibu_01");
	iLocal_59[22] = joaat("a_m_y_gay_02");
	iLocal_59[23] = joaat("a_m_y_eastsa_02");
	iLocal_59[24] = joaat("a_m_y_soucent_02");
	iLocal_59[25] = joaat("a_m_y_vinewood_01");
	iLocal_59[26] = joaat("a_m_y_vinewood_02");
	iLocal_59[27] = joaat("a_m_y_vinewood_03");
	iLocal_59[28] = joaat("a_m_y_vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_30(func_31(iVar0), 1);
		iVar0++;
	}
	func_30("misslester1b_crowdlow@14@", 1);
	func_30("misslester1b_crowdlow@24@", 1);
	func_29("BREAKING_NEWS", &uLocal_6202, 1);
	func_29("lifeinvader_presentation", &uLocal_6201, 1);
	func_28("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		func_22(&(Local_90[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_21(&(Local_4898[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		func_20(&(Local_5620[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	unk_0x227C85DAD96E2942(1);
	unk_0xB6C69B69C713C496("Big_Disp", 0);
	unk_0xE6D63FF01AB194AD(joaat("prop_huge_display_01"));
	unk_0xE6D63FF01AB194AD(joaat("prop_huge_display_02"));
	uLocal_6203 = unk_0x3CEC93147F49BDD4("Big_Disp");
	uLocal_6204 = unk_0xC73CF65CFC37D7CE();
	while (unk_0x35FC95FBF6A815E1(unk_0x77F050A399DB77ED()))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x575DA8209967217A())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4EDE34FBADD967A6(2000);
	iLocal_6209 = 0;
	Local_21.f_0 = 12;
	Local_21.f_1 = 0;
	Local_21.f_2 = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		func_18(iVar0);
		iVar0++;
	}
	if (bLocal_6206)
	{
	}
}

void func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_19(iParam0, 0, 10000);
			break;
		
		case 1:
			func_19(iParam0, 9000, 10000);
			break;
		
		case 2:
			func_19(iParam0, 27000, 32000);
			break;
		
		case 3:
			func_19(iParam0, 32000, 42000);
			break;
		
		case 4:
			func_19(iParam0, 51000, 63000);
			break;
		
		case 5:
			func_19(iParam0, 63600, 69000);
			break;
		
		case 6:
			func_19(iParam0, 66000, 70200);
			break;
		
		case 7:
			func_19(iParam0, 69600, joaat("ss1_03_98_lod"));
			break;
		
		case 8:
			func_19(iParam0, 77400, 84000);
			break;
		
		case 12:
			func_19(iParam0, 81000, 93600);
			break;
		
		case 9:
			func_19(iParam0, -1, -1);
			break;
		
		case 11:
			func_19(iParam0, 90000, 154200);
			break;
		
		case 10:
			func_19(iParam0, 129600, 133200);
			break;
		
		case 13:
			func_19(iParam0, 144600, 154200);
			break;
		
		case 14:
			func_19(iParam0, 152700, 154200);
			break;
		
		case 15:
			func_19(iParam0, 154200, 154200);
			break;
	}
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	Local_24[iParam0] = iParam1;
	Local_24.f_17[iParam0] = iParam2;
}

void func_20(var uParam0, int iParam1)
{
	uParam0->f_22 = 0;
	unk_0xA5F70A8B83BDFA49(&uLocal_6197, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_21(var uParam0, int iParam1)
{
	uParam0->f_22 = 0;
	unk_0xA5F70A8B83BDFA49(&uLocal_5619, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_22(var uParam0, int iParam1)
{
	struct<3> Var0;
	
	func_27(uParam0);
	unk_0xA5F70A8B83BDFA49(&uLocal_4897, iParam1);
	switch (iParam1)
	{
		case 0:
			Var0 = { 0f, 0f, (func_26(-4.29f) + 180f) };
			func_24(uParam0, 82047830, 667.319f, 572.133f, 128.521f, Var0, 6, 0, 0);
			func_24(uParam0, 83248680, 666.312f, 571.675f, 128.521f, Var0, 6, 1, 0);
			func_24(uParam0, 71526810, 665.235f, 571.183f, 128.521f, Var0, 6, 2, 0);
			func_24(uParam0, 49826530, 664.124f, 570.679f, 128.521f, Var0, 6, 0, 0);
			func_24(uParam0, 78575440, 663.029f, 570.181f, 128.521f, Var0, 6, 1, 0);
			func_24(uParam0, 12133230, 661.937f, 569.685f, 128.521f, Var0, 6, 2, 0);
			func_24(uParam0, 89665750, 660.839f, 569.194f, 128.521f, Var0, 6, 0, 0);
			func_24(uParam0, 65990810, 659.537f, 569.392f, 128.521f, Var0, 6, 1, 0);
			func_24(uParam0, 21233450, 658.187f, 569.572f, 128.523f, Var0, 4, 0, 1f);
			func_23(&(uParam0->f_155[0 /*11*/]), 659.867f, 571.539f, 128.531f, Var0, 0, 0.5f, -1.5f);
			func_23(&(uParam0->f_155[1 /*11*/]), 660.646f, 567.108f, 128.521f, Var0, 0, 0.5f, -1.5f);
			break;
		
		case 1:
			Var0 = { 0f, 0f, (func_26(-3.98f) + 180f) };
			func_24(uParam0, 21091970, 670.312f, 568.023f, 128.521f, Var0, 5, 0, 0.5f);
			func_24(uParam0, 97482490, 669.189f, 567.502f, 128.522f, Var0, 6, 1, 0);
			func_24(uParam0, 66764240, 668.28f, 566.688f, 128.522f, Var0, 6, 0, 0);
			func_24(uParam0, 82832850, 667.384f, 565.885f, 128.522f, Var0, 6, 2, 0);
			func_24(uParam0, 33636100, 666.491f, 565.085f, 128.522f, Var0, 6, 0, 0);
			func_24(uParam0, 22769640, 665.595f, 564.282f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 2:
			Var0 = { 0f, 0f, (func_26(-3.78f) + 180f) };
			func_24(uParam0, 91480760, 673.7f, 564.799f, 128.521f, Var0, 6, 0, 0);
			func_24(uParam0, 64996320, 672.996f, 563.847f, 128.521f, Var0, 6, 1, 0);
			func_24(uParam0, 30855220, 672.271f, 562.865f, 128.521f, Var0, 6, 2, 0);
			func_24(uParam0, 98921990, 671.557f, 561.897f, 128.521f, Var0, 6, 0, 0);
			func_24(uParam0, 73357200, 670.258f, 561.366f, 128.522f, Var0, 6, 1, 0);
			func_23(&(uParam0->f_155[0 /*11*/]), 669.564f, 563.469f, 128.521f, Var0, 2, -1.5f, -1.5f);
			func_23(&(uParam0->f_155[1 /*11*/]), 672.34f, 559.914f, 128.522f, Var0, 2, -1.5f, -1.5f);
			break;
		
		case 3:
			Var0 = { 0f, 0f, (func_26(-3.38f) + 180f) };
			func_24(uParam0, 89689390, 681.517f, 555.801f, 128.522f, Var0, 6, 0, 0);
			func_24(uParam0, 71057000, 681.796f, 556.967f, 128.522f, Var0, 6, 1, 0);
			func_24(uParam0, 26206390, 682.076f, 558.137f, 128.522f, Var0, 6, 2, 0);
			func_24(uParam0, 58207860, 682.36f, 559.342f, 128.522f, Var0, 6, 0, 0);
			func_24(uParam0, 43622440, 682.635f, 560.475f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 4:
			Var0 = { 0f, 0f, (func_26(-3.17f) + 180f) };
			func_24(uParam0, 78555440, 687.841f, 559.785f, 128.522f, Var0, 6, 0, 0);
			func_24(uParam0, 12324420, 687.807f, 558.602f, 128.522f, Var0, 6, 1, 0);
			func_24(uParam0, 4083210, 687.771f, 557.382f, 128.522f, Var0, 6, 2, 0);
			func_24(uParam0, 2021980, 688.465f, 556.159f, 128.522f, Var0, 6, 0, 0);
			func_24(uParam0, 21091970, 688.431f, 554.961f, 128.521f, Var0, 6, 1, 0);
			func_23(&(uParam0->f_155[0 /*11*/]), 685.931f, 556.306f, 128.522f, Var0, 0, 0.5f, -1.5f);
			func_23(&(uParam0->f_155[1 /*11*/]), 685.897f, 555.108f, 128.521f, Var0, 1, -1.5f, -1.5f);
			break;
		
		case 5:
			Var0 = { 0f, 0f, (func_26(-2.97f) + 180f) };
			func_24(uParam0, 31491440, 692.632f, 559.992f, 128.522f, Var0, 5, 2, -0.5f);
			func_24(uParam0, 34393340, 693.189f, 558.886f, 128.522f, Var0, 6, 0, 0);
			func_24(uParam0, 94762900, 693.396f, 557.684f, 128.522f, Var0, 6, 1, 0);
			func_24(uParam0, 95283980, 693.6f, 556.498f, 128.522f, Var0, 6, 2, 0);
			func_24(uParam0, 92416940, 693.803f, 555.317f, 128.522f, Var0, 6, 0, 0);
			func_24(uParam0, 53597080, 694.007f, 554.131f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 6:
			Var0 = { 0f, 0f, (func_26(-2.7f) + 180f) };
			func_24(uParam0, 86170110, 697.492f, 561.188f, 128.522f, Var0, 6, 0, 0);
			func_24(uParam0, 62247860, 697.964f, 560.188f, 128.522f, Var0, 6, 1, 0);
			func_24(uParam0, 43665230, 698.467f, 559.116f, 128.522f, Var0, 6, 2, 0);
			func_24(uParam0, 32906070, 698.988f, 558.013f, 128.522f, Var0, 6, 0, 0);
			func_24(uParam0, 70836820, 699.502f, 556.925f, 128.522f, Var0, 6, 1, 0);
			func_24(uParam0, 67800350, 700.014f, 555.841f, 128.522f, Var0, 6, 2, 0);
			func_24(uParam0, 41115560, 701.184f, 555.063f, 128.521f, Var0, 6, 0, 0);
			func_24(uParam0, 98430790, 701.005f, 553.758f, 128.522f, Var0, 6, 1, 0);
			func_23(&(uParam0->f_155[0 /*11*/]), 698.861f, 554.048f, 128.521f, Var0, 0, 0.5f, -1.5f);
			func_23(&(uParam0->f_155[1 /*11*/]), 703.267f, 554.91f, 128.522f, Var0, 0, 0.5f, -1.5f);
			break;
		
		case 7:
			Var0 = { 0f, 0f, (func_26(-3.99f) + 180f) };
			func_24(uParam0, 13168530, 652.833f, 570.052f, 128.529f, Var0, 6, 0, 0);
			func_24(uParam0, 92127780, 652.006f, 569.319f, 128.528f, Var0, 6, 1, 0);
			func_24(uParam0, 51664260, 651.136f, 568.538f, 128.729f, Var0, 6, 2, 0);
			func_24(uParam0, 35914010, 650.242f, 567.746f, 128.729f, Var0, 6, 0, 0);
			func_24(uParam0, 43076060, 649.661f, 566.94f, 128.929f, Var0, 6, 1, 0);
			func_24(uParam0, 21755390, 648.426f, 566.137f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 8:
			Var0 = { 0f, 0f, (func_26(-3.9f) + 180f) };
			func_24(uParam0, 20501110, 656.955f, 565.868f, 128.53f, Var0, 6, 0, 0);
			func_24(uParam0, 10114780, 656.193f, 565.067f, 128.53f, Var0, 6, 1, 0);
			func_24(uParam0, 12664730, 655.358f, 564.19f, 128.73f, Var0, 6, 2, 0);
			func_24(uParam0, 32956570, 654.534f, 563.324f, 128.73f, Var0, 6, 0, 0);
			func_24(uParam0, 11862860, 653.696f, 562.443f, 128.93f, Var0, 6, 1, 0);
			func_24(uParam0, 87809290, 652.862f, 561.566f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 9:
			Var0 = { 0f, 0f, (func_26(-3.76f) + 180f) };
			func_24(uParam0, 75170110, 662.947f, 560.965f, 128.529f, Var0, 6, 0, 0);
			func_24(uParam0, 62246860, 662.306f, 560.065f, 128.529f, Var0, 6, 1, 0);
			func_24(uParam0, 83665250, 661.603f, 559.079f, 128.73f, Var0, 6, 2, 0);
			func_24(uParam0, 22016170, 660.91f, 558.106f, 128.73f, Var0, 6, 0, 0);
			func_24(uParam0, 41846840, 660.204f, 557.116f, 128.929f, Var0, 6, 1, 0);
			func_24(uParam0, 10000350, 659.502f, 556.13f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 10:
			Var0 = { 0f, 0f, (func_26(-3.68f) + 180f) };
			func_24(uParam0, 86878180, 667.872f, 557.785f, 128.53f, Var0, 6, 0, 0);
			func_24(uParam0, 22242820, 667.31f, 556.833f, 128.53f, Var0, 6, 1, 0);
			func_24(uParam0, 93969290, 666.693f, 555.791f, 128.73f, Var0, 6, 2, 0);
			func_24(uParam0, 12101010, 666.086f, 554.762f, 128.73f, Var0, 6, 0, 0);
			func_24(uParam0, 20232220, 665.467f, 553.715f, 128.93f, Var0, 6, 1, 0);
			func_24(uParam0, 57707370, 664.852f, 552.673f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 11:
			Var0 = { 0f, 0f, (func_26(-3.53f) + 180f) };
			func_24(uParam0, 13130110, 674.882f, 554.326f, 128.529f, Var0, 6, 0, 0);
			func_24(uParam0, 97845810, 674.46f, 553.305f, 128.529f, Var0, 6, 1, 0);
			func_24(uParam0, 12345670, 673.997f, 552.186f, 128.73f, Var0, 6, 2, 0);
			func_24(uParam0, 89101110, 673.541f, 551.081f, 128.73f, Var0, 6, 0, 0);
			func_24(uParam0, 12131410, 673.076f, 549.958f, 128.929f, Var0, 6, 1, 0);
			func_24(uParam0, 51617180, 672.613f, 548.839f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 12:
			Var0 = { 0f, 0f, (func_26(-3.45f) + 180f) };
			func_24(uParam0, 60616260, 680.396f, 552.335f, 128.53f, Var0, 6, 0, 0);
			func_24(uParam0, 36465660, 680.063f, 551.281f, 128.53f, Var0, 6, 1, 0);
			func_24(uParam0, 67686970, 679.697f, 550.127f, 128.73f, Var0, 6, 2, 0);
			func_24(uParam0, 71727370, 679.336f, 548.988f, 128.73f, Var0, 6, 0, 0);
			func_24(uParam0, 47576770, 678.969f, 547.829f, 128.93f, Var0, 6, 1, 0);
			func_24(uParam0, 78798080, 678.603f, 546.674f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 13:
			Var0 = { 0f, 0f, (func_26(-3.31f) + 180f) };
			func_24(uParam0, 11511610, 688.034f, 550.483f, 128.529f, Var0, 6, 0, 0);
			func_24(uParam0, 17118110, 687.853f, 549.393f, 128.529f, Var0, 6, 1, 0);
			func_24(uParam0, 91201210, 687.653f, 548.199f, 128.73f, Var0, 6, 2, 0);
			func_24(uParam0, 12212310, 687.457f, 547.02f, 128.73f, Var0, 6, 0, 0);
			func_24(uParam0, 23124120, 687.257f, 545.821f, 128.929f, Var0, 6, 1, 0);
			func_24(uParam0, 51261270, 687.058f, 544.627f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 14:
			Var0 = { 0f, 0f, (func_26(-3.22f) + 180f) };
			func_24(uParam0, 15515610, 693.855f, 549.783f, 128.53f, Var0, 6, 0, 0);
			func_24(uParam0, 57158150, 693.767f, 548.682f, 128.53f, Var0, 6, 1, 0);
			func_24(uParam0, 91601610, 693.67f, 547.474f, 128.73f, Var0, 6, 2, 0);
			func_24(uParam0, 16216310, 693.575f, 546.283f, 128.73f, Var0, 6, 0, 0);
			func_24(uParam0, 64165160, 693.478f, 545.071f, 128.93f, Var0, 6, 1, 0);
			func_24(uParam0, 61671680, 693.381f, 543.865f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 15:
			Var0 = { 0f, 0f, (func_26(-3.08f) + 180f) };
			func_24(uParam0, 19920020, 701.652f, 549.708f, 128.529f, Var0, 6, 0, 0);
			func_24(uParam0, 1202200, 701.721f, 548.605f, 128.529f, Var0, 6, 1, 0);
			func_24(uParam0, 32042050, 701.795f, 547.396f, 128.729f, Var0, 6, 2, 0);
			func_24(uParam0, 20620720, 701.869f, 546.203f, 128.729f, Var0, 6, 0, 0);
			func_24(uParam0, 8209210, 701.944f, 544.99f, 128.929f, Var0, 6, 1, 0);
			func_24(uParam0, 2112120, 702.019f, 543.781f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 16:
			Var0 = { 0f, 0f, (func_26(-2.99f) + 180f) };
			func_24(uParam0, 24024120, 707.482f, 550.335f, 128.53f, Var0, 6, 0, 0);
			func_24(uParam0, 43244240, 707.644f, 549.242f, 128.53f, Var0, 6, 1, 0);
			func_24(uParam0, 42452460, 707.821f, 548.044f, 128.73f, Var0, 6, 2, 0);
			func_24(uParam0, 24724820, 707.996f, 546.862f, 128.73f, Var0, 6, 0, 0);
			func_24(uParam0, 48249250, 708.174f, 545.659f, 128.929f, Var0, 6, 1, 0);
			func_24(uParam0, 2512520, 708.351f, 544.461f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 17:
			Var0 = { 0f, 0f, (func_26(-3.98f) + 180f) };
			func_24(uParam0, 46779100, 646.434f, 564.522f, 128.927f, Var0, 6, 0, 0);
			func_24(uParam0, 93643160, 645.612f, 563.784f, 128.927f, Var0, 6, 1, 0);
			func_24(uParam0, 34729570, 644.71f, 562.975f, 129.127f, Var0, 6, 2, 0);
			func_24(uParam0, 28556490, 643.821f, 562.177f, 129.127f, Var0, 6, 0, 0);
			func_24(uParam0, 75335160, 642.916f, 561.365f, 129.327f, Var0, 6, 1, 0);
			func_24(uParam0, 84872300, 642.015f, 560.557f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 18:
			Var0 = { 0f, 0f, (func_26(-3.91f) + 180f) };
			func_24(uParam0, 65187100, 651.092f, 559.707f, 128.926f, Var0, 6, 0, 0);
			func_24(uParam0, 87514460, 650.325f, 558.912f, 128.926f, Var0, 6, 1, 0);
			func_24(uParam0, 46165810, 649.483f, 558.04f, 128.127f, Var0, 6, 2, 0);
			func_24(uParam0, 12560720, 648.654f, 557.18f, 129.127f, Var0, 6, 0, 0);
			func_24(uParam0, 27854880, 647.809f, 556.306f, 129.326f, Var0, 6, 1, 0);
			func_24(uParam0, 97601360, 646.968f, 555.435f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 19:
			Var0 = { 0f, 0f, (func_26(-3.75f) + 180f) };
			func_24(uParam0, 55178130, 657.925f, 554.108f, 128.927f, Var0, 6, 0, 0);
			func_24(uParam0, 75148880, 657.29f, 553.204f, 128.927f, Var0, 6, 1, 0);
			func_24(uParam0, 88865540, 656.593f, 552.213f, 129.127f, Var0, 6, 2, 0);
			func_24(uParam0, 64916770, 655.906f, 551.235f, 129.127f, Var0, 6, 0, 0);
			func_24(uParam0, 70536220, 655.207f, 550.241f, 129.327f, Var0, 6, 1, 0);
			func_24(uParam0, 17101310, 654.512f, 549.25f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 20:
			Var0 = { 0f, 0f, (func_26(-3.68f) + 180f) };
			func_24(uParam0, 76870120, 663.545f, 550.463f, 128.926f, Var0, 6, 0, 0);
			func_24(uParam0, 32147850, 662.977f, 549.515f, 128.926f, Var0, 6, 1, 0);
			func_24(uParam0, 97662220, 662.353f, 548.477f, 129.127f, Var0, 6, 2, 0);
			func_24(uParam0, 12107070, 661.738f, 547.453f, 129.127f, Var0, 6, 0, 0);
			func_24(uParam0, 60841880, 661.111f, 546.411f, 129.326f, Var0, 6, 1, 0);
			func_24(uParam0, 27803350, 660.489f, 545.373f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 21:
			Var0 = { 0f, 0f, (func_26(-3.53f) + 180f) };
			func_24(uParam0, 19202120, 671.531f, 546.515f, 128.927f, Var0, 6, 0, 0);
			func_24(uParam0, 22232420, 671.116f, 545.491f, 128.927f, Var0, 6, 1, 0);
			func_24(uParam0, 52627280, 670.66f, 544.369f, 129.127f, Var0, 6, 2, 0);
			func_24(uParam0, 29303130, 670.211f, 543.262f, 129.127f, Var0, 6, 0, 0);
			func_24(uParam0, 23334350, 669.753f, 542.135f, 129.327f, Var0, 6, 1, 0);
			func_24(uParam0, 36373830, 669.298f, 541.014f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 22:
			Var0 = { 0f, 0f, (func_26(-3.46f) + 180f) };
			func_24(uParam0, 18283840, 677.828f, 544.227f, 128.926f, Var0, 6, 0, 0);
			func_24(uParam0, 85858680, 677.487f, 543.176f, 128.926f, Var0, 6, 1, 0);
			func_24(uParam0, 78889900, 677.112f, 542.024f, 129.127f, Var0, 6, 2, 0);
			func_24(uParam0, 91929390, 676.744f, 540.888f, 129.127f, Var0, 6, 0, 0);
			func_24(uParam0, 49596970, 676.368f, 539.731f, 129.326f, Var0, 6, 1, 0);
			func_24(uParam0, 98991000, 675.994f, 538.58f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 23:
			Var0 = { 0f, 0f, (func_26(-3.3f) + 180f) };
			func_24(uParam0, 12812910, 686.526f, 542.118f, 128.927f, Var0, 6, 0, 0);
			func_24(uParam0, 30131130, 686.352f, 541.027f, 128.927f, Var0, 6, 1, 0);
			func_24(uParam0, 21331340, 686.16f, 539.831f, 129.127f, Var0, 6, 1, 0);
			func_24(uParam0, 13513610, 685.972f, 538.652f, 129.127f, Var0, 6, 0, 0);
			func_24(uParam0, 37138130, 685.779f, 537.451f, 129.327f, Var0, 6, 1, 0);
			func_24(uParam0, 91401410, 685.588f, 536.256f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 24:
			Var0 = { 0f, 0f, (func_26(-3.23f) + 180f) };
			func_24(uParam0, 16917010, 693.176f, 541.306f, 128.926f, Var0, 6, 0, 0);
			func_24(uParam0, 71172170, 693.08f, 540.205f, 128.926f, Var0, 6, 1, 0);
			func_24(uParam0, 31741750, 692.975f, 538.998f, 129.127f, Var0, 6, 2, 0);
			func_24(uParam0, 17617810, 692.871f, 537.808f, 129.127f, Var0, 6, 0, 0);
			func_24(uParam0, 79180180, 692.765f, 536.597f, 129.326f, Var0, 6, 1, 0);
			func_24(uParam0, 21831840, 692.66f, 535.391f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 25:
			Var0 = { 0f, 0f, (func_26(-3.07f) + 180f) };
			func_24(uParam0, 21321420, 702.065f, 541.218f, 128.927f, Var0, 6, 0, 0);
			func_24(uParam0, 15216210, 702.14f, 540.116f, 128.927f, Var0, 6, 1, 0);
			func_24(uParam0, 72182190, 702.223f, 538.907f, 129.127f, Var0, 6, 2, 0);
			func_24(uParam0, 22022120, 702.304f, 537.715f, 129.127f, Var0, 6, 0, 0);
			func_24(uParam0, 22223220, 702.387f, 536.502f, 129.327f, Var0, 6, 1, 0);
			func_24(uParam0, 42252260, 703.116f, 526.841f, 129.618f, Var0, 6, 2, 0);
			break;
		
		case 26:
			Var0 = { 0f, 0f, (func_26(-3f) + 180f) };
			func_24(uParam0, 25325420, 708.727f, 541.922f, 128.926f, Var0, 6, 0, 0);
			func_24(uParam0, 55256250, 709.881f, 539.828f, 128.926f, Var0, 6, 1, 0);
			func_24(uParam0, 72582590, 709.05f, 539.628f, 129.127f, Var0, 6, 2, 0);
			func_24(uParam0, 26026120, 709.217f, 538.445f, 129.127f, Var0, 6, 0, 0);
			func_24(uParam0, 62263260, 709.386f, 537.241f, 129.326f, Var0, 6, 1, 0);
			func_24(uParam0, 42652650, 709.555f, 536.043f, 129.326f, Var0, 6, 2, 0);
			break;
		
		default:
			break;
	}
}

void func_23(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, float fParam8, float fParam9)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = iParam7;
	*uParam0 = 1;
	uParam0->f_8 = fParam8;
	uParam0->f_9 = fParam9;
}

void func_24(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, int iParam8, int iParam9, int iParam10)
{
	if (uParam0->f_154 >= *uParam0)
	{
		return;
	}
	func_25(uParam0[uParam0->f_154 /*17*/], iParam1, Param2, Param5, iParam8, iParam9, iParam10);
	uParam0->f_154++;
}

void func_25(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, var uParam8, var uParam9, var uParam10)
{
	*uParam0 = { Param2 };
	uParam0->f_3 = { Param5 };
	uParam0->f_6 = uParam8;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam9;
	uParam0->f_9 = uParam10;
}

float func_26(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_27(var uParam0)
{
	uParam0->f_154 = 0;
	uParam0->f_155[0 /*11*/] = 0;
	uParam0->f_155[1 /*11*/] = 0;
}

int func_28(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x3EAC9995EC220C5A() + 7500;
	unk_0xC8C54AFEF8609CEF(sParam0, iParam1);
	if (unk_0x77E40DD6F32BC674(iParam1) && !bParam3)
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0x77E40DD6F32BC674(iParam1))
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x3EAC9995EC220C5A() > iVar0 && !unk_0x77E40DD6F32BC674(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_29(char* sParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = unk_0x3EAC9995EC220C5A() + 7500;
	if (*uParam1 == 0)
	{
		*uParam1 = unk_0x2F14983962462691(sParam0);
	}
	if (unk_0xEDE19C6ED6E2F478(*uParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0xEDE19C6ED6E2F478(*uParam1))
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x3EAC9995EC220C5A() > iVar0 && !unk_0xEDE19C6ED6E2F478(*uParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_30(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3EAC9995EC220C5A() + 7500;
	unk_0x6E2E777C1AD81C36(sParam0);
	if (unk_0x5263DE3D9A17A86F(sParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!unk_0x5263DE3D9A17A86F(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x3EAC9995EC220C5A() > iVar0 && !unk_0x5263DE3D9A17A86F(sParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_31(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "misslester1b_crowd@a_";
			break;
		
		case 1:
			sVar0 = "misslester1b_crowd@b_";
			break;
		
		case 2:
			sVar0 = "misslester1b_crowd@c_";
			break;
		
		case 3:
			sVar0 = "misslester1b_crowd@d_";
			break;
		
		case 4:
			sVar0 = "misslester1b_crowd@e_";
			break;
		
		case 5:
			sVar0 = "misslester1b_crowd@f_";
			break;
		
		case 6:
			sVar0 = "misslester1b_crowd@g_";
			break;
		
		case 7:
			sVar0 = "misslester1b_crowd@h_";
			break;
		
		case 8:
			sVar0 = "misslester1b_crowd@i_";
			break;
		
		case 9:
			sVar0 = "misslester1b_crowd@j_";
			break;
		
		case 10:
			sVar0 = "misslester1b_crowd@k_";
			break;
		
		case 11:
			sVar0 = "misslester1b_crowd@l_";
			break;
		
		case 12:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}

void func_32(var uParam0, int iParam1)
{
	unk_0xBC812D113661A0A6(0);
	unk_0xE74562883375DC26(1);
	unk_0x676CA7D95FB1735D(0);
	unk_0x791B5052AD1C0B72(1);
	unk_0xD0359D526AEECC33(unk_0x8ACD527A7E574590(), 0);
	unk_0x0C53A6DA4C66030D(0);
	unk_0x5604887B0A23CF1F(1);
	*uParam0 = unk_0x2277155D92E898D2(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1, 1, 1);
	unk_0x931D61888B0F6B55("DRIVE", 0);
	unk_0x6AABDED602B11FF1(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1);
	unk_0x800899ED4594380A(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
	if (func_7(unk_0x77F050A399DB77ED()) && iParam1 == 1)
	{
		unk_0xD1C12864812BFA0A(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 500f, 0);
	}
}

void func_33(int iParam0)
{
	unk_0xC8CA2CBC777B0FA7(2, iParam0);
	unk_0xC8CA2CBC777B0FA7(3, iParam0);
	unk_0xC8CA2CBC777B0FA7(4, iParam0);
	unk_0xC8CA2CBC777B0FA7(5, iParam0);
	unk_0xC8CA2CBC777B0FA7(6, iParam0);
	unk_0xC8CA2CBC777B0FA7(7, iParam0);
	unk_0xC8CA2CBC777B0FA7(8, iParam0);
	unk_0xC8CA2CBC777B0FA7(9, iParam0);
	unk_0xC8CA2CBC777B0FA7(10, iParam0);
	unk_0xC8CA2CBC777B0FA7(11, iParam0);
	unk_0xC8CA2CBC777B0FA7(12, iParam0);
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		func_38();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x573691DB812DC8AA(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_37(0))
		{
			func_35(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_35(int iParam0)
{
	if (Global_14571)
	{
		func_36(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
	}
	if (!func_15())
	{
		Global_14413.f_1 = 3;
	}
}

void func_36(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_37(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

int func_37(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_38()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_39()
{
	func_40();
	func_8(0, 1, 1, 0);
	unk_0x2F798BA2098FDADE();
}

void func_40()
{
	int iVar0;
	
	if (unk_0x8F97015FD3089C6B())
	{
		if (unk_0x7B8549A4F94FA4C8())
		{
			unk_0x5D37E7B368D0E73A();
		}
		unk_0xF5626435714EF511();
	}
	func_50(&uLocal_6210);
	unk_0xD424E8E48D2E7BF8("Big_Disp");
	unk_0xEE3240EAE773A95A("LInvader");
	unk_0xD2E03CEA477E4E3D(&uLocal_6201);
	unk_0xD2E03CEA477E4E3D(&uLocal_6202);
	unk_0x7EB1B89F8E7D254E();
	iVar0 = 0;
	while (iVar0 < Local_90.f_0)
	{
		func_47(&(Local_90[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_4898.f_0)
	{
		func_44(&(Local_4898[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_5620.f_0)
	{
		func_44(&(Local_5620[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_59)
	{
		func_43(iLocal_59[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_42(func_31(iVar0));
		iVar0++;
	}
	func_41(uLocal_6213);
	func_8(0, 1, 1, 0);
}

void func_41(var uParam0)
{
	unk_0xE74562883375DC26(0);
	unk_0xBC812D113661A0A6(3);
	unk_0x791B5052AD1C0B72(0);
	unk_0x676CA7D95FB1735D(3);
	unk_0xD0359D526AEECC33(unk_0x8ACD527A7E574590(), 1);
	unk_0x0C53A6DA4C66030D(1);
	unk_0x5604887B0A23CF1F(0);
	unk_0x54575489AE798654(uParam0, 0);
	unk_0x931D61888B0F6B55("DRIVE", 1);
	unk_0x6AABDED602B11FF1(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 1, 1);
}

void func_42(var uParam0)
{
	unk_0xD5A53B898943F331(uParam0);
}

void func_43(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0xFB4F6722A032A0F0(iParam0);
	}
}

void func_44(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	uVar1 = func_46(uParam0->f_16);
	uVar2 = func_45(uParam0->f_16);
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		if (unk_0x1F2158D615BC4B25(uParam0->f_17[iVar0]) && !unk_0x0B6E83A9A7ED3EBA(uParam0->f_17[iVar0]))
		{
			unk_0x76111C74768A73C5(uParam0->f_17[iVar0], uVar2, uVar1, -1000f);
		}
		func_50(&(uParam0->f_17[iVar0]));
		iVar0++;
	}
}

char* func_45(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

char* func_46(int iParam0)
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

void func_47(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_49(uParam0[iVar0 /*17*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_155)
	{
		func_48(&(uParam0->f_155[iVar0 /*11*/].f_10));
		iVar0++;
	}
}

void func_48(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(*uParam0))
		{
			unk_0xA09672E91FA74DCA(*uParam0, 0);
		}
		if (!unk_0x335346A332B62CA2(*uParam0))
		{
			unk_0x8D429A827A931AC9(*uParam0, 1, 0);
		}
		unk_0xAB3098579170FA46(uParam0);
	}
}

void func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		func_48(&(uParam0->f_10[iVar0]));
		iVar0++;
	}
}

void func_50(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (unk_0x85C2713D803F1A4A(*uParam0))
		{
			unk_0xE8EBCCA6A3BE542B(*uParam0, 1, 1);
		}
		unk_0x7D779528B7C61C13(uParam0);
	}
}

