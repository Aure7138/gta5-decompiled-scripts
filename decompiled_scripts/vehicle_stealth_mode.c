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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_87(&uLocal_46))
	{
		while (!func_76())
		{
			func_64(&uLocal_46);
			if (func_54(&uLocal_46))
			{
			}
			else
			{
				func_14(&uLocal_46);
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	func_13();
	if (func_10())
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (func_8(&uLocal_46))
	{
		func_4(&uLocal_46);
	}
	unk_0xC0EBC1452FCAB15C(5);
	func_3();
	unk_0xEAF83F0738D84014(unk_0x9EB17624F44A8DA4(), 0);
	func_2();
}

void func_2()
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_3()
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_678), 3);
}

void func_4(var uParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(uParam0->f_6), 5);
}

void func_5(var uParam0, int iParam1)
{
	unk_0x0EE72DB1CD8A3B86(uParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!unk_0x8F05914DD835E69F(Global_2415606.f_978) || Global_2415606.f_978 == unk_0xBBA15366508D1BDE()) || bParam2)
	{
		if (bParam0)
		{
			Global_2415606.f_978 = unk_0xBBA15366508D1BDE();
			Global_2415606.f_979 = unk_0xD1952A425B78FFC0();
		}
		else
		{
			Global_2415606.f_978 = -1;
		}
		Global_2415606.f_981 = iParam1;
		Global_2415606.f_983 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!unk_0x8F05914DD835E69F(Global_2415606.f_994) || Global_2415606.f_994 == unk_0xBBA15366508D1BDE()) || bParam1)
	{
		if (bParam0)
		{
			Global_2415606.f_994 = unk_0xBBA15366508D1BDE();
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_77.f_2), 23);
		}
		else
		{
			Global_2415606.f_994 = -1;
			unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_77.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(var uParam0)
{
	return func_9(&(uParam0->f_6), 5);
}

bool func_9(var uParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(*uParam0, iParam1);
}

bool func_10()
{
	return ((((func_12("STEALTH_ON") || func_12("STEALTH_OFF")) || func_12(func_11())) || func_12("STEALTH_ON_P")) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

var func_12(char* sParam0)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_13()
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_678), 1);
}

void func_14(var uParam0)
{
	func_51(uParam0);
	func_50(uParam0);
	if (func_49(uParam0))
	{
		if (((func_48(uParam0) && !func_47(uParam0)) && unk_0xA0BF73C5030D3F60(uParam0->f_1)) && !func_46())
		{
			func_45(uParam0, 1, 0);
			func_44(uParam0);
		}
		else if (func_9(&(uParam0->f_6), 6) && func_47(uParam0))
		{
			if (unk_0xA0BF73C5030D3F60(uParam0->f_1) && !func_46())
			{
				func_45(uParam0, 0, 0);
				func_5(&(uParam0->f_6), 6);
				func_5(&(uParam0->f_6), 2);
			}
		}
	}
	if (func_43(uParam0))
	{
		unk_0xEAF83F0738D84014(unk_0x9EB17624F44A8DA4(), 1);
		func_42();
		func_41(uParam0);
	}
	else if (func_40(uParam0))
	{
		unk_0xEAF83F0738D84014(unk_0x9EB17624F44A8DA4(), 0);
		func_13();
		func_41(uParam0);
		func_39(uParam0, 5);
	}
	if (func_47(uParam0) && !func_48(uParam0))
	{
		func_37(uParam0);
		func_36();
		func_39(uParam0, 2);
		if (func_33(uParam0))
		{
			func_32();
		}
	}
	else
	{
		func_15(uParam0);
	}
	func_3();
	unk_0x0EE72DB1CD8A3B86(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_678), 4);
}

void func_15(var uParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 2)) && !unk_0xF491DD47B88AA84E()) && func_31(uParam0)) && !func_30(0)) && !func_29()) && func_27()) && unk_0x6ADD12BF4D6D2587(unk_0x317536BCEA8FA6B0(uParam0->f_1, -1, 0)))
	{
		func_21(uParam0, 1);
		func_20(&(uParam0->f_6), 3);
		iVar0 = func_19(uParam0->f_6.f_2, 3333, 10000);
		uParam0->f_6.f_2 = 0;
		func_17(func_18(uParam0), iVar0);
		func_16(uParam0);
		func_20(&(uParam0->f_6), 0);
	}
}

void func_16(var uParam0)
{
	func_20(&(uParam0->f_6), 2);
}

void func_17(char* sParam0, int iParam1)
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

char* func_18(var uParam0)
{
	if (func_49(uParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_19(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_20(var uParam0, int iParam1)
{
	unk_0x872F1C1F8587CCC7(uParam0, iParam1);
}

void func_21(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_49(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				iVar0 = (func_24(19004, -1, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_22(19004, iVar0, -1, 1);
				}
				break;
			}
	}
}

var func_22(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xFD227BDFDE38A9C4(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_23()
{
	return Global_1312736;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	iVar1 = func_26(iParam0, iParam1);
	uVar2 = func_25(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xB1AF044156BFE093(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	return iVar0;
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

bool func_27()
{
	return (!unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_678, 4) && !func_28());
}

bool func_28()
{
	return ((Global_4456448.f_50256 == 6 || Global_4456448.f_50256 == 7) && Global_4456448.f_2 == 20);
}

bool func_29()
{
	return Global_68215;
}

int func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
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
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_31(var uParam0)
{
	if (func_49(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				return func_24(19004, -1, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_32()
{
	if (!unk_0xF491DD47B88AA84E())
	{
		func_17("STEALTH_WARN", 3000);
	}
}

int func_33(var uParam0)
{
	int iVar0;
	
	if (func_30(0) || func_29())
	{
		return 0;
	}
	iVar0 = func_34(uParam0);
	switch (iVar0)
	{
		case 1:
			if ((unk_0x4CD14B4B1E8BD8BA(0, 114) || unk_0x4CD14B4B1E8BD8BA(0, 99)) || unk_0x4CD14B4B1E8BD8BA(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0x4CD14B4B1E8BD8BA(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x4CD14B4B1E8BD8BA(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x4CD14B4B1E8BD8BA(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_34(var uParam0)
{
	if (!func_35(uParam0))
	{
		return 4;
	}
	switch (uParam0->f_2)
	{
		case joaat("akula"):
			switch (uParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
		
		default:
	}
	return 4;
}

bool func_35(var uParam0)
{
	return (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0));
}

void func_36()
{
	unk_0x4FB260623DD93924(0, 24, 1);
	unk_0x4FB260623DD93924(0, 66, 1);
	unk_0x4FB260623DD93924(0, 67, 1);
	unk_0x4FB260623DD93924(0, 68, 1);
	unk_0x4FB260623DD93924(0, 114, 1);
	unk_0x4FB260623DD93924(0, 69, 1);
	unk_0x4FB260623DD93924(0, 70, 1);
	unk_0x4FB260623DD93924(0, 91, 1);
	unk_0x4FB260623DD93924(0, 92, 1);
	unk_0x4FB260623DD93924(0, 99, 1);
	unk_0x4FB260623DD93924(0, 100, 1);
	unk_0x4FB260623DD93924(0, 37, 1);
}

void func_37(var uParam0)
{
	var uVar0;
	
	if (((((((!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 1)) && !unk_0xF491DD47B88AA84E()) && func_9(&(uParam0->f_6), 3)) && !func_30(0)) && !func_29()) && func_27()) && unk_0x6ADD12BF4D6D2587(unk_0x317536BCEA8FA6B0(uParam0->f_1, -1, 0)))
	{
		uVar0 = func_19(uParam0->f_6.f_2, 3333, 10000);
		uParam0->f_6.f_2 = 0;
		func_17(func_38(uParam0), uVar0);
		func_44(uParam0);
		func_20(&(uParam0->f_6), 0);
	}
}

char* func_38(var uParam0)
{
	if (func_49(uParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_39(var uParam0, int iParam1)
{
	if (func_48(uParam0))
	{
		return;
	}
	if (unk_0xB89B7DB2727D69D6() != iParam1)
	{
		unk_0xC0EBC1452FCAB15C(iParam1);
	}
	if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > iParam1)
	{
		unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), iParam1, 0);
	}
}

bool func_40(var uParam0)
{
	return (!func_9(uParam0, 0) && func_9(uParam0, 1));
}

void func_41(var uParam0)
{
	func_5(&(uParam0->f_6), 0);
	if (func_10())
	{
		unk_0x3E80C2F7BC665259(1);
	}
	if (!func_49(uParam0))
	{
		if (func_47(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
		}
	}
}

void func_42()
{
	unk_0x872F1C1F8587CCC7(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_678), 1);
}

bool func_43(var uParam0)
{
	return (func_9(uParam0, 0) && !func_9(uParam0, 1));
}

void func_44(var uParam0)
{
	func_20(&(uParam0->f_6), 1);
}

void func_45(var uParam0, bool bParam1, int iParam2)
{
	switch (uParam0->f_2)
	{
		case joaat("akula"):
			unk_0x2000429679FCA3A9(uParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_46()
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_678, 3);
}

bool func_47(var uParam0)
{
	return func_9(uParam0, 0);
}

bool func_48(var uParam0)
{
	return func_9(uParam0, 2);
}

bool func_49(var uParam0)
{
	return ((func_35(uParam0) && uParam0->f_3 == unk_0xFC1458A37D98B502()) || unk_0x317536BCEA8FA6B0(uParam0->f_1, -1, 0) == unk_0xFC1458A37D98B502());
}

void func_50(var uParam0)
{
	if (func_10() && (func_30(0) || func_29()))
	{
		uParam0->f_6.f_2 = 1;
		unk_0x3E80C2F7BC665259(1);
		func_5(&(uParam0->f_6), 0);
		if (func_47(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
			if (func_49(uParam0))
			{
				func_21(uParam0, -1);
			}
		}
	}
}

void func_51(var uParam0)
{
	if (func_47(uParam0))
	{
		if (func_8(uParam0))
		{
			if (func_53())
			{
				func_4(uParam0);
			}
		}
		else if (!func_53())
		{
			func_52(uParam0);
		}
	}
	else if (func_8(uParam0))
	{
		func_4(uParam0);
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_678), 2);
}

void func_52(var uParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_20(&(uParam0->f_6), 5);
}

bool func_53()
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_678, 2);
}

int func_54(var uParam0)
{
	if (!func_35(uParam0))
	{
		return 1;
	}
	if (!func_63(uParam0))
	{
		return 1;
	}
	if (!func_62(uParam0->f_2))
	{
		return 1;
	}
	if (func_61(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		return 1;
	}
	if (func_60(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (func_57(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (func_55(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2422736[iParam0 /*420*/].f_251 > -1)
		{
			if (func_56(Global_2422736[iParam0 /*420*/].f_251) == 4)
			{
				return 1;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

int func_57(int iParam0)
{
	if (iParam0 != func_59() && func_58(iParam0, 1, 1))
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 3);
	}
	return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_59()
{
	return -1;
}

int func_60(int iParam0)
{
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_59())
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("akula"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_63(var uParam0)
{
	return (unk_0x6ADD12BF4D6D2587(uParam0->f_1) && unk_0xB8DE76287EDC4957(uParam0->f_1, 0));
}

void func_64(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(uParam0, 4);
	bVar1 = func_9(uParam0, 0);
	func_75(uParam0);
	if (bVar0)
	{
		func_20(uParam0, 3);
	}
	else
	{
		func_5(uParam0, 3);
	}
	if (bVar1)
	{
		func_20(uParam0, 1);
	}
	else
	{
		func_5(uParam0, 1);
	}
	if (func_35(uParam0))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			uParam0->f_1 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
			if (func_63(uParam0))
			{
				uParam0->f_2 = unk_0x82FF3DFBC3965CC0(uParam0->f_1);
				if (unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2))
				{
					func_20(uParam0, 2);
				}
			}
		}
	}
	if (func_63(uParam0))
	{
		if (!unk_0x8EE3A848975DDF21(uParam0->f_1, -1, 0))
		{
			iVar2 = unk_0x317536BCEA8FA6B0(uParam0->f_1, -1, 0);
			if ((unk_0x6ADD12BF4D6D2587(iVar2) && !unk_0x191BE1BC8F26F3C1(iVar2, 0)) && unk_0x1417A5CC924DE120(iVar2))
			{
				uParam0->f_3 = iVar2;
				if (iVar2 == unk_0xFC1458A37D98B502())
				{
					func_20(uParam0, 4);
					if (!func_9(uParam0, 3))
					{
						func_20(&(uParam0->f_6), 6);
					}
				}
			}
		}
		if (func_35(uParam0))
		{
			uParam0->f_4 = func_74(unk_0xFC1458A37D98B502(), 0);
		}
		if (func_49(uParam0))
		{
			if (func_73() && func_67(uParam0))
			{
				func_20(uParam0, 0);
			}
		}
		else
		{
			func_65(uParam0);
		}
	}
	if (func_43(uParam0))
	{
		uParam0->f_6.f_3 = unk_0xD1952A425B78FFC0();
	}
}

void func_65(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_3) && func_66(unk_0xDF35170AEEFB473B(uParam0->f_3)))
	{
		func_20(uParam0, 0);
	}
	else
	{
		func_5(uParam0, 0);
	}
}

bool func_66(int iParam0)
{
	return (iParam0 != -1 && unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_678, 1));
}

bool func_67(var uParam0)
{
	bool bVar0;
	
	bVar0 = func_72();
	if (unk_0xA0BF73C5030D3F60(uParam0->f_1))
	{
		func_71(uParam0);
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				bVar0 = !unk_0x58400F8F8F69361B(uParam0->f_1);
				break;
		}
	}
	else if (func_70(uParam0))
	{
		if (func_69(uParam0))
		{
			unk_0xC8DAB4CEBB9AB263(uParam0->f_1);
		}
	}
	else
	{
		func_68(uParam0);
	}
	return bVar0;
}

void func_68(var uParam0)
{
	func_20(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0x53C562FD2B9E3AB0();
}

bool func_69(var uParam0)
{
	return (unk_0x53C562FD2B9E3AB0() - uParam0->f_6.f_1) >= 200;
}

bool func_70(var uParam0)
{
	return func_9(&(uParam0->f_6), 4);
}

void func_71(var uParam0)
{
	func_5(&(uParam0->f_6), 4);
}

bool func_72()
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_678, 1);
}

bool func_73()
{
	return !func_28();
}

int func_74(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x88DDBE9908752BF0(iParam0, iParam1))
		{
			uVar0 = unk_0xDFD115BB10FE46A9(iParam0, iParam1);
			if (unk_0x6ADD12BF4D6D2587(uVar0))
			{
				iVar1 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x8EE3A848975DDF21(iVar0, iVar3, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_75(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_76()
{
	if (func_77())
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	var uVar0;
	
	func_84(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_83())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_82())
	{
		return 1;
	}
	if (func_81(157))
	{
		if (!func_80())
		{
			return 1;
		}
	}
	if (func_81(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_78() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_78()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_78()
{
	switch (func_79())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_79()
{
	return Global_25233;
}

bool func_80()
{
	return Global_2447174.f_586;
}

int func_81(int iParam0)
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_82()
{
	return Global_2456830;
}

bool func_83()
{
	return Global_2447174.f_581;
}

void func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_85(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_85(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 3))
	{
		if (func_58(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x25D049AAC4603E65(Var0.f_1);
			if (unk_0x6ADD12BF4D6D2587(uVar3))
			{
				if (unk_0x88DDBE9908752BF0(iVar3, 0))
				{
					uVar4 = unk_0xDFD115BB10FE46A9(iVar3, 0);
					if (unk_0x1FE6625767FB8CBF(uVar4, Var0.f_2) && unk_0x8C504A60C2F379BD())
					{
						if (func_86(uVar4, &bVar5))
						{
							unk_0x38CCEC620E3BB265(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x5380482A432E314E(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_86(int iParam0, var uParam1)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_87(var uParam0)
{
	func_64(uParam0);
	if (func_63(uParam0))
	{
		if (func_49(uParam0))
		{
			if (unk_0xA0BF73C5030D3F60(uParam0->f_1))
			{
				if (!func_46())
				{
					func_45(uParam0, 0, 0);
				}
				else
				{
					func_20(&(uParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_20(&(uParam0->f_6), 3);
		}
	}
	return 1;
}

