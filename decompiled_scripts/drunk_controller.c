#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0f;
#endregion

void __EntryFunction__()
{
	fLocal_4 = -99f;
	unk_0x60F2C6DC397A6833();
	if (unk_0x524AF15206846700(32))
	{
		func_30();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_29(0);
		func_28();
		func_21();
		func_18();
		func_13();
		func_2();
		iLocal_1++;
		if (iLocal_1 >= 16)
		{
			iLocal_1 = 0;
		}
		iLocal_2++;
		if (iLocal_2 >= 16)
		{
			iLocal_2 = 0;
		}
		iLocal_3++;
		if (iLocal_3 >= 5)
		{
			iLocal_3 = 0;
		}
		if (!func_1())
		{
			func_30();
		}
	}
}

int func_1()
{
	if (Global_36805)
	{
		return 1;
	}
	if (unk_0x54DA78A82349F5AC(Global_36806))
	{
		return 1;
	}
	if (unk_0xD32535FA4397160F(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36615 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	
	if (!Global_36805)
	{
		return;
	}
	iVar0 = unk_0xA0F74982C6AAA9D4();
	if (Global_36807 > iVar0 || Global_36807 == -1)
	{
		if (unk_0x5D293E404CA20AA5())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_36810 != Global_36811)
		{
			fVar3 = (Global_36811 - Global_36810);
			Global_36810 = (Global_36810 + (fVar3 * 0.1f));
			if (unk_0x43698C98CC255554((Global_36810 - Global_36811)) < 0.01f)
			{
				Global_36810 = Global_36811;
			}
		}
		if (!unk_0x93BC9427D72133EA())
		{
			unk_0x09DEAF0B551E1211("DRUNK_SHAKE", ((Global_36810 * fVar1) * fVar2));
		}
		if ((unk_0xA0F74982C6AAA9D4() % 100) == 0)
		{
			unk_0x7E67E312BA5D0EF7(((Global_36810 * fVar1) * fVar2));
			unk_0x34DEBA0AAEE7AD61(((Global_36809 * fVar1) * fVar2));
		}
		if (((Global_36809 * fVar1) * fVar2) < 1f)
		{
			unk_0x64E911B3993155DB(((Global_36809 * fVar1) * fVar2));
		}
		else
		{
			unk_0x64E911B3993155DB(1f);
		}
		if (!unk_0x6E41E4654B278A0B())
		{
			unk_0x46828BE680E7A797("DRUNK_SHAKE", (((Global_36810 * Global_36804) * fVar1) * fVar2));
		}
		unk_0x90F5DA557C0B2909((((Global_36810 * Global_36804) * fVar1) * fVar2));
		if (unk_0x54DA78A82349F5AC(Global_36806))
		{
			if (unk_0x09F63CC039551CF9(Global_36806))
			{
				unk_0x4DC38D1AEB85B2D9(Global_36806, ((Global_36810 * fVar1) * fVar2));
			}
		}
		if (!unk_0x75CB9E30BA492FF0(&Global_36833) && !unk_0x75CB9E30BA492FF0(&Global_36817))
		{
			unk_0xF8B012FD1C255840(&Global_36817);
			StringCopy(&Global_36833, "", 16);
		}
		unk_0x286EE9A97BFAB834();
		if (Global_36812 > 0f)
		{
			if (fLocal_4 != Global_36812)
			{
				if (unk_0x3F2413A40CACC883() != -1)
				{
				}
				else
				{
					unk_0x60257F0840E9A428(&Global_36813, 15f);
					fLocal_4 = Global_36812;
				}
			}
			else
			{
				if (unk_0x3F2413A40CACC883() != -1 && unk_0x1DA7469E15D75D67() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0x43150A41AF558DE2(2);
				iVar4 = (Global_36807 - iVar0);
				if (iVar4 <= (Global_36808 / 2))
				{
					bVar5 = false;
					if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
					{
						if (unk_0xBD5D1DC3ADCC7F23(unk_0x27D769C59BC9D030()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0x27D769C59BC9D030()))
					{
						Global_36807 += 1000;
					}
					else if (bVar5)
					{
						Global_36807 += 1000;
					}
					else if (unk_0x3F2413A40CACC883() != -1)
					{
						Global_36807 += 1000;
					}
					else
					{
						if (unk_0x1DA7469E15D75D67() != -1)
						{
							unk_0x65607FF4AF1B9359((unk_0xBBDA792448DB5A89((Global_36808 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36812 = 0f;
						StringCopy(&Global_36813, "", 16);
					}
				}
			}
		}
		return;
	}
	func_3(1);
	iLocal_0 = 1;
}

void func_3(bool bParam0)
{
	unk_0x34DEBA0AAEE7AD61(0f);
	unk_0x64E911B3993155DB(0f);
	unk_0x7E67E312BA5D0EF7(0f);
	unk_0xADBA33EFF2D3A2C1(1);
	unk_0x90F5DA557C0B2909(0f);
	unk_0x4DEAA070DDCEE958(1);
	unk_0x43150A41AF558DE2(0);
	if (unk_0x159730DB57D995D0("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x354EC40268FD2071("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x75CB9E30BA492FF0(&Global_36817))
	{
		if (unk_0x159730DB57D995D0(&Global_36817))
		{
			unk_0x354EC40268FD2071(&Global_36817);
		}
	}
	if (unk_0x54DA78A82349F5AC(Global_36806))
	{
		if (unk_0x09F63CC039551CF9(Global_36806))
		{
			unk_0x4DC38D1AEB85B2D9(Global_36806, 0f);
			unk_0x62A8B47253876150(Global_36806, 1);
		}
	}
	if (unk_0xD47A0DE770BBA7A6())
	{
		unk_0x8DC163BE005C64EB(0);
	}
	if (bParam0)
	{
		if (unk_0x1DA7469E15D75D67() != -1 || unk_0x3F2413A40CACC883() != -1)
		{
			unk_0xE4D2B0D96CFD2FBD();
		}
		else if (unk_0x5D293E404CA20AA5())
		{
			unk_0xE4D2B0D96CFD2FBD();
		}
	}
	Global_36812 = 0f;
	StringCopy(&Global_36813, "", 16);
	StringCopy(&Global_36817, "", 64);
	StringCopy(&Global_36833, "", 16);
	func_4();
}

void func_4()
{
	Global_36805 = 0;
	Global_36806 = 0;
	Global_36807 = 0;
	Global_36808 = 30000;
	Global_36809 = 0f;
	Global_36811 = 0f;
	Global_36810 = 0f;
	Global_36812 = 0f;
	StringCopy(&Global_36813, "", 16);
}

int func_5(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_6(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_6(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36642[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_7()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	iVar1 = func_11(unk_0x27D769C59BC9D030());
	iVar2 = func_8(unk_0x27D769C59BC9D030());
	if (iVar2 == 0)
	{
		if (iVar1 != 0)
		{
			fVar0 = (unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 != 0)
	{
		fVar0 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36642[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36642[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
		{
			return Global_36642[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36642[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0xA0F74982C6AAA9D4();
	fVar1 = 1f;
	iVar2 = (Global_36807 - iVar0);
	if (iVar2 <= Global_36808)
	{
		if (Global_36807 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_36808));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36616[iLocal_3 /*5*/] == 0)
	{
		func_14(iLocal_3);
	}
}

void func_14(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0x2006A8C1BA2AFE80(Global_36616[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36616[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x9A8E9A1E029E9A5A("drunk"))
	{
		unk_0xA51826E3518111A3("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36642[iVar0 /*5*/] = func_15();
	Global_36642[iVar0 /*5*/].f_1 = Global_36616[iParam0 /*5*/].f_1;
	Global_36642[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36616[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0xABAEB0389A1F036F("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36614;
	Global_36614++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36642[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_17(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36616[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36616[iParam0 /*5*/].f_1 == unk_0x27D769C59BC9D030())
		{
			Global_36837 = 0;
		}
	}
	Global_36616[iParam0 /*5*/] = 13;
	Global_36616[iParam0 /*5*/].f_1 = 0;
	Global_36616[iParam0 /*5*/].f_2 = 0;
	Global_36616[iParam0 /*5*/].f_3 = 0;
	Global_36616[iParam0 /*5*/].f_4 = 0;
	Global_36615 = (Global_36615 - 1);
	if (Global_36615 < 0)
	{
		Global_36615 = 0;
	}
}

void func_18()
{
	if (!Global_36723[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36723[iLocal_1 /*5*/].f_1 == 0)
		{
			func_20(iLocal_1);
			func_19(iLocal_1);
		}
	}
}

void func_19(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36723[iParam0 /*5*/] = -1;
	Global_36723[iParam0 /*5*/].f_1 = -1;
	Global_36723[iParam0 /*5*/].f_2 = 6;
	Global_36723[iParam0 /*5*/].f_3 = 0;
	Global_36723[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36723[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_21()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_36642[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36642[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36642[iLocal_2 /*5*/]);
		}
		else
		{
			func_19(iVar0);
		}
	}
}

void func_22(int iParam0)
{
	int iVar0;
	
	func_25(iParam0);
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_23(iVar0);
}

void func_23(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36642[iParam0 /*5*/] = -1;
	Global_36642[iParam0 /*5*/].f_1 = 0;
	Global_36642[iParam0 /*5*/].f_2 = -1;
	Global_36642[iParam0 /*5*/].f_3 = 0;
	Global_36642[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36642[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0)
{
	func_29(iParam0);
	func_26(iParam0);
}

void func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36723[iVar0 /*5*/].f_1)
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_36723[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36723[iVar0 /*5*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_28()
{
	if (Global_36723[iLocal_1 /*5*/] == 1)
	{
		Global_36723[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36723[iVar0 /*5*/])
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

void func_30()
{
	func_31();
	if (!iLocal_0)
	{
		func_3(1);
	}
	unk_0x7C3AA2D27E16E2AD();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36838 = 0;
	Global_36837 = 0;
	Global_36615 = 0;
	unk_0x113FDF809A4916C2("drunk");
}

void func_32()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_19(iVar0);
		iVar0++;
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_17(iVar0);
		iVar0++;
	}
}

