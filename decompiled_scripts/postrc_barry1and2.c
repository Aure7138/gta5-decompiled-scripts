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
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	char* sLocal_43 = NULL;
	char* sLocal_44 = NULL;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
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
	iLocal_37 = 3;
	sLocal_43 = "RCMBarryLeadInOut";
	sLocal_44 = "idle";
	Local_48 = { 189.5964f, -956.0344f, 29.5771f };
	Local_51 = { 190.2424f, -956.379f, 28.63f };
	unk_0xDE1125A413AF241C(0, 26, 1);
	if (func_24(unk_0x81873881071CD9FE()))
	{
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) != 0)
		{
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
		}
	}
	if (unk_0x8D841F1DD3FA555F(83))
	{
		func_21(0);
	}
	unk_0x295DC04FC13E025B(sLocal_43);
	unk_0x86B83C54AF71BD12("BARY1", 7);
	while (!unk_0x8E8B546E1A81D27F(sLocal_43) || !unk_0xCD8DA898314F3016(7))
	{
		unk_0xDE1125A413AF241C(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xDE1125A413AF241C(0, 26, 1);
	func_24(unk_0x81873881071CD9FE());
	iLocal_45 = unk_0x48E480685981C7D4() + 13000;
	iLocal_46 = unk_0x2E0A9E3291F398E3(0, 5);
	func_18();
	while (!func_13(&uLocal_42, 49, Local_51, func_17(1.12f), 0))
	{
		unk_0xDE1125A413AF241C(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xDE1125A413AF241C(0, 26, 1);
	func_12();
	iLocal_47 = unk_0x48E480685981C7D4() + 1000;
	unk_0xDE1125A413AF241C(0, 26, 1);
	while (true)
	{
		func_24(unk_0x81873881071CD9FE());
		if (unk_0x48E480685981C7D4() < iLocal_47)
		{
			unk_0xDE1125A413AF241C(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_42))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x81873881071CD9FE(), Local_51, 1) > 70f)
		{
			func_1(&uLocal_39, 0);
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_21(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (unk_0xE482770A8B024982(*uParam0))
		{
			unk_0xD88DD5B581458979(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xB5713813CBD9E79F(uParam0);
		}
		else
		{
			unk_0xD196F3B2D5DF4AC3(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(uParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x81873881071CD9FE()) && func_10(uLocal_42)) && !func_9()) && unk_0x48E480685981C7D4() > iLocal_45) && func_8(unk_0x81873881071CD9FE(), uLocal_42, 1) < 20f) && !unk_0x0C59B91B32EEDDEE())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_42, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_45 = (unk_0x48E480685981C7D4() + unk_0x2E0A9E3291F398E3(12000, 18000));
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
	unk_0xF3148AAF69AF9CBC(&Global_14559, 0);
	Global_15696 = iParam3;
	StringCopy(&Global_15683, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_46)
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
	iLocal_46++;
	if (iLocal_46 > 4)
	{
		iLocal_46 = 0;
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
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(uParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(uParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(uParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(uParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(uParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(uParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0xF46EAA2C25D08B6F(-1, Local_51, 5f))
	{
		if (func_10(uLocal_42))
		{
			unk_0xA8F22633ACC22189(uLocal_42, 0);
			unk_0xBEA45AF6117687AD(uLocal_42, 1000, 1);
		}
		if (func_10(uLocal_40))
		{
			unk_0xA8F22633ACC22189(uLocal_40, 0);
		}
		if (func_10(uLocal_39))
		{
			unk_0xA8F22633ACC22189(uLocal_39, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_42))
	{
		if (!unk_0xE86442941AE40E75(uLocal_42))
		{
			unk_0xD768713E73165208(uLocal_42, 1, 0);
		}
		unk_0x8F6F76DC62AD09F1(uLocal_42, 1, 0, 0, 0);
		unk_0x1D15D99A10A15334(uLocal_42, 1);
		unk_0x0CD6B65135C8C3FE(uLocal_42, 0);
		unk_0x33B1E568CEF14B0D(uLocal_42, 0);
		unk_0x96B56AFFC92EEC6D(uLocal_42, "POSTBARRY");
		unk_0x506A601663C5417C(uLocal_42, joaat("player"));
		unk_0x5CEA5F12775261F2(uLocal_42, 0, 0);
		unk_0xA8F22633ACC22189(uLocal_42, 1);
		unk_0xB067093BBAF0A747(uLocal_42, Local_51, 1, 0, 0, 1);
		unk_0xC24172029826A66F(uLocal_42, func_17(1.12f));
		unk_0xA8F22633ACC22189(uLocal_42, 1);
		unk_0x31C1393E4ACFD794(uLocal_42, sLocal_43, sLocal_44, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xAF625598EDA64AD3(uLocal_42, unk_0x81873881071CD9FE(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x32A12757CBF48A33(iVar0);
		if (unk_0x33ACB874CECA2D4B(iVar0))
		{
			if (unk_0x86CCCD2FAE9D5E65(*uParam0))
			{
				unk_0xF210D34D7F7152ED(uParam0);
			}
			*uParam0 = unk_0x206897C6DBC12488(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x8A7A890067E00092(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x1CFC95A2D6BABBA2(*uParam0, 3) == 0)
				{
					unk_0x03F73D35E5AC583A(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x887F4488DA99FD21(iVar0);
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
	Global_86976[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
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
	if (unk_0x667A6FB4A24C8B47(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_40 = unk_0xA0650591A05CB4F6(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0xE86442941AE40E75(uLocal_40))
			{
				unk_0xD768713E73165208(uLocal_40, 1, 0);
			}
			Local_48 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xB067093BBAF0A747(uLocal_40, Local_48, 1, 0, 0, 1);
			unk_0xC24172029826A66F(uLocal_40, func_17(-2.01f));
			unk_0xA8F22633ACC22189(uLocal_40, 1);
		}
	}
	if (unk_0x667A6FB4A24C8B47(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_39 = unk_0xA0650591A05CB4F6(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_39))
		{
			if (!unk_0xE86442941AE40E75(uLocal_39))
			{
				unk_0xD768713E73165208(uLocal_39, 1, 0);
			}
			Local_48 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xB067093BBAF0A747(uLocal_39, Local_48, 1, 0, 0, 1);
			unk_0xC24172029826A66F(uLocal_39, func_17(-1.68f));
			unk_0xA8F22633ACC22189(uLocal_39, 1);
		}
	}
	else
	{
		Local_48 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_39, joaat("prop_chair_08"), Local_48, func_17(-1.68f));
		unk_0xB067093BBAF0A747(uLocal_39, Local_48, 1, 0, 0, 1);
		unk_0xC24172029826A66F(uLocal_39, func_17(-1.68f));
		unk_0xA8F22633ACC22189(uLocal_39, 1);
	}
	Local_48 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x667A6FB4A24C8B47(Local_48, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_41 = unk_0xA0650591A05CB4F6(Local_48, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0xE86442941AE40E75(uLocal_41))
			{
				unk_0xD768713E73165208(uLocal_41, 1, 0);
			}
			Local_48.f_2 = 29.603f;
			unk_0xB067093BBAF0A747(uLocal_41, Local_48, 1, 0, 0, 1);
			unk_0xC24172029826A66F(uLocal_41, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_41, joaat("prop_protest_sign_01"), Local_48, 23.45f);
		unk_0xB067093BBAF0A747(uLocal_41, Local_48, 1, 0, 0, 1);
		unk_0xC24172029826A66F(uLocal_41, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0xF364195A57BB7AE3(iParam1, Param2, 1, 1, 0);
	unk_0xC24172029826A66F(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (unk_0xE482770A8B024982(*uParam0))
		{
			unk_0xD88DD5B581458979(*uParam0, 1, 1);
		}
		unk_0xAB6AFD52AD641D70(uParam0);
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&uLocal_42);
	}
	else
	{
		func_22(&uLocal_42, 1, 0, 1);
	}
	if (func_10(uLocal_40))
	{
		unk_0xA8F22633ACC22189(uLocal_40, 0);
	}
	if (func_10(uLocal_39))
	{
		unk_0xA8F22633ACC22189(uLocal_39, 0);
	}
	if (bParam0)
	{
		func_20(&uLocal_39);
		func_20(&uLocal_40);
		func_20(&uLocal_41);
	}
	else
	{
		func_1(&uLocal_39, 0);
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
	}
	unk_0xD8323B49BAE93D80(sLocal_43);
	unk_0xBEE99C97A1B87F95(7, 0);
	unk_0xC23A229F78DAD92A();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x5FEB513A4402FD59(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x4191220706130B86(*uParam0);
			}
			unk_0x6CB332CB31E9FA96(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x1D15D99A10A15334(*uParam0, 0);
			}
		}
		unk_0x71A8BCA218722FA1(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
		}
		if (!unk_0xE86442941AE40E75(*uParam0))
		{
			unk_0xD768713E73165208(*uParam0, 1, 0);
		}
		unk_0xF210D34D7F7152ED(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	return !unk_0x930F8FBB8E9537CC(uParam0);
}

