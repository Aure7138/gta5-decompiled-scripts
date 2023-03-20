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
	unk_0xCFF471245AFEEDCE(0, 26, 1);
	if (func_24(unk_0x27D769C59BC9D030()))
	{
		if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) != 0)
		{
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 0, 0);
		}
	}
	if (unk_0x524AF15206846700(83))
	{
		func_21(0);
	}
	unk_0x88172B3983EC5071(sLocal_44);
	unk_0x8378AB3CED5FF44A("BARY1", 7);
	while (!unk_0x482101C9B3483958(sLocal_44) || !unk_0x911CCA58116D31F0(7))
	{
		unk_0xCFF471245AFEEDCE(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xCFF471245AFEEDCE(0, 26, 1);
	func_24(unk_0x27D769C59BC9D030());
	iLocal_46 = unk_0xA0F74982C6AAA9D4() + 13000;
	iLocal_47 = unk_0x3A5708FEE1B560A9(0, 5);
	func_18();
	while (!func_13(&uLocal_43, 49, Local_52, func_17(1.12f), 0))
	{
		unk_0xCFF471245AFEEDCE(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xCFF471245AFEEDCE(0, 26, 1);
	func_12();
	iLocal_48 = unk_0xA0F74982C6AAA9D4() + 1000;
	unk_0xCFF471245AFEEDCE(0, 26, 1);
	while (true)
	{
		func_24(unk_0x27D769C59BC9D030());
		if (unk_0xA0F74982C6AAA9D4() < iLocal_48)
		{
			unk_0xCFF471245AFEEDCE(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x27D769C59BC9D030(), Local_52, 1) > 70f)
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
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (unk_0x738E93147C5CBA85(*uParam0))
		{
			unk_0xE223D49B3EFFD3E3(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x7DC0C08D21B1080D(uParam0);
		}
		else
		{
			unk_0xB2FA212D612BB449(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(uParam0, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x27D769C59BC9D030()) && func_10(uLocal_43)) && !func_9()) && unk_0xA0F74982C6AAA9D4() > iLocal_46) && func_8(unk_0x27D769C59BC9D030(), uLocal_43, 1) < 20f) && !unk_0x9332944411A91CF6())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0xA0F74982C6AAA9D4() + unk_0x3A5708FEE1B560A9(12000, 18000));
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
	unk_0x26545538B51562AD(&Global_14578, 0);
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
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6B8EBAC1C87F6645(uParam2, 0);
			}
			else
			{
				unk_0x6B8EBAC1C87F6645(uParam2, 1);
			}
		}
		if (!unk_0xE4F7206742848BAF(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xBDBBE2B9920C24A7(uParam2, 0);
			}
			else
			{
				unk_0xBDBBE2B9920C24A7(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(uParam0, 0) };
	}
	if (!unk_0x2006A8C1BA2AFE80(uParam1, 0))
	{
		Var3 = { unk_0xA8CFDE65C45F813B(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA8CFDE65C45F813B(uParam1, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15712 != 0 || unk_0x1BF2632AED6B5924())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0xACD604A3AE9C4A92(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0xA8CA82EB31D1626F(uLocal_43, 0);
			unk_0x827194AAA60D07BD(uLocal_43, 1000, 1);
		}
		if (func_10(uLocal_41))
		{
			unk_0xA8CA82EB31D1626F(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0xA8CA82EB31D1626F(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0xE24B37600DCB21FC(uLocal_43))
		{
			unk_0xAF3355298F537BB0(uLocal_43, 1, 0);
		}
		unk_0x2F228A16D7B61C5F(uLocal_43, 1, 0, 0, 0);
		unk_0xA8ED9F72DC442242(uLocal_43, 1);
		unk_0x0705DFFD1CB9FCA6(uLocal_43, 0);
		unk_0xFFD8329ED7A8E20C(uLocal_43, 0);
		unk_0x87BC6B9F690D1A6A(uLocal_43, "POSTBARRY");
		unk_0x71065DDFF8D7744C(uLocal_43, joaat("player"));
		unk_0xF1919C21714E9FAF(uLocal_43, 0, 0);
		unk_0xA8CA82EB31D1626F(uLocal_43, 1);
		unk_0x4EEE9D9427E70F4E(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0xFBDCF3D5834B58D8(uLocal_43, func_17(1.12f));
		unk_0xA8CA82EB31D1626F(uLocal_43, 1);
		unk_0x878D12AEFBF5BAF0(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x85FD30B510E7C05E(uLocal_43, unk_0x27D769C59BC9D030(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x97C59C4E8349D15F(iVar0);
		if (unk_0x875098323FCA8FE6(iVar0))
		{
			if (unk_0xD2CFFE76B625AE55(*uParam0))
			{
				unk_0xF6ADC11BDB5ECA41(uParam0);
			}
			*uParam0 = unk_0x91D233CD0204A37F(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x1F0017B996C78B72(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x8E6EAC2226EC1711(*uParam0, 3) == 0)
				{
					unk_0x5D927D8655264D6C(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x0049DE0B34213B12(iVar0);
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
	Global_87445[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
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
	if (unk_0x62C3C410FFEFF6CF(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0xE3250749A1141EC2(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0xE24B37600DCB21FC(uLocal_41))
			{
				unk_0xAF3355298F537BB0(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x4EEE9D9427E70F4E(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0xFBDCF3D5834B58D8(uLocal_41, func_17(-2.01f));
			unk_0xA8CA82EB31D1626F(uLocal_41, 1);
		}
	}
	if (unk_0x62C3C410FFEFF6CF(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0xE3250749A1141EC2(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0xE24B37600DCB21FC(uLocal_40))
			{
				unk_0xAF3355298F537BB0(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x4EEE9D9427E70F4E(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0xFBDCF3D5834B58D8(uLocal_40, func_17(-1.68f));
			unk_0xA8CA82EB31D1626F(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_40, joaat("prop_chair_08"), Local_49, func_17(-1.68f));
		unk_0x4EEE9D9427E70F4E(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0xFBDCF3D5834B58D8(uLocal_40, func_17(-1.68f));
		unk_0xA8CA82EB31D1626F(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x62C3C410FFEFF6CF(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0xE3250749A1141EC2(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_42))
		{
			if (!unk_0xE24B37600DCB21FC(uLocal_42))
			{
				unk_0xAF3355298F537BB0(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0x4EEE9D9427E70F4E(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0xFBDCF3D5834B58D8(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0x4EEE9D9427E70F4E(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0xFBDCF3D5834B58D8(uLocal_42, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0xA8C993B9F5CB4D92(iParam1, Param2, 1, 1, 0);
	unk_0xFBDCF3D5834B58D8(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (unk_0x738E93147C5CBA85(*uParam0))
		{
			unk_0xE223D49B3EFFD3E3(*uParam0, 1, 1);
		}
		unk_0x7C0FE14555841C1E(uParam0);
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
		unk_0xA8CA82EB31D1626F(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0xA8CA82EB31D1626F(uLocal_40, 0);
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
	unk_0x651E63BA2F4975EC(sLocal_44);
	unk_0x85DF15590BBEBCCD(7, 0);
	unk_0x7C3AA2D27E16E2AD();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (!unk_0xE4F7206742848BAF(*uParam0))
		{
			unk_0xD6FF698E7BC1C003(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEC500F39EFE9D522(*uParam0);
			}
			unk_0x94DC76C688E7D222(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xA8ED9F72DC442242(*uParam0, 0);
			}
		}
		unk_0x7E8F7C1D05860F53(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(*uParam0, 0))
		{
			unk_0xD6FF698E7BC1C003(*uParam0, 0);
		}
		if (!unk_0xE24B37600DCB21FC(*uParam0))
		{
			unk_0xAF3355298F537BB0(*uParam0, 1, 0);
		}
		unk_0xF6ADC11BDB5ECA41(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0xD2CFFE76B625AE55(uParam0))
	{
		return 0;
	}
	return !unk_0x2006A8C1BA2AFE80(uParam0, 0);
}

