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
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_52 = { 190.2424f, -956.379f, 28.63f };
	unk_0xD1BB2AD73E7FC3A7(0, 26, 1);
	if (func_24(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) != 0)
		{
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
		}
	}
	if (unk_0xBCA819F9975BEDFA(83))
	{
		func_21(0);
	}
	unk_0xA0E7D0E8FE126EE8(sLocal_44);
	unk_0xA73AE78D2491E6E1("BARY1", 7);
	while (!unk_0xF4F8AE8DD0F08C1E(sLocal_44) || !unk_0x657558590DD37F85(7))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 26, 1);
	func_24(unk_0x17B5CC8A8615737D());
	iLocal_46 = unk_0x94E3E074F38DF86C() + 13000;
	iLocal_47 = unk_0x0E29C61F26D96FDB(0, 5);
	func_18();
	while (!func_13(&uLocal_43, 49, Local_52, func_17(1.12f), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x94E3E074F38DF86C() + 1000;
	unk_0xD1BB2AD73E7FC3A7(0, 26, 1);
	while (true)
	{
		func_24(unk_0x17B5CC8A8615737D());
		if (unk_0x94E3E074F38DF86C() < iLocal_48)
		{
			unk_0xD1BB2AD73E7FC3A7(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x17B5CC8A8615737D(), Local_52, 1) > 70f)
		{
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_1(&uLocal_42, 0);
			func_21(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (unk_0xF928485DD4C9E3C3(*uParam0))
		{
			unk_0xB2E72B5CFE1EC372(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x7572E8CAC3330ACE(uParam0);
		}
		else
		{
			unk_0x6CCB4081AEF003A1(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(uParam0, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x17B5CC8A8615737D()) && func_10(uLocal_43)) && !func_9()) && unk_0x94E3E074F38DF86C() > iLocal_46) && func_8(unk_0x17B5CC8A8615737D(), uLocal_43, 1) < 20f) && !unk_0xE6235D8850CC396F())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xEB79FECD9022AAF0(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(uParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(uParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(uParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(uParam0, 0) };
	}
	if (!unk_0xA929B2923D14E2F8(uParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x57240623C1BC6E88(uParam1, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xA929B2923D14E2F8(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x3C04DDC5730997E5(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0x98F0FA127445E343(uLocal_43, 0);
			unk_0x04B2722F51BC08A8(uLocal_43, 1000, 1);
		}
		if (func_10(uLocal_41))
		{
			unk_0x98F0FA127445E343(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0x98F0FA127445E343(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0xC26429B504BA534D(uLocal_43))
		{
			unk_0xF0F77C99098F999B(uLocal_43, 1, 0);
		}
		unk_0xCAA97B7826076AFA(uLocal_43, 1, 0, 0, 0);
		unk_0xCC61640A821F277C(uLocal_43, 1);
		unk_0x4DF0B516187EED5A(uLocal_43, 0);
		unk_0x6F65279C9BC14EDB(uLocal_43, 0);
		unk_0x3BEB2E27EBD72589(uLocal_43, "POSTBARRY");
		unk_0x3BB70315907D9456(uLocal_43, joaat("player"));
		unk_0xCEDF2A713644AEDA(uLocal_43, 0, 0);
		unk_0x98F0FA127445E343(uLocal_43, 1);
		unk_0x5DC8C2F2F8A363C2(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(uLocal_43, func_17(1.12f));
		unk_0x98F0FA127445E343(uLocal_43, 1);
		unk_0xEB1EFACA68933402(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x4718A774D9248520(uLocal_43, unk_0x17B5CC8A8615737D(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0xE1324F59713746FA(iVar0);
		if (unk_0x9F746898F7881612(iVar0))
		{
			if (unk_0x23E9113C762466ED(*uParam0))
			{
				unk_0x478AE709A466CB7E(uParam0);
			}
			*uParam0 = unk_0x2AD5F4170F4ACBEB(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x7F73E2B58861632F(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xC72E4A160D2D5004(*uParam0, 3) == 0)
				{
					unk_0x2F933BB106547968(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x924CDE68BA2ED3BA(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_87658[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

float func_17(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_18()
{
	if (unk_0x8B98C3C1BE2D3F12(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0x29280EF6724677F5(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0xC26429B504BA534D(uLocal_41))
			{
				unk_0xF0F77C99098F999B(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x5DC8C2F2F8A363C2(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0x0608D50823C6AA6D(uLocal_41, func_17(-2.01f));
			unk_0x98F0FA127445E343(uLocal_41, 1);
		}
	}
	if (unk_0x8B98C3C1BE2D3F12(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0x29280EF6724677F5(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0xC26429B504BA534D(uLocal_40))
			{
				unk_0xF0F77C99098F999B(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x5DC8C2F2F8A363C2(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0x0608D50823C6AA6D(uLocal_40, func_17(-1.68f));
			unk_0x98F0FA127445E343(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_40, joaat("prop_chair_08"), Local_49, func_17(-1.68f));
		unk_0x5DC8C2F2F8A363C2(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(uLocal_40, func_17(-1.68f));
		unk_0x98F0FA127445E343(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x8B98C3C1BE2D3F12(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0x29280EF6724677F5(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_42))
		{
			if (!unk_0xC26429B504BA534D(uLocal_42))
			{
				unk_0xF0F77C99098F999B(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0x5DC8C2F2F8A363C2(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0x0608D50823C6AA6D(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0x5DC8C2F2F8A363C2(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(uLocal_42, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0x521A82CF998EDB21(iParam1, Param2, 1, 1, 0);
	unk_0x0608D50823C6AA6D(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (unk_0xF928485DD4C9E3C3(*uParam0))
		{
			unk_0xB2E72B5CFE1EC372(*uParam0, 1, 1);
		}
		unk_0x1AAFEA627BB9C402(uParam0);
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&uLocal_43);
	}
	else
	{
		func_22(&uLocal_43, 1, 0, 1);
	}
	if (func_10(uLocal_41))
	{
		unk_0x98F0FA127445E343(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0x98F0FA127445E343(uLocal_40, 0);
	}
	if (bParam0)
	{
		func_20(&uLocal_40);
		func_20(&uLocal_41);
		func_20(&uLocal_42);
	}
	else
	{
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
		func_1(&uLocal_42, 0);
	}
	unk_0xF9FFB9857F3120F8(sLocal_44);
	unk_0x6DB5F7460B043A80(7, 0);
	unk_0x921053BAF754303D();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (!unk_0xCA41A00932714525(*uParam0))
		{
			unk_0x4114B83B329702FF(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xFFAC04A19BFE8F03(*uParam0);
			}
			unk_0x650BB0E111420EAF(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xCC61640A821F277C(*uParam0, 0);
			}
		}
		unk_0x6500ADB01E821BC0(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (!unk_0xA929B2923D14E2F8(*uParam0, 0))
		{
			unk_0x4114B83B329702FF(*uParam0, 0);
		}
		if (!unk_0xC26429B504BA534D(*uParam0))
		{
			unk_0xF0F77C99098F999B(*uParam0, 1, 0);
		}
		unk_0x478AE709A466CB7E(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0x23E9113C762466ED(uParam0))
	{
		return 0;
	}
	return !unk_0xA929B2923D14E2F8(uParam0, 0);
}

