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
	unk_0x2BE3C7FA4FCCA784(0, 26, 1);
	if (func_24(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) != 0)
		{
			unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
		}
	}
	if (unk_0x24862A9CDC8F8874(83))
	{
		func_21(0);
	}
	unk_0xC0E8B67A4385D37D(sLocal_44);
	unk_0xF3AC452C34BF0E13("BARY1", 7);
	while (!unk_0xF9B86DC1728F1339(sLocal_44) || !unk_0xF0DCEBB4ADA5D981(7))
	{
		unk_0x2BE3C7FA4FCCA784(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x2BE3C7FA4FCCA784(0, 26, 1);
	func_24(unk_0xC8B93D94F8954288());
	iLocal_46 = unk_0x693EBB4F13506457() + 13000;
	iLocal_47 = unk_0x531444754C426278(0, 5);
	func_18();
	while (!func_13(&uLocal_43, 49, Local_52, func_17(1.12f), 0))
	{
		unk_0x2BE3C7FA4FCCA784(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x2BE3C7FA4FCCA784(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x693EBB4F13506457() + 1000;
	unk_0x2BE3C7FA4FCCA784(0, 26, 1);
	while (true)
	{
		func_24(unk_0xC8B93D94F8954288());
		if (unk_0x693EBB4F13506457() < iLocal_48)
		{
			unk_0x2BE3C7FA4FCCA784(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0xC8B93D94F8954288(), Local_52, 1) > 70f)
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
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (unk_0xE33A9405F8300B78(*uParam0))
		{
			unk_0xB81176DFD2611E8B(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xC2BB205CCEB68102(uParam0);
		}
		else
		{
			unk_0xFA8BA151FBE4A15B(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB6900B8CB0ABBD2B(uParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(uParam0, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0xC8B93D94F8954288()) && func_10(uLocal_43)) && !func_9()) && unk_0x693EBB4F13506457() > iLocal_46) && func_8(unk_0xC8B93D94F8954288(), uLocal_43, 1) < 20f) && !unk_0x19959F2595D26484())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(12000, 18000));
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
	unk_0x59A0729D503ED758(&Global_14578, 0);
	Global_15715 = iParam3;
	StringCopy(&Global_15702, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
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
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(uParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(uParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(uParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB6900B8CB0ABBD2B(uParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(uParam0, 0) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(uParam1))
	{
		Var3 = { unk_0x44C17CCB85A88A1F(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x44C17CCB85A88A1F(uParam1, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0xDF87568D121A99AC(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0xB7A2078CD1C9A82F(uLocal_43, 0);
			unk_0xB5AD834B3AF18B5D(uLocal_43, 1000, 1);
		}
		if (func_10(uLocal_41))
		{
			unk_0xB7A2078CD1C9A82F(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0xB7A2078CD1C9A82F(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0xD28A89C669EAD2E4(uLocal_43))
		{
			unk_0xFD816D0E738EB817(uLocal_43, 1, 0);
		}
		unk_0x9982920999FF4733(uLocal_43, 1, 0, 0, 0);
		unk_0xAAD662D7E0D59F4C(uLocal_43, 1);
		unk_0x90115CB23FA58DD6(uLocal_43, 0);
		unk_0x58F516BB5E324590(uLocal_43, 0);
		unk_0x64B2BC184771BDA3(uLocal_43, "POSTBARRY");
		unk_0xCBD60E398042F554(uLocal_43, joaat("player"));
		unk_0x8FB4254399424391(uLocal_43, 0, 0);
		unk_0xB7A2078CD1C9A82F(uLocal_43, 1);
		unk_0xC76B5C68AB6DC7DF(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0x765E3FA65D011F03(uLocal_43, func_17(1.12f));
		unk_0xB7A2078CD1C9A82F(uLocal_43, 1);
		unk_0x5323F488E6A1B660(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xE48D9147BC1F4CD7(uLocal_43, unk_0xC8B93D94F8954288(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x7567CEA8E6B5340B(iVar0);
		if (unk_0x0845149A26DABBA5(iVar0))
		{
			if (unk_0x95CCECA3948CFE7B(*uParam0))
			{
				unk_0x26B3B761603F5232(uParam0);
			}
			*uParam0 = unk_0x71DD988C1B903F5D(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x9AA5A07C66C84468(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x3A59BCC40A12FD28(*uParam0, 3) == 0)
				{
					unk_0x8C245572EDB27776(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x4BBD72565A0AF033(iVar0);
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
	Global_87273[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
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
	if (unk_0x32AADF258A6B79F2(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0xB999434FB1CECA11(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0xD28A89C669EAD2E4(uLocal_41))
			{
				unk_0xFD816D0E738EB817(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xC76B5C68AB6DC7DF(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(uLocal_41, func_17(-2.01f));
			unk_0xB7A2078CD1C9A82F(uLocal_41, 1);
		}
	}
	if (unk_0x32AADF258A6B79F2(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0xB999434FB1CECA11(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0xD28A89C669EAD2E4(uLocal_40))
			{
				unk_0xFD816D0E738EB817(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xC76B5C68AB6DC7DF(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(uLocal_40, func_17(-1.68f));
			unk_0xB7A2078CD1C9A82F(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_40, joaat("prop_chair_08"), Local_49, func_17(-1.68f));
		unk_0xC76B5C68AB6DC7DF(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0x765E3FA65D011F03(uLocal_40, func_17(-1.68f));
		unk_0xB7A2078CD1C9A82F(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x32AADF258A6B79F2(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0xB999434FB1CECA11(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_42))
		{
			if (!unk_0xD28A89C669EAD2E4(uLocal_42))
			{
				unk_0xFD816D0E738EB817(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0xC76B5C68AB6DC7DF(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0xC76B5C68AB6DC7DF(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0x765E3FA65D011F03(uLocal_42, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0x7C62BC1EB194D985(iParam1, Param2, 1, 1, 0);
	unk_0x765E3FA65D011F03(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (unk_0xE33A9405F8300B78(*uParam0))
		{
			unk_0xB81176DFD2611E8B(*uParam0, 1, 1);
		}
		unk_0xA278ECBE30D8AE4F(uParam0);
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
		unk_0xB7A2078CD1C9A82F(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0xB7A2078CD1C9A82F(uLocal_40, 0);
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
	unk_0x3ECF1E41E6ED71D8(sLocal_44);
	unk_0x48591CDE727D1F6A(7, 0);
	unk_0xA4E0D8FD51F2A6F7();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(*uParam0))
		{
			unk_0x05BE583DF8C6A617(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEC466B3D55749458(*uParam0);
			}
			unk_0xF1A02DDEC7E15D6E(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAD662D7E0D59F4C(*uParam0, 0);
			}
		}
		unk_0x459A6F82E024C891(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(*uParam0))
		{
			unk_0x05BE583DF8C6A617(*uParam0, 0);
		}
		if (!unk_0xD28A89C669EAD2E4(*uParam0))
		{
			unk_0xFD816D0E738EB817(*uParam0, 1, 0);
		}
		unk_0x26B3B761603F5232(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0x95CCECA3948CFE7B(uParam0))
	{
		return 0;
	}
	return !unk_0xB6900B8CB0ABBD2B(uParam0);
}

