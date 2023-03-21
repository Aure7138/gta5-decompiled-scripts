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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	char cLocal_62[64] = "";
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (unk_0xBCA819F9975BEDFA(2))
	{
		func_66();
	}
	if (unk_0x23E9113C762466ED(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_65();
		if (unk_0x23E9113C762466ED(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_64() && !func_63())) && !func_62(iLocal_43))
			{
				func_66();
			}
			if ((unk_0xE9E6B5364105A000() && unk_0x3108C06B8E90438D() != 3) && unk_0x4DA93F059B47A9FA() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0xD53A3C5CA3FC9721(iScriptParam_0))
			{
				func_66();
			}
			if (unk_0x16281BACBF5409B8(iScriptParam_0))
			{
				if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
				{
					func_60();
					if (unk_0xB5DF060B138CD2EA(iScriptParam_0) < 950)
					{
						func_66();
					}
					switch (iLocal_29)
					{
						case 0:
							func_57();
							if (iLocal_43 == 5)
							{
								if (func_56(18) == 1 && func_56(20) == 0)
								{
									uLocal_41 = unk_0x0CE2297975A4AE38(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0xF1DEF26108040848(uLocal_41))
									{
										unk_0x08B6ECD80C6BD224(uLocal_41, 9);
									}
									unk_0x921053BAF754303D();
								}
							}
							if (iLocal_43 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0xCEB0EE315D1A03DB("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0x8D25D78C081AB5E2(0);
								Global_25250[iLocal_43 /*11*/].f_2 = 0;
								Global_25250[iLocal_43 /*11*/].f_6 = 1;
								Global_25250[iLocal_43 /*11*/] = unk_0x0E29C61F26D96FDB(0, 2);
								Global_25250[iLocal_43 /*11*/].f_1 = 0;
								Global_25250[iLocal_43 /*11*/].f_4 = 0;
								Global_25250[iLocal_43 /*11*/].f_7 = 0;
								Global_25250[iLocal_43 /*11*/].f_8 = 0;
								Global_25250[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&uLocal_26);
								func_51();
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0xE9B3D890AA708E65(iLocal_37) && unk_0x16924971637B41FA(iLocal_37, 1119092736))
							{
								if (func_42() || Global_25250[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_41(&iLocal_42);
							}
							break;
						
						case 2:
							func_51();
							if (!func_62(iLocal_43))
							{
								func_41(&iLocal_42);
								if (func_40("TV_HLP1"))
								{
									unk_0x2E2945F5602A744F(1);
								}
							}
							if (unk_0x23E9113C762466ED(iLocal_37))
							{
								if (!unk_0xADA6DD2D53C59AF0(iLocal_37))
								{
									unk_0x027DB6817AB239EB(iLocal_37, 1, 0);
								}
							}
							if (unk_0x23E9113C762466ED(iLocal_39))
							{
								if (!unk_0xADA6DD2D53C59AF0(iLocal_39))
								{
									unk_0x027DB6817AB239EB(iLocal_39, 1, 0);
								}
							}
							if (unk_0x23E9113C762466ED(iLocal_38))
							{
								if (unk_0xADA6DD2D53C59AF0(iLocal_38))
								{
									unk_0x027DB6817AB239EB(iLocal_38, 0, 0);
								}
							}
							if (!unk_0x6A7B0D91FD88D9EE(&cLocal_46, "NULL"))
							{
								unk_0x396A8DEFD6DBA5FC(&cLocal_46, 0);
							}
							unk_0x8210D21498E02183(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x23E9113C762466ED(iLocal_40))
							{
								unk_0xB99455420C96DB94(iLocal_40);
							}
							if (!func_62(iLocal_43))
							{
								if ((Global_25250[iLocal_43 /*11*/] == 3 || Global_25250[iLocal_43 /*11*/] == 2) || Global_25250[iLocal_43 /*11*/] == -1)
								{
									Global_25250[iLocal_43 /*11*/] = unk_0x0E29C61F26D96FDB(0, 2);
								}
								unk_0x049E5DD4D9817A5C(Global_25250[iLocal_43 /*11*/]);
								unk_0xBBE28B261CE32FB4(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25250[iLocal_43 /*11*/];
								iLocal_45 = Global_25250[iLocal_43 /*11*/].f_1;
								unk_0xD5D523028E8C8363(iLocal_44, func_39(iLocal_45), Global_25250[iLocal_43 /*11*/].f_9);
								unk_0x049E5DD4D9817A5C(iLocal_44);
								if (Global_25250[iLocal_43 /*11*/].f_7)
								{
									Global_25250[iLocal_43 /*11*/].f_5 = 0;
									Global_25250[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25250[iLocal_43 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25250[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25250[iLocal_43 /*11*/].f_7 && func_62(iLocal_43))
							{
								Global_25250[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_36(iLocal_43))
							{
								func_35();
								iLocal_29 = 5;
							}
							else
							{
								func_33();
								if (unk_0x62A70149E4139642() == -1)
								{
									unk_0x049E5DD4D9817A5C(Global_25250[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_36(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_25250[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_41(&iLocal_42);
							}
							Global_25250[iLocal_43 /*11*/].f_5 = 0;
							Global_25250[iLocal_43 /*11*/].f_4 = 0;
							Global_25250[iLocal_43 /*11*/].f_1 = 0;
							Global_25250[iLocal_43 /*11*/].f_2 = 0;
							Global_25250[iLocal_43 /*11*/].f_7 = 0;
							Global_25250[iLocal_43 /*11*/].f_8 = 0;
							Global_25250[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0x921053BAF754303D();
		}
	}
	func_66();
	unk_0x921053BAF754303D();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25250[iLocal_43 /*11*/] = unk_0x62A70149E4139642();
	}
	fLocal_30 = unk_0x544D3096CE17D590();
	unk_0x049E5DD4D9817A5C(-1);
	func_4();
	if (unk_0x82F1A060D8F4583B(joaat("family5")) == 0)
	{
		if (!unk_0x6A7B0D91FD88D9EE(&cLocal_46, "NULL"))
		{
			unk_0x396A8DEFD6DBA5FC(&cLocal_46, 1);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x2E2945F5602A744F(1);
	}
	func_3();
	func_50();
	if (unk_0x23E9113C762466ED(iLocal_38))
	{
		if (!unk_0xADA6DD2D53C59AF0(iLocal_38))
		{
			unk_0x027DB6817AB239EB(iLocal_38, 1, 0);
		}
	}
	unk_0x039E161BEBDFE36B(0);
	func_2();
}

void func_2()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (iLocal_87 == 1)
		{
			unk_0x092FD48555352DF6();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x9ECF2B67B569A85E(iLocal_35);
		if (unk_0x23E9113C762466ED(iLocal_37))
		{
			if (unk_0x0324EEB10F81965F(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x0324EEB10F81965F(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x027DB6817AB239EB(iLocal_37, 0, 0);
				if (unk_0x0324EEB10F81965F(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x2F8697C8670CAD58(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x2F8697C8670CAD58(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_39))
	{
		unk_0x027DB6817AB239EB(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
		if (unk_0xA6312B4FE4134130(uLocal_78))
		{
			unk_0xA652CA24468EC747(uLocal_78, 0);
		}
		unk_0x2BC4A4AFFC2D937D(uLocal_78, 0);
		unk_0xBA7CD73403732191(0);
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			unk_0x98F0FA127445E343(unk_0x17B5CC8A8615737D(), 0);
			unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
			unk_0x0D322CDF37087C0E(unk_0x17B5CC8A8615737D(), Local_31, 1, 0, 2);
			if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
				}
			}
			unk_0x027DB6817AB239EB(unk_0x17B5CC8A8615737D(), 1, 0);
		}
		if (!unk_0x6A7B0D91FD88D9EE(&cLocal_62, "NULL"))
		{
			if (unk_0x4E1850F5FF023071(&cLocal_62))
			{
				unk_0xB8CAC5F3774894A1(&cLocal_62);
			}
		}
		if (unk_0x23E9113C762466ED(iLocal_39))
		{
			unk_0x027DB6817AB239EB(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0x039E161BEBDFE36B(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x75416EE69CE8B797(unk_0xBE369BE1BC57A796());
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 1);
		func_14(1);
		unk_0x9FB8515100F82AFB();
		unk_0xD57128A757C0216E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3ED8A07C6FA41E1B())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!func_13())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else
	{
		func_14(0);
		unk_0x42DE1068884C3BE9();
		Global_55828 = 0;
		if (bParam1)
		{
			unk_0x093227ED19D84FB6();
		}
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x63C468D583002D23())
		{
			if (((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_10(unk_0xBE369BE1BC57A796())) && !func_7(unk_0xBE369BE1BC57A796(), 0)) && !func_6())
			{
				unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_10(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
		}
		Global_69700 = 0;
	}
}

bool func_6()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312735;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && uParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 13);
	}
}

int func_15()
{
	if (!func_62(iLocal_43))
	{
		if (((((((func_29(&uLocal_26) >= 1f && unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0xF34287B610CF02CA(iLocal_37) == unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D())) && !func_28(8, -1)) && !unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0)) && unk_0xCF2D3F2A51FA8FE5(unk_0x17B5CC8A8615737D(), Local_31, 90f)) && !unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) && !unk_0xE9E6B5364105A000())
		{
			if (iLocal_42 == -1)
			{
				func_27();
				func_26(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_24(iLocal_42, 1))
			{
				func_41(&iLocal_42);
				func_53(&uLocal_26);
				Global_25250[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0xE22CF1078AD4E111("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x4988C48537D1AE4F(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0x2E2945F5602A744F(1);
			}
			func_2();
			func_41(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		unk_0x28EAA5C7C54BD253(2, 222);
		if (unk_0x4B972043966C2EB8(2, 222))
		{
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0xD1BB2AD73E7FC3A7(2, 200, 1);
		if (unk_0xADA6DD2D53C59AF0(unk_0x17B5CC8A8615737D()))
		{
			unk_0x027DB6817AB239EB(unk_0x17B5CC8A8615737D(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
			{
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
			}
		}
		unk_0x6F9E2FAA0B24988A();
		unk_0xF1657291AB93A482(unk_0x17B5CC8A8615737D());
		func_21(1, 1);
		unk_0x28EAA5C7C54BD253(2, 222);
		func_17();
		if (unk_0x4B972043966C2EB8(2, 222) || (unk_0xF23B2033129FFCF0(2) && unk_0x7C48E6953368E08B(2, 200)))
		{
			func_41(&iLocal_42);
			func_4();
		}
	}
}

void func_17()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(0);
		}
		unk_0xEB79FECD9022AAF0(&Global_2314, 2);
	}
}

void func_18(int iParam0)
{
	if (Global_14604)
	{
		func_19(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
	}
	if (!func_13())
	{
		Global_14443.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_21(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_22(0))
		{
			if (!iLocal_22)
			{
				if (unk_0xE22CF1078AD4E111("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x4988C48537D1AE4F(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x62A70149E4139642() == 0)
				{
					unk_0x049E5DD4D9817A5C(1);
				}
				else
				{
					unk_0x049E5DD4D9817A5C(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x6D95420A284C8601(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x544D3096CE17D590();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xBBE28B261CE32FB4(fVar2);
				iLocal_24 = unk_0x94E3E074F38DF86C();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x544D3096CE17D590();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xBBE28B261CE32FB4(fVar2);
				iLocal_24 = unk_0x94E3E074F38DF86C();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xE22CF1078AD4E111("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x4988C48537D1AE4F(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x94E3E074F38DF86C() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x6D95420A284C8601(2, 218) - 127);
	if (iParam0 || unk_0x83666F9FB8FEBD4B() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			unk_0xC1B1E9A034A63A62(0);
			return 1;
		}
	}
	return 0;
}

void func_23()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x4E0049B7A73D4050(uLocal_78, 100f);
		unk_0xA652CA24468EC747(uLocal_78, 1);
		unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
		if (unk_0x23E9113C762466ED(iLocal_39))
		{
			unk_0x027DB6817AB239EB(iLocal_39, 0, 0);
		}
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			unk_0x98F0FA127445E343(unk_0x17B5CC8A8615737D(), 1);
			unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
			if (unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
			{
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x0D322CDF37087C0E(unk_0x17B5CC8A8615737D(), Local_31, -1, 0, 2);
			unk_0x027DB6817AB239EB(unk_0x17B5CC8A8615737D(), 0, 0);
		}
		if (!unk_0x6A7B0D91FD88D9EE(&cLocal_62, "NULL"))
		{
			if (!unk_0x4E1850F5FF023071(&cLocal_62))
			{
				unk_0x4A5D4AD0FE6ACF73(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x039E161BEBDFE36B(1);
		iLocal_85 = 1;
	}
}

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xCF7855B965948E97(unk_0x592069F95C314814()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0x1B76B77EDF24A933())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/] == 1 && Global_36484[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36484[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36484[iVar0 /*32*/].f_5 = 1;
			Global_36484[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36484[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36484[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x82F1A060D8F4583B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xE9E6B5364105A000())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36484[iVar0 /*32*/])
		{
			Global_36484[iVar0 /*32*/] = 1;
			Global_36484[iVar0 /*32*/].f_1 = Global_36685;
			Global_36685++;
			Global_36484[iVar0 /*32*/].f_4 = 0;
			Global_36484[iVar0 /*32*/].f_29 = 0;
			Global_36484[iVar0 /*32*/].f_5 = 0;
			Global_36484[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36484[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36484[iVar0 /*32*/].f_6 = iParam3;
			Global_36484[iVar0 /*32*/].f_31 = unk_0xE9A5FDFDC239B2ED();
			Global_36484[iVar0 /*32*/].f_7 = 0;
			Global_36484[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x9C88EB7B70229335(sParam4))
			{
				Global_36484[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36484[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36484[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36484[iVar0 /*32*/].f_12 = 0;
				Global_36484[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36484[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (iLocal_87 == 0)
		{
			unk_0xC97C3FF3A2EF94E7("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

float func_29(var uParam0)
{
	if (func_32(uParam0))
	{
		if (func_31(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_30(unk_0x48B8265059381CD0(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_30(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x63C468D583002D23())
	{
		iVar2 = unk_0xCB150A8B81012128();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C()) / 1000f);
}

bool func_31(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 2);
}

bool func_32(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 1);
}

void func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0x9ECF2B67B569A85E(iLocal_35);
	unk_0x4ED9ECF3735CB826(4);
	unk_0xF9B73D09E3ADD73F(1);
	unk_0x7A24418F547D6AA6(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x9ECF2B67B569A85E(unk_0x92016DECDDF1828F());
}

void func_34(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x73E1DAE2E39E5E52(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()
{
	Global_25250[iLocal_43 /*11*/].f_7 = 0;
	Global_25250[iLocal_43 /*11*/] = unk_0x62A70149E4139642();
	fLocal_30 = unk_0x544D3096CE17D590();
	if (unk_0x4E1850F5FF023071(&cLocal_62))
	{
		unk_0xB8CAC5F3774894A1(&cLocal_62);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x2E2945F5602A744F(1);
	}
	func_41(&iLocal_42);
	unk_0x049E5DD4D9817A5C(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_50();
}

int func_36(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_37(unk_0xBE369BE1BC57A796()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_37(int iParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x63C468D583002D23())
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/])
	{
		unk_0x7FE4F330D3D74809(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x731753D8494ABECD(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_39(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_40(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

void func_41(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_25(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/])
		{
			Global_36484[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_42()
{
	if (func_29(&uLocal_26) < 1f)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if ((!unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0xCF2D3F2A51FA8FE5(unk_0x17B5CC8A8615737D(), Local_31, 90f)) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0xF34287B610CF02CA(iLocal_37) != unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_88752)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_25250[iLocal_43 /*11*/].f_8)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_26(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_24(iLocal_42, 1))
	{
		func_41(&iLocal_42);
		func_53(&uLocal_26);
		Global_25250[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0xE22CF1078AD4E111("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x4988C48537D1AE4F(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_43(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_49((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_44();
	}
}

void func_44()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101436++;
					fVar1 = (fVar1 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101437++;
					fVar2 = (fVar2 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101438++;
					fVar3 = (fVar3 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101439++;
					fVar4 = (fVar4 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101440++;
					fVar5 = (fVar5 + (Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101441++;
					fVar6 = (fVar6 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101442++;
					fVar7 = (fVar7 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101419 > 0)
	{
		if (Global_101436 == Global_101419)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0)
	{
		if (Global_101437 == Global_101420)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0)
	{
		if (Global_101438 == Global_101421)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0)
	{
		if (Global_101439 == Global_101422)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0)
	{
		if (((Global_101440 == Global_101423 || (Global_101423 * 10 / Global_101440) < 41) || Global_101440 > Global_101426) || Global_101440 == Global_101426)
		{
			if (!unk_0x48B8265059381CD0(Global_101700.f_9153.f_3856, 14))
			{
				if (Global_101440 == Global_101423)
				{
					unk_0x76FDB94571A85364(joaat("num_rndevents_completed"), Global_101423, 0);
					unk_0xEB79FECD9022AAF0(&(Global_101700.f_9153.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0)
	{
		if (Global_101441 == Global_101424)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0)
	{
		if (Global_101442 == Global_101425)
		{
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426)
	{
		iVar9 = Global_101426;
	}
	else
	{
		iVar9 = Global_101440;
	}
	unk_0x731753D8494ABECD(joaat("num_missions_completed"), Global_101436, 1);
	unk_0x731753D8494ABECD(joaat("num_missions_available"), Global_101419, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_completed"), Global_101437, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_available"), Global_101420, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_completed"), Global_101438, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_available"), Global_101421, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_completed"), Global_101439, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_available"), Global_101422, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_available"), Global_101426, 1);
	unk_0x731753D8494ABECD(joaat("num_misc_completed"), (Global_101442 + Global_101441), 1);
	unk_0x731753D8494ABECD(joaat("num_misc_available"), (Global_101425 + Global_101424), 1);
	Global_101443 = (Global_101436 * 100 / Global_101419);
	Global_101445 = ((Global_101438 + Global_101437) * 100 / (Global_101421 + Global_101420));
	Global_101444 = ((Global_101439 + iVar9) * 100 / (Global_101422 + Global_101426));
	Global_101446 = ((Global_101441 + Global_101442) * 100 / (Global_101424 + Global_101425));
	unk_0x098CDAAE6268B0D0(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	unk_0x731753D8494ABECD(joaat("percent_story_missions"), Global_101443, 1);
	unk_0x731753D8494ABECD(joaat("percent_ambient_missions"), Global_101444, 1);
	unk_0x731753D8494ABECD(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853));
	}
	if (!unk_0x9710FEDD2413A882())
	{
		if (!Global_69702)
		{
			if (func_47() == 2 == 0 && !unk_0x63C468D583002D23())
			{
				if (unk_0x877FC5FAF7DC9BC5())
				{
					Global_101434 = 0;
				}
				if (!Global_55822)
				{
					func_45();
				}
			}
		}
	}
}

int func_45()
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

int func_47()
{
	return Global_25190;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x2BB2E4C757637EC2("tvscreen"))
	{
		unk_0xE4FE3F56A96CDA73("tvscreen");
		iLocal_35 = -1;
		unk_0x9ECF2B67B569A85E(unk_0x92016DECDDF1828F());
	}
}

void func_51()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_52();
	}
	if (unk_0x2BB2E4C757637EC2("tvscreen"))
	{
		unk_0xE4FE3F56A96CDA73("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x23E9113C762466ED(iLocal_37))
	{
		func_66();
	}
	iVar0 = unk_0x0324EEB10F81965F(iLocal_37);
	unk_0x470BA9EBFB50ADE1("tvscreen", 0);
	unk_0x3D131D0E294702A9(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x91787D55F1D285D2(iVar0))
		{
			if (!unk_0x23E9113C762466ED(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x16281BACBF5409B8(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x2BB2E4C757637EC2("tvscreen"))
			{
				unk_0x470BA9EBFB50ADE1("tvscreen", 0);
			}
			if (!unk_0x91787D55F1D285D2(iVar0))
			{
				unk_0x3D131D0E294702A9(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0x6437E76B9AC80AE0("tvscreen");
	func_3();
}

void func_52()
{
	if (unk_0x23E9113C762466ED(iLocal_37))
	{
		if (unk_0x0324EEB10F81965F(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0x89241A4EA7EE46D2(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x0608D50823C6AA6D(iLocal_37, uLocal_34);
	unk_0x98F0FA127445E343(iLocal_37, 1);
	unk_0x027DB6817AB239EB(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0x89241A4EA7EE46D2(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x0608D50823C6AA6D(iLocal_39, uLocal_34);
	unk_0x98F0FA127445E343(iLocal_39, 1);
	unk_0x027DB6817AB239EB(iLocal_39, 0, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30(unk_0x48B8265059381CD0(*uParam0, 4)) - fParam1);
	unk_0xEB79FECD9022AAF0(uParam0, 1);
	unk_0x21E7933CCC7B3724(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_55()
{
}

int func_56(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

void func_57()
{
	Local_31 = { unk_0x57240623C1BC6E88(iLocal_37, 1) };
	uLocal_34 = unk_0x638527C9799F2AE4(iLocal_37);
	func_59();
	if (unk_0x0324EEB10F81965F(iLocal_37) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_43 = 0;
			Local_79 = { -9.8135f, -1440.913f, 31.3654f };
			Local_82 = { 0f, 0f, -134.3211f };
			Local_88 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x0324EEB10F81965F(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_58();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x0324EEB10F81965F(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			Local_79 = { 2.5724f, 527.9989f, 176.1619f };
			Local_82 = { 0f, 0f, -29.9488f };
			Local_88 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x0324EEB10F81965F(iLocal_37) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			Local_79 = { -1160.502f, -1520.76f, 10.7393f };
			Local_82 = { 0f, 0f, 60.061f };
			Local_88 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x0324EEB10F81965F(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x0324EEB10F81965F(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			Local_79 = { -802.8972f, 172.537f, 74.5801f };
			Local_82 = { 0f, 0f, -69.0273f };
			Local_88 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x0324EEB10F81965F(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			Local_79 = { -808.3051f, 171.2623f, 77.2822f };
			Local_82 = { 1.8886f, 0f, 110.9232f };
			Local_88 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_58()
{
	iLocal_38 = unk_0x89241A4EA7EE46D2(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x0608D50823C6AA6D(iLocal_38, uLocal_34);
	unk_0x027DB6817AB239EB(iLocal_38, 1, 0);
	unk_0x98F0FA127445E343(iLocal_38, 1);
}

void func_59()
{
	unk_0xD5D523028E8C8363(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0xD5D523028E8C8363(1, func_39(12), 0);
	}
	else
	{
		unk_0xD5D523028E8C8363(1, func_39(2), 0);
	}
}

void func_60()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25250[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0x23E9113C762466ED(iLocal_40))
			{
				unk_0xC6042F55A6EA17B2(iLocal_40, 0);
			}
			if (unk_0x23E9113C762466ED(iLocal_37))
			{
				unk_0xC6042F55A6EA17B2(iLocal_37, 0);
			}
			if (unk_0x23E9113C762466ED(iLocal_39))
			{
				unk_0xC6042F55A6EA17B2(iLocal_39, 0);
			}
			if (unk_0x23E9113C762466ED(iLocal_38))
			{
				unk_0xC6042F55A6EA17B2(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x23E9113C762466ED(iLocal_40))
		{
			unk_0xC6042F55A6EA17B2(iLocal_40, 1);
		}
		if (unk_0x23E9113C762466ED(iLocal_37))
		{
			unk_0xC6042F55A6EA17B2(iLocal_37, 1);
		}
		if (unk_0x23E9113C762466ED(iLocal_39))
		{
			unk_0xC6042F55A6EA17B2(iLocal_39, 1);
		}
		if (unk_0x23E9113C762466ED(iLocal_38))
		{
			unk_0xC6042F55A6EA17B2(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_61(int iParam0)
{
	return Global_35781 == iParam0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25250[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x800431CFB358AFCF() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

void func_65()
{
}

void func_66()
{
	if (iLocal_43 == -1)
	{
		unk_0x921053BAF754303D();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25250[iLocal_43 /*11*/].f_6 = 0;
		Global_25250[iLocal_43 /*11*/].f_7 = 0;
		Global_25250[iLocal_43 /*11*/].f_8 = 0;
		Global_25250[iLocal_43 /*11*/].f_4 = 0;
		Global_25250[iLocal_43 /*11*/].f_5 = 0;
		Global_25250[iLocal_43 /*11*/].f_2 = 0;
		Global_25250[iLocal_43 /*11*/] = -1;
		Global_25250[iLocal_43 /*11*/].f_1 = 0;
		Global_25250[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x2E2945F5602A744F(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_67();
	if (unk_0x4E1850F5FF023071(&cLocal_62))
	{
		unk_0xB8CAC5F3774894A1(&cLocal_62);
	}
	unk_0x115BE5011D8AAE08();
	func_2();
	unk_0x921053BAF754303D();
}

void func_67()
{
	func_50();
	if (unk_0x23E9113C762466ED(iLocal_37))
	{
		if (unk_0x0324EEB10F81965F(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x1AAFEA627BB9C402(&iLocal_37);
			unk_0x924CDE68BA2ED3BA(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_39))
	{
		unk_0x1AAFEA627BB9C402(&iLocal_39);
		unk_0x924CDE68BA2ED3BA(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x23E9113C762466ED(iLocal_38))
	{
		unk_0x1AAFEA627BB9C402(&iLocal_38);
		unk_0x924CDE68BA2ED3BA(joaat("prop_tt_screenstatic"));
	}
}

