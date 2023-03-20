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
	unk_0x6516E26C513581FA();
	func_41(&uLocal_28);
	func_32();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xE5302F426D0500D6())
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
			if (Global_2444020)
			{
				unk_0x9F0E0E2B97566F73(0);
				func_8(37, func_9(1, 1));
				Global_2444020 = 0;
			}
			else
			{
				unk_0x9F0E0E2B97566F73(1);
				func_8(36, func_9(1, 1));
				Global_2444020 = 1;
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
		unk_0xE27C8E42A97895CF(&Global_2284, 16);
	}
	if (unk_0x1FB728BC68674B71())
	{
		unk_0xC48487554D051523(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 30);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 30);
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
				unk_0x3919EC2F8BB0A522(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x362168BE71696AF1(Global_14350);
		}
		else
		{
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
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
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 3, iParam1);
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
		iVar2 = unk_0x801C03D92F1C6755(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
				}
				else if (!func_10(iVar2, 0))
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
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
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_11(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
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
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_12()
{
	return Global_1312747;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xA27C9E8196C79D22(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
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
	if (!func_20(unk_0xE0BDAFA1A39552D6(), 1) && func_15())
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
	
	uVar0 = Global_2494881[iParam0 /*5*/][func_17(iParam1)];
	if (unk_0x4E4F28F5B7A7C06C(uVar0, &uVar1, -1))
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
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

bool func_18()
{
	return Global_1315901;
}

bool func_19()
{
	return Global_1315903;
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
	if (Global_1587816[iParam0 /*444*/] == -1)
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
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

int func_24(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_2418529[iParam0 /*313*/].f_1;
	}
	return 0;
}

int func_25(var uParam0)
{
	if (!unk_0x7DA173D4FD42F36B(*uParam0, 0))
	{
		return 0;
	}
	if (Global_14391)
	{
		return 0;
	}
	if (!unk_0xDF916BCF4D39E8C2())
	{
		return 0;
	}
	if (!unk_0xD471C64C0898A7BF(2, Global_14382))
	{
		return 0;
	}
	func_26();
	Global_14391 = 1;
	return 1;
}

void func_26()
{
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		unk_0x962E604CCA53388F(-1, "Menu_Accept", &Global_14402, 1);
		func_27();
	}
}

void func_27()
{
	if (func_28())
	{
		unk_0x06C10E0D35194B7A(5);
	}
}

int func_28()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x132F78245A5DBB0A();
	iVar1 = unk_0x20EC647BB13B981D(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2568269 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()
{
	unk_0xF5DF8F3392CDD07B();
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		func_31();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0xE27C8E42A97895CF(&Global_2284, 16);
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
		if (Global_2444020)
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
		unk_0x99BCB15F954AF579(uParam4, iParam3);
		func_35(iParam5, 0);
		return;
	}
	if (Global_14401)
	{
		func_39(Global_14394, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		unk_0xE27C8E42A97895CF(uParam4, iParam3);
		func_35(iParam5, 1);
		return;
	}
	func_39(Global_14394, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE27C8E42A97895CF(uParam4, iParam3);
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
		unk_0xE27C8E42A97895CF(&Global_2283, iParam0);
		return;
	}
	unk_0x99BCB15F954AF579(&Global_2283, iParam0);
}

void func_36(char[4] cParam0)
{
	func_37(Global_14394, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_37(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	func_38(uParam2);
	if (!unk_0x226FA58470A21AEF(iParam3))
	{
		func_38(iParam3);
	}
	if (!unk_0x226FA58470A21AEF(iParam4))
	{
		func_38(iParam4);
	}
	if (!unk_0x226FA58470A21AEF(iParam5))
	{
		func_38(iParam5);
	}
	if (!unk_0x226FA58470A21AEF(iParam6))
	{
		func_38(iParam6);
	}
	unk_0xE97F1B22C5E8989F();
}

void func_38(var uParam0)
{
	unk_0x7291E2F821FCFC04(uParam0);
	unk_0xD6360E18957BCDD3();
}

void func_39(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x226FA58470A21AEF(cParam7))
	{
		func_38(cParam7);
	}
	if (!unk_0x226FA58470A21AEF(iParam8))
	{
		func_38(iParam8);
	}
	if (!unk_0x226FA58470A21AEF(iParam9))
	{
		func_38(iParam9);
	}
	if (!unk_0x226FA58470A21AEF(iParam10))
	{
		func_38(iParam10);
	}
	if (!unk_0x226FA58470A21AEF(iParam11))
	{
		func_38(iParam11);
	}
	unk_0xE97F1B22C5E8989F();
}

void func_40(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE97F1B22C5E8989F();
}

void func_41(var uParam0)
{
	*uParam0 = 0;
}

