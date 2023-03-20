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
	int* iLocal_38 = NULL;
	int* iLocal_39 = NULL;
	int* iLocal_40 = NULL;
	int iLocal_41 = 0;
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
	unk_0xFE99B66D079CF6BC(0, 26, true);
	if (func_24(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) != 0)
		{
			unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 0, false);
		}
	}
	if (unk_0xC968670BFACE42D9(83))
	{
		func_21(0);
	}
	unk_0xD3BD40951412FEF6(sLocal_42);
	unk_0x71A78003C8E71424("BARY1", 7);
	while (!unk_0xD031A9162D01088C(sLocal_42) || !unk_0x02245FE4BED318B8(7))
	{
		unk_0xFE99B66D079CF6BC(0, 26, true);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xFE99B66D079CF6BC(0, 26, true);
	func_24(unk_0xD80958FC74E988A6());
	iLocal_44 = unk_0x9CD27B0045628463() + 13000;
	iLocal_45 = unk_0xD53343AA4FB7DD28(0, 5);
	func_18();
	while (!func_13(&iLocal_41, 49, Local_50, func_17(1.12f), 0))
	{
		unk_0xFE99B66D079CF6BC(0, 26, true);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xFE99B66D079CF6BC(0, 26, true);
	func_12();
	iLocal_46 = unk_0x9CD27B0045628463() + 1000;
	unk_0xFE99B66D079CF6BC(0, 26, true);
	while (true)
	{
		func_24(unk_0xD80958FC74E988A6());
		if (unk_0x9CD27B0045628463() < iLocal_46)
		{
			unk_0xFE99B66D079CF6BC(0, 26, true);
		}
		func_11();
		if (!func_24(iLocal_41))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0xD80958FC74E988A6(), Local_50, 1) > 70f)
		{
			func_1(&iLocal_38, 0);
			func_1(&iLocal_39, 0);
			func_1(&iLocal_40, 0);
			func_21(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int* iParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (unk_0xB1632E9A5F988D11(*iParam0))
		{
			unk_0x961AC54BF0613F5D(*iParam0, true, true);
		}
		if (!bParam1)
		{
			unk_0x3AE22DEB5BA5A3E6(iParam0);
		}
		else
		{
			unk_0xADBE4809F19F927A(*iParam0);
		}
	}
}

float func_2(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0xD80958FC74E988A6()) && func_10(iLocal_41)) && !func_9()) && unk_0x9CD27B0045628463() > iLocal_44) && func_8(unk_0xD80958FC74E988A6(), iLocal_41, 1) < 20f) && !unk_0xA33CDCCDA663159E())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_41, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_44 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(12000, 18000));
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
	unk_0x933D6A9EEC1BACD0(&Global_14558, 0);
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

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

float func_8(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var3, bParam2);
}

int func_9()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0xAB0F816885B0E483(-1, Local_50, 5f))
	{
		if (func_10(iLocal_41))
		{
			unk_0x428CA6DBD1094446(iLocal_41, false);
			unk_0x697157CED63F18D4(iLocal_41, 1000, 1);
		}
		if (func_10(iLocal_39))
		{
			unk_0x428CA6DBD1094446(iLocal_39, false);
		}
		if (func_10(iLocal_38))
		{
			unk_0x428CA6DBD1094446(iLocal_38, false);
		}
	}
}

void func_12()
{
	if (func_10(iLocal_41))
	{
		if (!unk_0x0A7B270912999B3C(iLocal_41))
		{
			unk_0xAD738C3085FE7E11(iLocal_41, true, false);
		}
		unk_0x93376B65A266EB5F(iLocal_41, 1, 0, 0, false);
		unk_0x9F8AA94D6D97DBF4(iLocal_41, true);
		unk_0xA9C8960E8684C1B5(iLocal_41, 0);
		unk_0x63F58F7C80513AAD(iLocal_41, false);
		unk_0x98EFA132A4117BE1(iLocal_41, "POSTBARRY");
		unk_0xC80A74AC829DDD92(iLocal_41, joaat("player"));
		unk_0x1A9205C1B9EE827F(iLocal_41, false, false);
		unk_0x428CA6DBD1094446(iLocal_41, true);
		unk_0x06843DA7060A026B(iLocal_41, Local_50, true, false, false, true);
		unk_0x8E2530AA8ADA980E(iLocal_41, func_17(1.12f));
		unk_0x428CA6DBD1094446(iLocal_41, true);
		unk_0xEA47FE3719165B94(iLocal_41, sLocal_42, sLocal_43, 8f, -8f, -1, 9, 0f, false, false, false);
		unk_0x69F4BE8C8CC4796C(iLocal_41, unk_0xD80958FC74E988A6(), -1, 0, 2);
	}
}

int func_13(int* iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x963D27A58DF860AC(iVar0);
		if (unk_0x98A4EB5D89A0C952(iVar0))
		{
			if (unk_0x7239B21A38F536BA(*iParam0))
			{
				unk_0x9614299DCB53E54B(iParam0);
			}
			*iParam0 = unk_0xD49F9B0955C367DE(26, iVar0, Param2, fParam5, false, false);
			unk_0x45EEE61580806D63(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x67F3780DD425D4FC(*iParam0, 3) == 0)
				{
					unk_0x262B14F48D29DE80(*iParam0, 5, 2, 0, 0);
				}
			}
			func_14(*iParam0, iParam1);
			if (bParam6)
			{
				unk_0xE532F5D78798DAAB(iVar0);
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
	if (unk_0xBFA48E2FF417213F(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false))
	{
		iLocal_39 = unk_0xE143FA2249364369(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false, false, true);
		if (func_24(iLocal_39))
		{
			if (!unk_0x0A7B270912999B3C(iLocal_39))
			{
				unk_0xAD738C3085FE7E11(iLocal_39, true, false);
			}
			Local_47 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x06843DA7060A026B(iLocal_39, Local_47, true, false, false, true);
			unk_0x8E2530AA8ADA980E(iLocal_39, func_17(-2.01f));
			unk_0x428CA6DBD1094446(iLocal_39, true);
		}
	}
	if (unk_0xBFA48E2FF417213F(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false))
	{
		iLocal_38 = unk_0xE143FA2249364369(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false, false, true);
		if (func_24(iLocal_38))
		{
			if (!unk_0x0A7B270912999B3C(iLocal_38))
			{
				unk_0xAD738C3085FE7E11(iLocal_38, true, false);
			}
			Local_47 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x06843DA7060A026B(iLocal_38, Local_47, true, false, false, true);
			unk_0x8E2530AA8ADA980E(iLocal_38, func_17(-1.68f));
			unk_0x428CA6DBD1094446(iLocal_38, true);
		}
	}
	else
	{
		Local_47 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&iLocal_38, joaat("prop_chair_08"), Local_47, func_17(-1.68f));
		unk_0x06843DA7060A026B(iLocal_38, Local_47, true, false, false, true);
		unk_0x8E2530AA8ADA980E(iLocal_38, func_17(-1.68f));
		unk_0x428CA6DBD1094446(iLocal_38, true);
	}
	Local_47 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0xBFA48E2FF417213F(Local_47, 25f, joaat("prop_protest_sign_01"), false))
	{
		iLocal_40 = unk_0xE143FA2249364369(Local_47, 25f, joaat("prop_protest_sign_01"), false, false, true);
		if (func_24(iLocal_40))
		{
			if (!unk_0x0A7B270912999B3C(iLocal_40))
			{
				unk_0xAD738C3085FE7E11(iLocal_40, true, false);
			}
			Local_47.f_2 = 29.603f;
			unk_0x06843DA7060A026B(iLocal_40, Local_47, true, false, false, true);
			unk_0x8E2530AA8ADA980E(iLocal_40, 23.45f);
		}
	}
	else
	{
		func_19(&iLocal_40, joaat("prop_protest_sign_01"), Local_47, 23.45f);
		unk_0x06843DA7060A026B(iLocal_40, Local_47, true, false, false, true);
		unk_0x8E2530AA8ADA980E(iLocal_40, 23.45f);
	}
}

void func_19(int* iParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(iParam0);
	*iParam0 = unk_0x509D5878EB39E842(iParam1, Param2, true, true, false);
	unk_0x8E2530AA8ADA980E(*iParam0, fParam5);
}

void func_20(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (unk_0xB1632E9A5F988D11(*iParam0))
		{
			unk_0x961AC54BF0613F5D(*iParam0, true, true);
		}
		unk_0x539E0AE3E6634B9F(iParam0);
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&iLocal_41);
	}
	else
	{
		func_22(&iLocal_41, 1, 0, 1);
	}
	if (func_10(iLocal_39))
	{
		unk_0x428CA6DBD1094446(iLocal_39, false);
	}
	if (func_10(iLocal_38))
	{
		unk_0x428CA6DBD1094446(iLocal_38, false);
	}
	if (bParam0)
	{
		func_20(&iLocal_38);
		func_20(&iLocal_39);
		func_20(&iLocal_40);
	}
	else
	{
		func_1(&iLocal_38, 0);
		func_1(&iLocal_39, 0);
		func_1(&iLocal_40, 0);
	}
	unk_0xF66A602F829E2A06(sLocal_42);
	unk_0x2A179DF17CCF04CD(7, false);
	unk_0x1090044AD1DA76FA();
}

void func_22(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(*iParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*iParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x176CECF6F920D707(*iParam0);
			}
			unk_0x971D38760FBC02EF(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x9F8AA94D6D97DBF4(*iParam0, false);
			}
		}
		unk_0x2595DD4236549CE3(iParam0);
	}
}

void func_23(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(*iParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*iParam0, 0);
		}
		if (!unk_0x0A7B270912999B3C(*iParam0))
		{
			unk_0xAD738C3085FE7E11(*iParam0, true, false);
		}
		unk_0x9614299DCB53E54B(iParam0);
	}
}

bool func_24(int iParam0)
{
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	return !unk_0x5F9532F3B5CC2551(iParam0);
}

