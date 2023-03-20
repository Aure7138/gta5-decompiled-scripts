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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char* sLocal_42 = NULL;
	char* sLocal_43 = NULL;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	sLocal_42 = "RCMBarryLeadInOut";
	sLocal_43 = "idle";
	Local_47 = { 189.5964f, -956.0344f, 29.5771f };
	Local_50 = { 190.2424f, -956.379f, 28.63f };
	unk_0x500F4CA776CEBD0A(0, 26, 1);
	if (func_24(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) != 0)
		{
			unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 0, 0);
		}
	}
	if (unk_0x7547D7CF93115D6D(83))
	{
		func_21(0);
	}
	unk_0x395C5D98343F0040(sLocal_42);
	unk_0x481B0AD01AC057F7("BARY1", 7);
	while (!unk_0xCE40391AB65FE305(sLocal_42) || !unk_0x6C741637F73EA9EC(7))
	{
		unk_0x500F4CA776CEBD0A(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x500F4CA776CEBD0A(0, 26, 1);
	func_24(unk_0x507DA4994C3D8EBD());
	iLocal_44 = unk_0xF976C624234A4AA8() + 13000;
	iLocal_45 = unk_0x4D3E68F73B727E49(0, 5);
	func_18();
	while (!func_13(&uLocal_41, 49, Local_50, func_17(1.12f), 0))
	{
		unk_0x500F4CA776CEBD0A(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x500F4CA776CEBD0A(0, 26, 1);
	func_12();
	iLocal_46 = unk_0xF976C624234A4AA8() + 1000;
	unk_0x500F4CA776CEBD0A(0, 26, 1);
	while (true)
	{
		func_24(unk_0x507DA4994C3D8EBD());
		if (unk_0xF976C624234A4AA8() < iLocal_46)
		{
			unk_0x500F4CA776CEBD0A(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_41))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x507DA4994C3D8EBD(), Local_50, 1) > 70f)
		{
			func_1(&uLocal_38, 0);
			func_1(&uLocal_39, 0);
			func_1(&uLocal_40, 0);
			func_21(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0x42B70344077B22B9(*uParam0))
		{
			unk_0x5B97F41A7BE54877(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x05DADA1340CBB893(uParam0);
		}
		else
		{
			unk_0x0D693FF0257B8CE4(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(uParam0, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x507DA4994C3D8EBD()) && func_10(uLocal_41)) && !func_9()) && unk_0xF976C624234A4AA8() > iLocal_44) && func_8(unk_0x507DA4994C3D8EBD(), uLocal_41, 1) < 20f) && !unk_0x4E6BA6FF244D94A8())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_41, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_44 = (unk_0xF976C624234A4AA8() + unk_0x4D3E68F73B727E49(12000, 18000));
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
	unk_0x3DBE2A7AF9E71C82(&Global_14558, 0);
	Global_15695 = iParam3;
	StringCopy(&Global_15682, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_45)
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
	iLocal_45++;
	if (iLocal_45 > 4)
	{
		iLocal_45 = 0;
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
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(uParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(uParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(uParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(uParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(uParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(uParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x6588804F7BCB1101(-1, Local_50, 5f))
	{
		if (func_10(uLocal_41))
		{
			unk_0x479E7EEEBDEE245D(uLocal_41, 0);
			unk_0x638CD54DC5CC8A3F(uLocal_41, 1000, 1);
		}
		if (func_10(uLocal_39))
		{
			unk_0x479E7EEEBDEE245D(uLocal_39, 0);
		}
		if (func_10(uLocal_38))
		{
			unk_0x479E7EEEBDEE245D(uLocal_38, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_41))
	{
		if (!unk_0x73E2404DC70203CD(uLocal_41))
		{
			unk_0xBAE5DF507EEC53C8(uLocal_41, 1, 0);
		}
		unk_0x06543DA07CCCC7F5(uLocal_41, 1, 0, 0, 0);
		unk_0x2DC5B31EBB810396(uLocal_41, 1);
		unk_0xFBF796BC19E6FC23(uLocal_41, 0);
		unk_0x6A750A31D18DA81A(uLocal_41, 0);
		unk_0x3F671607BC1804B5(uLocal_41, "POSTBARRY");
		unk_0xE440546F94B26235(uLocal_41, joaat("player"));
		unk_0xCC8C6873CFB069A4(uLocal_41, 0, 0);
		unk_0x479E7EEEBDEE245D(uLocal_41, 1);
		unk_0xF85858E5CBF4D9F0(uLocal_41, Local_50, 1, 0, 0, 1);
		unk_0x248DC16118AE5035(uLocal_41, func_17(1.12f));
		unk_0x479E7EEEBDEE245D(uLocal_41, 1);
		unk_0xEC0A546609840086(uLocal_41, sLocal_42, sLocal_43, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x8E759206778E571F(uLocal_41, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0xCBE6AC5010E5CE5C(iVar0);
		if (unk_0xD291857D0C9C7FEC(iVar0))
		{
			if (unk_0xFD68187442384158(*uParam0))
			{
				unk_0x8019BB3BA236A900(uParam0);
			}
			*uParam0 = unk_0x7B88529CAE3B7F15(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x4376624421FB329B(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xFEAB4D7F75916F7C(*uParam0, 3) == 0)
				{
					unk_0xF2685765B7BEBCB0(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xFF467904A8A12BBE(iVar0);
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
	Global_86023[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
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
	if (unk_0x93EADDF7E52E1671(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_39 = unk_0x78608A3628DF265E(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_39))
		{
			if (!unk_0x73E2404DC70203CD(uLocal_39))
			{
				unk_0xBAE5DF507EEC53C8(uLocal_39, 1, 0);
			}
			Local_47 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xF85858E5CBF4D9F0(uLocal_39, Local_47, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(uLocal_39, func_17(-2.01f));
			unk_0x479E7EEEBDEE245D(uLocal_39, 1);
		}
	}
	if (unk_0x93EADDF7E52E1671(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_38 = unk_0x78608A3628DF265E(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_38))
		{
			if (!unk_0x73E2404DC70203CD(uLocal_38))
			{
				unk_0xBAE5DF507EEC53C8(uLocal_38, 1, 0);
			}
			Local_47 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xF85858E5CBF4D9F0(uLocal_38, Local_47, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(uLocal_38, func_17(-1.68f));
			unk_0x479E7EEEBDEE245D(uLocal_38, 1);
		}
	}
	else
	{
		Local_47 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_38, joaat("prop_chair_08"), Local_47, func_17(-1.68f));
		unk_0xF85858E5CBF4D9F0(uLocal_38, Local_47, 1, 0, 0, 1);
		unk_0x248DC16118AE5035(uLocal_38, func_17(-1.68f));
		unk_0x479E7EEEBDEE245D(uLocal_38, 1);
	}
	Local_47 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x93EADDF7E52E1671(Local_47, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_40 = unk_0x78608A3628DF265E(Local_47, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0x73E2404DC70203CD(uLocal_40))
			{
				unk_0xBAE5DF507EEC53C8(uLocal_40, 1, 0);
			}
			Local_47.f_2 = 29.603f;
			unk_0xF85858E5CBF4D9F0(uLocal_40, Local_47, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(uLocal_40, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_40, joaat("prop_protest_sign_01"), Local_47, 23.45f);
		unk_0xF85858E5CBF4D9F0(uLocal_40, Local_47, 1, 0, 0, 1);
		unk_0x248DC16118AE5035(uLocal_40, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0xCEC985247737A30E(iParam1, Param2, 1, 1, 0);
	unk_0x248DC16118AE5035(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0x42B70344077B22B9(*uParam0))
		{
			unk_0x5B97F41A7BE54877(*uParam0, 1, 1);
		}
		unk_0x4095FD029041DD48(uParam0);
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&uLocal_41);
	}
	else
	{
		func_22(&uLocal_41, 1, 0, 1);
	}
	if (func_10(uLocal_39))
	{
		unk_0x479E7EEEBDEE245D(uLocal_39, 0);
	}
	if (func_10(uLocal_38))
	{
		unk_0x479E7EEEBDEE245D(uLocal_38, 0);
	}
	if (bParam0)
	{
		func_20(&uLocal_38);
		func_20(&uLocal_39);
		func_20(&uLocal_40);
	}
	else
	{
		func_1(&uLocal_38, 0);
		func_1(&uLocal_39, 0);
		func_1(&uLocal_40, 0);
	}
	unk_0xA878656BC39BBC51(sLocal_42);
	unk_0x0474B54D6F301DDF(7, 0);
	unk_0x883793591E631A3B();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(*uParam0))
		{
			unk_0x3C2614E45AB2F499(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x1E61DAA6A0EEC652(*uParam0);
			}
			unk_0xA1E4BA3B17C6D931(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2DC5B31EBB810396(*uParam0, 0);
			}
		}
		unk_0xCA4DD92F1F2931F3(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(*uParam0))
		{
			unk_0x3C2614E45AB2F499(*uParam0, 0);
		}
		if (!unk_0x73E2404DC70203CD(*uParam0))
		{
			unk_0xBAE5DF507EEC53C8(*uParam0, 1, 0);
		}
		unk_0x8019BB3BA236A900(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0xFD68187442384158(uParam0))
	{
		return 0;
	}
	return !unk_0xE5D56342B0FF1D0D(uParam0);
}

