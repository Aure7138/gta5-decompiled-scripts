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
	unk_0xE3074BC832716971();
	func_41(&uLocal_28);
	func_32();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x92DD6B9655D31C6A())
		{
			func_30(1);
			func_29();
		}
		if (!Global_14443.f_1 == 9 && Global_14443.f_1 > 3)
		{
			func_3();
			if (Global_14443.f_1 != 8)
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
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 3) || Global_14443.f_1 == 0) || Global_14387 == 1)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_2919 == 1 || Global_14443.f_1 < 7)
	{
		Global_14430 = 1;
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
			if (Global_2452404)
			{
				unk_0xFF32B065A5AB0EDA(0);
				func_8(37, func_9(1, 1));
				Global_2452404 = 0;
			}
			else
			{
				unk_0xFF32B065A5AB0EDA(1);
				func_8(36, func_9(1, 1));
				Global_2452404 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14604)
	{
		func_6(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_5())
	{
		Global_14443.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
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
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 2;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Var0, 3, iParam1);
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
		iVar2 = unk_0x7A4693BB354F3CD3(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
			{
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
				else if (!func_10(iVar2, 0))
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
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
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_11(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_12()
{
	return Global_1312731;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_14()
{
	if (!func_20(unk_0xFB6B3EEFAB2DD12C(), 1) && func_15())
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	if (Global_1312442)
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
	
	uVar0 = Global_2522528[iParam0 /*3*/][func_17(iParam1)];
	if (unk_0xC76B1795CAE597C4(uVar0, &uVar1, -1))
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
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

bool func_18()
{
	return Global_1315217;
}

bool func_19()
{
	return Global_1315219;
}

bool func_20(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
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
	if (Global_1589933[iParam0 /*601*/] == -1)
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
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

int func_24(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_2421621[iParam0 /*358*/].f_1;
	}
	return 0;
}

int func_25(var uParam0)
{
	if (!unk_0xF44A5E894FE76438(*uParam0, 0))
	{
		return 0;
	}
	if (Global_14421)
	{
		return 0;
	}
	if (!unk_0x8AFBC859AA63D3D7())
	{
		return 0;
	}
	if (!unk_0x3CEEA45E4779F6BD(2, Global_14412))
	{
		return 0;
	}
	func_26();
	Global_14421 = 1;
	return 1;
}

void func_26()
{
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		unk_0xA93E75A5493862BD(-1, "Menu_Accept", &Global_14432, 1);
		func_27();
	}
}

void func_27()
{
	if (func_28())
	{
		unk_0xA6445F7E6BDEA467(5);
	}
}

int func_28()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x94D84BEA18624393();
	iVar1 = unk_0x730196602471217D(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2595472 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()
{
	unk_0x01DFCA3621B68C4A();
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		func_31();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xB8A73E7DA87B2968(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_31()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_32()
{
	if (!Global_14443.f_1 == 7)
	{
		Global_14443.f_1 = 7;
	}
	func_40(Global_14424, "SET_DATA_SLOT_EMPTY", unk_0xBBDA792448DB5A89(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_14())
	{
		if (Global_2452404)
		{
			func_39(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_46, 0, 0, 0, 0);
		}
		else
		{
			func_39(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_42, 0, 0, 0, 0);
		}
	}
	else
	{
		func_39(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_50, 0, 0, 0, 0);
	}
	func_40(Global_14424, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(13), -1082130432, -1082130432, -1082130432, -1082130432);
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
		func_39(Global_14424, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 0f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x4EA098C870B73AB7(uParam4, iParam3);
		func_35(iParam5, 0);
		return;
	}
	if (Global_14431)
	{
		func_39(Global_14424, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		unk_0xB8A73E7DA87B2968(uParam4, iParam3);
		func_35(iParam5, 1);
		return;
	}
	func_39(Global_14424, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xB8A73E7DA87B2968(uParam4, iParam3);
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
		unk_0xB8A73E7DA87B2968(&Global_2313, iParam0);
		return;
	}
	unk_0x4EA098C870B73AB7(&Global_2313, iParam0);
}

void func_36(char[4] cParam0)
{
	func_37(Global_14424, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_37(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	func_38(uParam2);
	if (!unk_0xC55B9553B3EDADE9(iParam3))
	{
		func_38(iParam3);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam4))
	{
		func_38(iParam4);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam5))
	{
		func_38(iParam5);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam6))
	{
		func_38(iParam6);
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_38(var uParam0)
{
	unk_0x0BBDB952BE56A9DF(uParam0);
	unk_0xCB329F559FA7DCD0();
}

void func_39(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xC55B9553B3EDADE9(cParam7))
	{
		func_38(cParam7);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam8))
	{
		func_38(iParam8);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam9))
	{
		func_38(iParam9);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam10))
	{
		func_38(iParam10);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam11))
	{
		func_38(iParam11);
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_40(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_41(var uParam0)
{
	*uParam0 = 0;
}

