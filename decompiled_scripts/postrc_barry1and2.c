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
	unk_0x4E6996123FABDB93(0, 26, 1);
	if (func_24(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) != 0)
		{
			unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
		}
	}
	if (unk_0x78BF2001491914AC(83))
	{
		func_21(0);
	}
	unk_0xA7C81DED990D3418(sLocal_44);
	unk_0xC9173FA08E7D8227("BARY1", 7);
	while (!unk_0x45834D6C20FFF689(sLocal_44) || !unk_0x44FB58EFDA8731B7(7))
	{
		unk_0x4E6996123FABDB93(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4E6996123FABDB93(0, 26, 1);
	func_24(unk_0x2A5EB8B0FE590B91());
	iLocal_46 = unk_0x3732B96D7A1859B4() + 13000;
	iLocal_47 = unk_0x895FB9FE885E36ED(0, 5);
	func_18();
	while (!func_13(&uLocal_43, 49, Local_52, func_17(1.12f), 0))
	{
		unk_0x4E6996123FABDB93(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4E6996123FABDB93(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x3732B96D7A1859B4() + 1000;
	unk_0x4E6996123FABDB93(0, 26, 1);
	while (true)
	{
		func_24(unk_0x2A5EB8B0FE590B91());
		if (unk_0x3732B96D7A1859B4() < iLocal_48)
		{
			unk_0x4E6996123FABDB93(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x2A5EB8B0FE590B91(), Local_52, 1) > 70f)
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
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		if (unk_0xA6A04A00C612EAA5(*uParam0))
		{
			unk_0xA806066ECDF61E23(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x0EE36F9D946F47F2(uParam0);
		}
		else
		{
			unk_0x2D2D03CEC7AC060A(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(uParam0, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x2A5EB8B0FE590B91()) && func_10(uLocal_43)) && !func_9()) && unk_0x3732B96D7A1859B4() > iLocal_46) && func_8(unk_0x2A5EB8B0FE590B91(), uLocal_43, 1) < 20f) && !unk_0xB2F8D1B7C533483C())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x3732B96D7A1859B4() + unk_0x895FB9FE885E36ED(12000, 18000));
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
	unk_0xF6082E2ADA1C795B(&Global_14611, 0);
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
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(uParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(uParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(uParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(uParam0, 0) };
	}
	if (!unk_0xA9A04898798AE9E6(uParam1, 0))
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(uParam1, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0xA9A04898798AE9E6(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x4A40D388873A536C(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0xA32D9C84C1A93920(uLocal_43, 0);
			unk_0x49943B2A6DD40B69(uLocal_43, 1000, 1);
		}
		if (func_10(uLocal_41))
		{
			unk_0xA32D9C84C1A93920(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0xA32D9C84C1A93920(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0x03322C3918511AA0(uLocal_43))
		{
			unk_0x216B434C1A609F5B(uLocal_43, 1, 0);
		}
		unk_0xDEC831C0189DE207(uLocal_43, 1, 0, 0, 0);
		unk_0x4C47904AE69D7393(uLocal_43, 1);
		unk_0x88D9DF53359130B9(uLocal_43, 0);
		unk_0x2725C3746060DA66(uLocal_43, 0);
		unk_0x15A19BB3A39023C8(uLocal_43, "POSTBARRY");
		unk_0x3C030E241A3543D2(uLocal_43, joaat("player"));
		unk_0x81642E3BC0111BF2(uLocal_43, 0, 0);
		unk_0xA32D9C84C1A93920(uLocal_43, 1);
		unk_0x8E979F037EACE55A(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0x2681BA3707AF6DA7(uLocal_43, func_17(1.12f));
		unk_0xA32D9C84C1A93920(uLocal_43, 1);
		unk_0xF1C3427BFED79E6B(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xEDF42871EAD55C9B(uLocal_43, unk_0x2A5EB8B0FE590B91(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x0F39DF6675B2333E(iVar0);
		if (unk_0xA1FC9D7AEA164881(iVar0))
		{
			if (unk_0x2137828D03306CAF(*uParam0))
			{
				unk_0x27BAC9B39BCC6522(uParam0);
			}
			*uParam0 = unk_0xD00B79C0E206E082(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x1EC40B161E6A203A(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x29D988205B5459BD(*uParam0, 3) == 0)
				{
					unk_0x6CA29A70250F194F(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xFD213087BC4CC3B3(iVar0);
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
	Global_87756[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
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
	if (unk_0xB6BD4D7F41395E57(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0x96FF6B9A3E05D35F(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0x03322C3918511AA0(uLocal_41))
			{
				unk_0x216B434C1A609F5B(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x8E979F037EACE55A(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0x2681BA3707AF6DA7(uLocal_41, func_17(-2.01f));
			unk_0xA32D9C84C1A93920(uLocal_41, 1);
		}
	}
	if (unk_0xB6BD4D7F41395E57(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0x96FF6B9A3E05D35F(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0x03322C3918511AA0(uLocal_40))
			{
				unk_0x216B434C1A609F5B(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x8E979F037EACE55A(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0x2681BA3707AF6DA7(uLocal_40, func_17(-1.68f));
			unk_0xA32D9C84C1A93920(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_40, joaat("prop_chair_08"), Local_49, func_17(-1.68f));
		unk_0x8E979F037EACE55A(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0x2681BA3707AF6DA7(uLocal_40, func_17(-1.68f));
		unk_0xA32D9C84C1A93920(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0xB6BD4D7F41395E57(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0x96FF6B9A3E05D35F(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_42))
		{
			if (!unk_0x03322C3918511AA0(uLocal_42))
			{
				unk_0x216B434C1A609F5B(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0x8E979F037EACE55A(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0x2681BA3707AF6DA7(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0x8E979F037EACE55A(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0x2681BA3707AF6DA7(uLocal_42, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0xA3618B5F6184DAD2(iParam1, Param2, 1, 1, 0);
	unk_0x2681BA3707AF6DA7(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		if (unk_0xA6A04A00C612EAA5(*uParam0))
		{
			unk_0xA806066ECDF61E23(*uParam0, 1, 1);
		}
		unk_0xBE35B7268C680A20(uParam0);
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
		unk_0xA32D9C84C1A93920(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0xA32D9C84C1A93920(uLocal_40, 0);
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
	unk_0x15167ADA0B7D44AE(sLocal_44);
	unk_0xEF7A86AB02E46379(7, 0);
	unk_0xA232817B0B36F2E5();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		if (!unk_0x769F0F6444C1ABE0(*uParam0))
		{
			unk_0xD44F61F61676BA14(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEE46A5BD4C4846BF(*uParam0);
			}
			unk_0x015B50BC21C88C8C(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4C47904AE69D7393(*uParam0, 0);
			}
		}
		unk_0x6C559FCFFD2365CB(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		if (!unk_0xA9A04898798AE9E6(*uParam0, 0))
		{
			unk_0xD44F61F61676BA14(*uParam0, 0);
		}
		if (!unk_0x03322C3918511AA0(*uParam0))
		{
			unk_0x216B434C1A609F5B(*uParam0, 1, 0);
		}
		unk_0x27BAC9B39BCC6522(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0x2137828D03306CAF(uParam0))
	{
		return 0;
	}
	return !unk_0xA9A04898798AE9E6(uParam0, 0);
}

