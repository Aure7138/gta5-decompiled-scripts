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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	char cLocal_30[16] = "";
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	char cLocal_34[16] = "";
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	char cLocal_38[16] = "";
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[16] = "";
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[16] = "";
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	char cLocal_50[16] = "";
	var uLocal_52 = 0;
	var uLocal_53 = 0;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	StringCopy(&cLocal_30, "CELL_212", 16);
	StringCopy(&cLocal_34, "CELL_213", 16);
	StringCopy(&cLocal_38, "CELL_39", 16);
	StringCopy(&cLocal_42, "CELL_MP_300", 16);
	StringCopy(&cLocal_46, "CELL_MP_301", 16);
	StringCopy(&cLocal_50, "CELL_MP_302", 16);
	unk_0x69BC3CC82D2BC993();
	func_41(&uLocal_28);
	func_32();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x511A80B99C8ADD82())
		{
			func_30(1);
			func_29();
		}
		if (!Global_14413.f_1 == 9 && Global_14413.f_1 > 3)
		{
			func_3();
			if (Global_14413.f_1 != 8)
			{
				if (func_2())
				{
					func_29();
				}
			}
		}
		if (func_1())
		{
			func_29();
		}
	}
}

int func_1()
{
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_25(&uLocal_28))
	{
		if (func_14())
		{
			if (Global_2440902)
			{
				unk_0x0616AA0E639CD77C(0);
				func_8(37, func_9(1, 1));
				Global_2440902 = 0;
			}
			else
			{
				unk_0x0616AA0E639CD77C(1);
				func_8(36, func_9(1, 1));
				Global_2440902 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14571)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14413.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)
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

void func_8(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 2;
	Var0.f_1 = unk_0x8ACD527A7E574590();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xF4AB8F36FCC9BE56(1, &Var0, 3, iParam1);
	}
}

int func_9(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x0BBA31C395EE0D30(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x8ACD527A7E574590() || iParam0)
			{
				if (bParam1)
				{
					unk_0x573691DB812DC8AA(&uVar0, iVar1);
				}
				else if (!func_10(iVar2, 0))
				{
					unk_0x573691DB812DC8AA(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312746;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0x860CE5C791DC28F5(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x6DF20EAB8093DF19(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_14()
{
	if (!func_20(unk_0x8ACD527A7E574590(), 1) && func_15())
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_19())
	{
		return 1;
	}
	if (func_18())
	{
		return 1;
	}
	return func_16(120, -1);
}

int func_16(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486179[iParam0 /*5*/][func_17(iParam1)];
	if (unk_0x89E37638462C1F4C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
		if (iVar1 > -1)
		{
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
		}
	}
	return iVar0;
}

bool func_18()
{
	return Global_1315898;
}

bool func_19()
{
	return Global_1315900;
}

bool func_20(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_24(iParam0) != 0;
	}
	return func_21(iParam0, bParam1);
}

int func_21(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_22(iParam0))
		{
			return 1;
		}
	}
	if (Global_1586488[iParam0 /*408*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_22(int iParam0)
{
	return func_23(iParam0);
}

bool func_23(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_13.f_1, 0);
}

int func_24(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_2416794[iParam0 /*303*/].f_1;
	}
	return 0;
}

int func_25(var uParam0)
{
	if (!unk_0xB56FEBC510E7E9DE(*uParam0, 0))
	{
		return 0;
	}
	if (Global_14391)
	{
		return 0;
	}
	if (!unk_0x398F615441F52A47())
	{
		return 0;
	}
	if (!unk_0x618071F6827C232E(2, Global_14382))
	{
		return 0;
	}
	func_26();
	Global_14391 = 1;
	return 1;
}

void func_26()
{
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		unk_0xBBEB613A917D7EE8(-1, "Menu_Accept", &Global_14402, 1);
		func_27();
	}
}

void func_27()
{
	if (func_28())
	{
		unk_0x7FAEFC2A1124B9C2(5);
	}
}

int func_28()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69317)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x1B5ACB4894956DC7();
	iVar1 = unk_0x7DF7F572759C0E1B(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2558965 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()
{
	unk_0x2F798BA2098FDADE();
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		func_31();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x573691DB812DC8AA(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_31()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_32()
{
	if (!Global_14413.f_1 == 7)
	{
		Global_14413.f_1 = 7;
	}
	func_40(Global_14394, "SET_DATA_SLOT_EMPTY", unk_0xBBDA792448DB5A89(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_14())
	{
		if (Global_2440902)
		{
			func_39(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_46, 0, 0, 0, 0);
		}
		else
		{
			func_39(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_42, 0, 0, 0, 0);
		}
	}
	else
	{
		func_39(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_50, 0, 0, 0, 0);
	}
	func_40(Global_14394, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_36(&cLocal_38);
	if (func_14())
	{
		func_33(13, &cLocal_30, 1, "", 4, &cLocal_34, &uLocal_28);
	}
	else
	{
		func_33(1, "", 1, "", 4, &cLocal_34, &uLocal_28);
	}
}

void func_33(int iParam0, char[4] cParam1, int iParam2, char[4] cParam3, int iParam4, char[4] cParam5, var uParam6)
{
	func_34(2, iParam0, cParam1, 0, uParam6, -1);
	func_34(1, iParam2, cParam3, 1, uParam6, 17);
	func_34(3, iParam4, cParam5, 2, uParam6, -1);
}

void func_34(int iParam0, int iParam1, char[4] cParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_39(Global_14394, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 0f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xA5F70A8B83BDFA49(uParam4, iParam3);
		func_35(iParam5, 0);
		return;
	}
	if (Global_14401)
	{
		func_39(Global_14394, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		unk_0x573691DB812DC8AA(uParam4, iParam3);
		func_35(iParam5, 1);
		return;
	}
	func_39(Global_14394, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x573691DB812DC8AA(uParam4, iParam3);
	func_35(iParam5, 1);
}

void func_35(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, iParam0);
		return;
	}
	unk_0xA5F70A8B83BDFA49(&Global_2283, iParam0);
}

void func_36(char[4] cParam0)
{
	func_37(Global_14394, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_37(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x758017413321C628(uParam0, sParam1);
	func_38(uParam2);
	if (!unk_0x0AAC2160036975D9(iParam3))
	{
		func_38(iParam3);
	}
	if (!unk_0x0AAC2160036975D9(iParam4))
	{
		func_38(iParam4);
	}
	if (!unk_0x0AAC2160036975D9(iParam5))
	{
		func_38(iParam5);
	}
	if (!unk_0x0AAC2160036975D9(iParam6))
	{
		func_38(iParam6);
	}
	unk_0x098CA28C04E62E55();
}

void func_38(var uParam0)
{
	unk_0xC976485333F81CE8(uParam0);
	unk_0xC8C5D5B9E15EB2E2();
}

void func_39(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x758017413321C628(uParam0, sParam1);
	unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x0AAC2160036975D9(cParam7))
	{
		func_38(cParam7);
	}
	if (!unk_0x0AAC2160036975D9(iParam8))
	{
		func_38(iParam8);
	}
	if (!unk_0x0AAC2160036975D9(iParam9))
	{
		func_38(iParam9);
	}
	if (!unk_0x0AAC2160036975D9(iParam10))
	{
		func_38(iParam10);
	}
	if (!unk_0x0AAC2160036975D9(iParam11))
	{
		func_38(iParam11);
	}
	unk_0x098CA28C04E62E55();
}

void func_40(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x758017413321C628(uParam0, sParam1);
	unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D57F6B69CCB6D95(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x098CA28C04E62E55();
}

void func_41(var uParam0)
{
	*uParam0 = 0;
}

