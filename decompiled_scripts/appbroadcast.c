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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	char cLocal_29[16] = "";
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	char cLocal_33[16] = "";
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	char cLocal_37[16] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	char cLocal_41[16] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	char cLocal_45[16] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	char cLocal_49[16] = "";
	var uLocal_51 = 0;
	var uLocal_52 = 0;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	StringCopy(&cLocal_29, "CELL_212", 16);
	StringCopy(&cLocal_33, "CELL_213", 16);
	StringCopy(&cLocal_37, "CELL_39", 16);
	StringCopy(&cLocal_41, "CELL_MP_300", 16);
	StringCopy(&cLocal_45, "CELL_MP_301", 16);
	StringCopy(&cLocal_49, "CELL_MP_302", 16);
	unk_0x1ED2FDBD02899869();
	func_41(&uLocal_27);
	func_32();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xB659F73755907B0D())
		{
			func_30(1);
			func_29();
		}
		if (!Global_14393.f_1 == 9 && Global_14393.f_1 > 3)
		{
			func_3();
			if (Global_14393.f_1 != 8)
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
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_25(&uLocal_27))
	{
		if (func_14())
		{
			if (Global_2435058)
			{
				unk_0x0126EC66117B68D7(0);
				func_8(37, func_9(1, 1));
				Global_2435058 = 0;
			}
			else
			{
				unk_0x0126EC66117B68D7(1);
				func_8(36, func_9(1, 1));
				Global_2435058 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14551)
	{
		func_6(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_5())
	{
		Global_14393.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
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
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 2;
	Var0.f_1 = unk_0xCFC72E446B0B3AD7();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Var0, 3, iParam1);
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
		iVar2 = unk_0x7225A5A7A532BC7C(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xCFC72E446B0B3AD7() || iParam0)
			{
				if (bParam1)
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar1);
				}
				else if (!func_10(iVar2, 0))
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar1);
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
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_11(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
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
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_12()
{
	return Global_1312737;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xCB29E1C3D086FBAE(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
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
	if (!func_20(unk_0xCFC72E446B0B3AD7(), 1) && func_15())
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	if (Global_1312448)
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
	
	uVar0 = Global_2474108[iParam0 /*6*/][func_17(iParam1)];
	if (unk_0xF02F9C69623F2904(uVar0, &uVar1, -1))
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
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

bool func_18()
{
	return Global_1315888;
}

bool func_19()
{
	return Global_1315890;
}

bool func_20(int iParam0, bool bParam1)
{
	if (Global_1312449 != 0)
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
	if (Global_1582869[iParam0 /*332*/] == -1)
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
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0);
}

int func_24(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_2414035[iParam0 /*254*/].f_1;
	}
	return 0;
}

int func_25(var uParam0)
{
	if (!unk_0x94E72F17611BCD3C(*uParam0, 0))
	{
		return 0;
	}
	if (Global_14371)
	{
		return 0;
	}
	if (!unk_0x9685D9855970A029())
	{
		return 0;
	}
	if (!unk_0x205C5BF7277043DF(2, Global_14362))
	{
		return 0;
	}
	func_26();
	Global_14371 = 1;
	return 1;
}

void func_26()
{
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0x86F4B3D6FF8F65DE(-1, "Menu_Accept", &Global_14382, 1);
		func_27();
	}
}

void func_27()
{
	if (func_28())
	{
		unk_0x12E8F892A05375AB(5);
	}
}

int func_28()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xB14E47EA29D7193F();
	iVar1 = unk_0xB49A1BEB8771FD4C(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2545741 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()
{
	unk_0xE60DEFFB2A853900();
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		func_31();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_31()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_32()
{
	if (!Global_14393.f_1 == 7)
	{
		Global_14393.f_1 = 7;
	}
	func_40(Global_14374, "SET_DATA_SLOT_EMPTY", unk_0xBBDA792448DB5A89(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_14())
	{
		if (Global_2435058)
		{
			func_39(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_45, 0, 0, 0, 0);
		}
		else
		{
			func_39(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_41, 0, 0, 0, 0);
		}
	}
	else
	{
		func_39(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_49, 0, 0, 0, 0);
	}
	func_40(Global_14374, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_36(&cLocal_37);
	if (func_14())
	{
		func_33(13, &cLocal_29, 1, "", 4, &cLocal_33, &uLocal_27);
	}
	else
	{
		func_33(1, "", 1, "", 4, &cLocal_33, &uLocal_27);
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
		func_39(Global_14374, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 0f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xF76EE56D3E7DAF1B(uParam4, iParam3);
		func_35(iParam5, 0);
		return;
	}
	if (Global_14381)
	{
		func_39(Global_14374, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		unk_0xEDB9A377CD8B7F03(uParam4, iParam3);
		func_35(iParam5, 1);
		return;
	}
	func_39(Global_14374, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xEDB9A377CD8B7F03(uParam4, iParam3);
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
		unk_0xEDB9A377CD8B7F03(&Global_2263, iParam0);
		return;
	}
	unk_0xF76EE56D3E7DAF1B(&Global_2263, iParam0);
}

void func_36(char[4] cParam0)
{
	func_37(Global_14374, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_37(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	func_38(uParam2);
	if (!unk_0x9E9AFDBF482248F6(iParam3))
	{
		func_38(iParam3);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam4))
	{
		func_38(iParam4);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam5))
	{
		func_38(iParam5);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam6))
	{
		func_38(iParam6);
	}
	unk_0x7E86CE5F658823DB();
}

void func_38(var uParam0)
{
	unk_0x0F79C8080022554A(uParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_39(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9E9AFDBF482248F6(cParam7))
	{
		func_38(cParam7);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam8))
	{
		func_38(iParam8);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam9))
	{
		func_38(iParam9);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam10))
	{
		func_38(iParam10);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam11))
	{
		func_38(iParam11);
	}
	unk_0x7E86CE5F658823DB();
}

void func_40(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E86CE5F658823DB();
}

void func_41(var uParam0)
{
	*uParam0 = 0;
}

