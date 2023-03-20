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
	unk_0x4B404C739A9AFC7A(0, 26, 1);
	if (func_24(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) != 0)
		{
			unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
		}
	}
	if (unk_0x2C897F101BA20806(83))
	{
		func_21(0);
	}
	unk_0x3D28909AF30D70F4(sLocal_43);
	unk_0x95AB598E6554985B("BARY1", 7);
	while (!unk_0x6C47E32491756A1A(sLocal_43) || !unk_0x5CD78FA34B48CB6E(7))
	{
		unk_0x4B404C739A9AFC7A(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4B404C739A9AFC7A(0, 26, 1);
	func_24(unk_0xA16EC202D9D35357());
	iLocal_45 = unk_0x09560C7DE2A384BD() + 13000;
	iLocal_46 = unk_0x444ECD635D5FD45F(0, 5);
	func_18();
	while (!func_13(&uLocal_42, 49, Local_51, func_17(1.12f), 0))
	{
		unk_0x4B404C739A9AFC7A(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4B404C739A9AFC7A(0, 26, 1);
	func_12();
	iLocal_47 = unk_0x09560C7DE2A384BD() + 1000;
	unk_0x4B404C739A9AFC7A(0, 26, 1);
	while (true)
	{
		func_24(unk_0xA16EC202D9D35357());
		if (unk_0x09560C7DE2A384BD() < iLocal_47)
		{
			unk_0x4B404C739A9AFC7A(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_42))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0xA16EC202D9D35357(), Local_51, 1) > 70f)
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
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		if (unk_0xE55530DE0D08711B(*uParam0))
		{
			unk_0xBF1AB1205B822518(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x2E674C3D6D338EFA(uParam0);
		}
		else
		{
			unk_0x79BBFC9C6090E612(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE44A580B551C3645(uParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(uParam0, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0xA16EC202D9D35357()) && func_10(uLocal_42)) && !func_9()) && unk_0x09560C7DE2A384BD() > iLocal_45) && func_8(unk_0xA16EC202D9D35357(), uLocal_42, 1) < 20f) && !unk_0x57928D9CA949E471())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_42, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_45 = (unk_0x09560C7DE2A384BD() + unk_0x444ECD635D5FD45F(12000, 18000));
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
	unk_0xD0E2BFCE93AE3ABD(&Global_14559, 0);
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
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(uParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(uParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(uParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(uParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(uParam0, 0) };
	}
	if (!unk_0xE44A580B551C3645(uParam1))
	{
		Var3 = { unk_0xBF8499F46AD9093A(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF8499F46AD9093A(uParam1, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0xE44A580B551C3645(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x8C42D51DE272AC72(-1, Local_51, 5f))
	{
		if (func_10(uLocal_42))
		{
			unk_0x3CC3106305C40A28(uLocal_42, 0);
			unk_0xF8AB620167DF503A(uLocal_42, 1000, 1);
		}
		if (func_10(uLocal_40))
		{
			unk_0x3CC3106305C40A28(uLocal_40, 0);
		}
		if (func_10(uLocal_39))
		{
			unk_0x3CC3106305C40A28(uLocal_39, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_42))
	{
		if (!unk_0x22349EC06EA5B08B(uLocal_42))
		{
			unk_0x7B9576B4E099FB1F(uLocal_42, 1, 0);
		}
		unk_0xD8C28445617D0902(uLocal_42, 1, 0, 0, 0);
		unk_0x2C4E82CF88213975(uLocal_42, 1);
		unk_0x065062839FBD7BCF(uLocal_42, 0);
		unk_0xA8BC819B54F5B824(uLocal_42, 0);
		unk_0xCB0714DE8BE81377(uLocal_42, "POSTBARRY");
		unk_0xA9465591B42213AE(uLocal_42, joaat("player"));
		unk_0x6A23C3306A8CF21B(uLocal_42, 0, 0);
		unk_0x3CC3106305C40A28(uLocal_42, 1);
		unk_0x6C43BF7625967266(uLocal_42, Local_51, 1, 0, 0, 1);
		unk_0x34639238667C4381(uLocal_42, func_17(1.12f));
		unk_0x3CC3106305C40A28(uLocal_42, 1);
		unk_0x5B5659C49032B96C(uLocal_42, sLocal_43, sLocal_44, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x4745F9C50C63A48C(uLocal_42, unk_0xA16EC202D9D35357(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x939DA7EBCC6588FF(iVar0);
		if (unk_0x5494F37F35C1D7D7(iVar0))
		{
			if (unk_0x538DF9E5B1DF01EB(*uParam0))
			{
				unk_0x51A89CCC8A5317D0(uParam0);
			}
			*uParam0 = unk_0x6F9DE0DE8363ADF1(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x4EE0F5199728EF16(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x95AD4DE218A9F9E5(*uParam0, 3) == 0)
				{
					unk_0x42544C0CC4949BD5(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xEA054561294AEC10(iVar0);
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
	Global_86281[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
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
	if (unk_0x868516D11F344453(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_40 = unk_0xF7AA299A75E7C5A1(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0x22349EC06EA5B08B(uLocal_40))
			{
				unk_0x7B9576B4E099FB1F(uLocal_40, 1, 0);
			}
			Local_48 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x6C43BF7625967266(uLocal_40, Local_48, 1, 0, 0, 1);
			unk_0x34639238667C4381(uLocal_40, func_17(-2.01f));
			unk_0x3CC3106305C40A28(uLocal_40, 1);
		}
	}
	if (unk_0x868516D11F344453(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_39 = unk_0xF7AA299A75E7C5A1(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_39))
		{
			if (!unk_0x22349EC06EA5B08B(uLocal_39))
			{
				unk_0x7B9576B4E099FB1F(uLocal_39, 1, 0);
			}
			Local_48 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x6C43BF7625967266(uLocal_39, Local_48, 1, 0, 0, 1);
			unk_0x34639238667C4381(uLocal_39, func_17(-1.68f));
			unk_0x3CC3106305C40A28(uLocal_39, 1);
		}
	}
	else
	{
		Local_48 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_39, joaat("prop_chair_08"), Local_48, func_17(-1.68f));
		unk_0x6C43BF7625967266(uLocal_39, Local_48, 1, 0, 0, 1);
		unk_0x34639238667C4381(uLocal_39, func_17(-1.68f));
		unk_0x3CC3106305C40A28(uLocal_39, 1);
	}
	Local_48 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x868516D11F344453(Local_48, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_41 = unk_0xF7AA299A75E7C5A1(Local_48, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0x22349EC06EA5B08B(uLocal_41))
			{
				unk_0x7B9576B4E099FB1F(uLocal_41, 1, 0);
			}
			Local_48.f_2 = 29.603f;
			unk_0x6C43BF7625967266(uLocal_41, Local_48, 1, 0, 0, 1);
			unk_0x34639238667C4381(uLocal_41, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_41, joaat("prop_protest_sign_01"), Local_48, 23.45f);
		unk_0x6C43BF7625967266(uLocal_41, Local_48, 1, 0, 0, 1);
		unk_0x34639238667C4381(uLocal_41, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0x8AC4394F3C9173EE(iParam1, Param2, 1, 1, 0);
	unk_0x34639238667C4381(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		if (unk_0xE55530DE0D08711B(*uParam0))
		{
			unk_0xBF1AB1205B822518(*uParam0, 1, 1);
		}
		unk_0xD4C90F16EBBFE620(uParam0);
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
		unk_0x3CC3106305C40A28(uLocal_40, 0);
	}
	if (func_10(uLocal_39))
	{
		unk_0x3CC3106305C40A28(uLocal_39, 0);
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
	unk_0xB845ECB6BD2996BD(sLocal_43);
	unk_0x3D3D5DB8C3B816AF(7, 0);
	unk_0x82706E6C897B0FA1();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		if (!unk_0x2DE0B96E966FD817(*uParam0))
		{
			unk_0xDD56EF930C7A5863(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x2A6FA367FED380C2(*uParam0);
			}
			unk_0x2686393074E14730(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2C4E82CF88213975(*uParam0, 0);
			}
		}
		unk_0x6B3DDEE91652BE59(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		if (!unk_0xE44A580B551C3645(*uParam0))
		{
			unk_0xDD56EF930C7A5863(*uParam0, 0);
		}
		if (!unk_0x22349EC06EA5B08B(*uParam0))
		{
			unk_0x7B9576B4E099FB1F(*uParam0, 1, 0);
		}
		unk_0x51A89CCC8A5317D0(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	return !unk_0xE44A580B551C3645(uParam0);
}

