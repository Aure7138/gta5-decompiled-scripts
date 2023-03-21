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
	unk_0x5341E3E598550C46();
	func_42(&uLocal_28);
	func_33();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xB3ADBAEA60664F46())
		{
			func_31(1);
			func_30();
		}
		if (!Global_14513.f_1 == 9 && Global_14513.f_1 > 3)
		{
			func_3();
			if (Global_14513.f_1 != 8)
			{
				if (func_2())
				{
					func_30();
				}
			}
		}
		if (func_1())
		{
			func_30();
		}
	}
}

int func_1()
{
	if (((Global_14513.f_1 == 1 || Global_14513.f_1 == 3) || Global_14513.f_1 == 0) || Global_14457 == 1)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_2989 == 1 || Global_14513.f_1 < 7)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_26(&uLocal_28))
	{
		if (func_15())
		{
			if (Global_2458116)
			{
				unk_0xAF94B8A3A6CD5387(0);
				func_9(1254298341, func_10(1, 1));
				Global_2458116 = 0;
			}
			else
			{
				unk_0xAF94B8A3A6CD5387(1);
				func_9(1383721237, func_10(1, 1));
				Global_2458116 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_14681)
	{
		func_6(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 16);
	}
	if (unk_0xB39808C1DCE0DCFA())
	{
		unk_0xA8B97F91CBDE376C(0);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 30);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 30);
	}
	if (!func_5())
	{
		Global_14513.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
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
			Global_14681 = 1;
			if (bParam1)
			{
				unk_0x75B4B390EE495A3B(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			unk_0xB8927E9A664047D4(Global_14450);
		}
		else
		{
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
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
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_9(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_0 = 566035618;
	Var0.f_1 = unk_0xD4E735F4B6A956AC();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0x22C775856F4633CA(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x4C9BACA8D249CB13())
		{
			unk_0x04F37AFC39D93909(1, &Var0, 4, iParam1);
		}
	}
}

int func_10(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x1483A8AE554B8B2B(iVar1);
		if (func_14(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD4E735F4B6A956AC() || iParam0)
			{
				if (bParam1)
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar1);
				}
				else if (!func_11(iVar2, 0))
				{
					unk_0x2BCFB39E86340DAA(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_11(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_12(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_12(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_13();
	}
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_13()
{
	return Global_1312736;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	if (!func_21(unk_0xD4E735F4B6A956AC(), 1) && func_16())
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	if (func_19())
	{
		return 1;
	}
	return func_17(120, -1);
}

int func_17(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_18(iParam1)];
	if (unk_0x57AA4E7564A22FCD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

bool func_19()
{
	return Global_1312845;
}

bool func_20()
{
	return Global_1312847;
}

bool func_21(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_25(iParam0) != 0;
	}
	return func_22(iParam0, bParam1);
}

int func_22(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_23(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589747[iParam0 /*790*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_23(int iParam0)
{
	return func_24(iParam0);
}

bool func_24(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

int func_25(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_26(var uParam0)
{
	if (!unk_0x05EFB6A616B6FADE(*uParam0, 0))
	{
		return 0;
	}
	if (Global_14491)
	{
		return 0;
	}
	if (!unk_0x3A83743561B4F70C())
	{
		return 0;
	}
	if (!unk_0xDF0ADAD7E584090D(2, Global_14482))
	{
		return 0;
	}
	func_27();
	Global_14491 = 1;
	return 1;
}

void func_27()
{
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xE11F00B4AC919F45(-1, "Menu_Accept", &Global_14502, 1);
		func_28();
	}
}

void func_28()
{
	if (func_29())
	{
		unk_0xD1DF8842C4808642(5);
	}
}

int func_29()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x9F302D755A846102();
	iVar1 = unk_0x1F7BAD75218F1A2C(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4268544 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_30()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_31(bool bParam0)
{
	if (bParam0)
	{
		func_32();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			unk_0x2BCFB39E86340DAA(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14513.f_1 == 1)
	{
		if (!Global_14513.f_1 == 0)
		{
			Global_14513.f_1 = 3;
		}
	}
}

void func_32()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

void func_33()
{
	if (!Global_14513.f_1 == 7)
	{
		Global_14513.f_1 = 7;
	}
	func_41(Global_14494, "SET_DATA_SLOT_EMPTY", unk_0xBBDA792448DB5A89(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_15())
	{
		if (Global_2458116)
		{
			func_40(Global_14494, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_46, 0, 0, 0, 0);
		}
		else
		{
			func_40(Global_14494, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_42, 0, 0, 0, 0);
		}
	}
	else
	{
		func_40(Global_14494, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(12), -1f, -1f, &cLocal_50, 0, 0, 0, 0);
	}
	func_41(Global_14494, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_37(&cLocal_38);
	if (func_15())
	{
		func_34(13, &cLocal_30, 1, "", 4, &cLocal_34, &uLocal_28);
	}
	else
	{
		func_34(1, "", 1, "", 4, &cLocal_34, &uLocal_28);
	}
}

void func_34(int iParam0, char[4] cParam1, int iParam2, char[4] cParam3, int iParam4, char[4] cParam5, var uParam6)
{
	func_35(2, iParam0, cParam1, 0, uParam6, -1);
	func_35(1, iParam2, cParam3, 1, uParam6, 17);
	func_35(3, iParam4, cParam5, 2, uParam6, -1);
}

void func_35(int iParam0, int iParam1, char[4] cParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_40(Global_14494, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 0f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xFA57C719261AA55D(uParam4, iParam3);
		func_36(iParam5, 0);
		return;
	}
	if (Global_14501)
	{
		func_40(Global_14494, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		unk_0x2BCFB39E86340DAA(uParam4, iParam3);
		func_36(iParam5, 1);
		return;
	}
	func_40(Global_14494, "SET_SOFT_KEYS", unk_0xBBDA792448DB5A89(iParam0), 1f, unk_0xBBDA792448DB5A89(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x2BCFB39E86340DAA(uParam4, iParam3);
	func_36(iParam5, 1);
}

void func_36(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, iParam0);
		return;
	}
	unk_0xFA57C719261AA55D(&Global_2383, iParam0);
}

void func_37(char[4] cParam0)
{
	func_38(Global_14494, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_38(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	func_39(uParam2);
	if (!unk_0x429D45A6C6520026(iParam3))
	{
		func_39(iParam3);
	}
	if (!unk_0x429D45A6C6520026(iParam4))
	{
		func_39(iParam4);
	}
	if (!unk_0x429D45A6C6520026(iParam5))
	{
		func_39(iParam5);
	}
	if (!unk_0x429D45A6C6520026(iParam6))
	{
		func_39(iParam6);
	}
	unk_0x271C1332F482646C();
}

void func_39(var uParam0)
{
	unk_0x390B339C943A8A54(uParam0);
	unk_0xD481829E3E36543B();
}

void func_40(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x429D45A6C6520026(cParam7))
	{
		func_39(cParam7);
	}
	if (!unk_0x429D45A6C6520026(iParam8))
	{
		func_39(iParam8);
	}
	if (!unk_0x429D45A6C6520026(iParam9))
	{
		func_39(iParam9);
	}
	if (!unk_0x429D45A6C6520026(iParam10))
	{
		func_39(iParam10);
	}
	if (!unk_0x429D45A6C6520026(iParam11))
	{
		func_39(iParam11);
	}
	unk_0x271C1332F482646C();
}

void func_41(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x31A9E530D137684F(uParam0, sParam1);
	unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x380580A1A1667F69(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x271C1332F482646C();
}

void func_42(var uParam0)
{
	*uParam0 = 0;
}

