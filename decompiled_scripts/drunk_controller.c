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
	unk_0x1ED2FDBD02899869();
	if (unk_0xD63E63DFACCEB80E(32))
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
	if (Global_35923)
	{
		return 1;
	}
	if (unk_0x5329DB72517417AE(Global_35924))
	{
		return 1;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_35733 > 0)
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
	
	if (!Global_35923)
	{
		return;
	}
	iVar0 = unk_0x17103F66FBB44C3C();
	if (Global_35925 > iVar0 || Global_35925 == -1)
	{
		if (unk_0x2D8FCFBC4E01FF7C())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_35928 != Global_35929)
		{
			fVar3 = (Global_35929 - Global_35928);
			Global_35928 = (Global_35928 + (fVar3 * 0.1f));
			if (unk_0xE3DAC530D2CCDAE3((Global_35928 - Global_35929)) < 0.01f)
			{
				Global_35928 = Global_35929;
			}
		}
		if (!unk_0xE1F9C9B97C74989F())
		{
			unk_0x5EAF15C18CA6669A("DRUNK_SHAKE", ((Global_35928 * fVar1) * fVar2));
		}
		unk_0x8F0D00E28BC8810C(((Global_35928 * fVar1) * fVar2));
		unk_0xC7A0DCE047211B6B(((Global_35927 * fVar1) * fVar2));
		if (((Global_35927 * fVar1) * fVar2) < 1f)
		{
			unk_0xE370C3D7626B060B(((Global_35927 * fVar1) * fVar2));
		}
		else
		{
			unk_0xE370C3D7626B060B(1f);
		}
		if (!unk_0x827FC4B6A826E43D())
		{
			unk_0xC3D12EE6A541D787("DRUNK_SHAKE", (((Global_35928 * Global_35922) * fVar1) * fVar2));
		}
		unk_0x6A9ECC7051FBEA73((((Global_35928 * Global_35922) * fVar1) * fVar2));
		if (unk_0x5329DB72517417AE(Global_35924))
		{
			if (unk_0x25640493C2F3B9AE(Global_35924))
			{
				unk_0x04DB9E91DE9A1825(Global_35924, ((Global_35928 * fVar1) * fVar2));
			}
		}
		if (!unk_0x9E9AFDBF482248F6(&Global_35951) && !unk_0x9E9AFDBF482248F6(&Global_35935))
		{
			unk_0x9B517A4FE28A719F(&Global_35935);
			StringCopy(&Global_35951, "", 16);
		}
		unk_0xDAB35930CAACB1DC();
		if (Global_35930 > 0f)
		{
			if (fLocal_4 != Global_35930)
			{
				if (unk_0xB2D5DAA151970AE4() != -1)
				{
				}
				else
				{
					unk_0xD6D9F14E7196EEF9(&Global_35931, 15f);
					fLocal_4 = Global_35930;
				}
			}
			else
			{
				if (unk_0xB2D5DAA151970AE4() != -1 && unk_0x8F1265EDECD7B235() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0xBF6BDED4E5A12AC5(2);
				iVar4 = (Global_35925 - iVar0);
				if (iVar4 <= (Global_35926 / 2))
				{
					bVar5 = false;
					if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
					{
						if (unk_0xD208EA2EE53AE102(unk_0x9F92518438215DD0()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0x9F92518438215DD0()))
					{
						Global_35925 += 1000;
					}
					else if (bVar5)
					{
						Global_35925 += 1000;
					}
					else if (unk_0xB2D5DAA151970AE4() != -1)
					{
						Global_35925 += 1000;
					}
					else
					{
						if (unk_0x8F1265EDECD7B235() != -1)
						{
							unk_0xEF5B9BEF5FA3F0E4((unk_0xBBDA792448DB5A89((Global_35926 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_35930 = 0f;
						StringCopy(&Global_35931, "", 16);
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
	unk_0xC7A0DCE047211B6B(0f);
	unk_0xE370C3D7626B060B(0f);
	unk_0x8F0D00E28BC8810C(0f);
	unk_0xAB692B364BE900EC(1);
	unk_0x6A9ECC7051FBEA73(0f);
	unk_0x3D1A7305CA86F26D(1);
	unk_0xBF6BDED4E5A12AC5(0);
	if (unk_0x370603716EC2D420("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x6041FBFC1EE8196A("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x9E9AFDBF482248F6(&Global_35935))
	{
		if (unk_0x370603716EC2D420(&Global_35935))
		{
			unk_0x6041FBFC1EE8196A(&Global_35935);
		}
	}
	if (unk_0x5329DB72517417AE(Global_35924))
	{
		if (unk_0x25640493C2F3B9AE(Global_35924))
		{
			unk_0x04DB9E91DE9A1825(Global_35924, 0f);
			unk_0x8323D198B0FC05E0(Global_35924, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0x8F1265EDECD7B235() != -1 || unk_0xB2D5DAA151970AE4() != -1)
		{
			unk_0x014430DA270E9A92();
		}
		else if (unk_0x2D8FCFBC4E01FF7C())
		{
			unk_0x014430DA270E9A92();
		}
	}
	Global_35930 = 0f;
	StringCopy(&Global_35931, "", 16);
	StringCopy(&Global_35935, "", 64);
	StringCopy(&Global_35951, "", 16);
	func_4();
}

void func_4()
{
	Global_35923 = 0;
	Global_35924 = 0;
	Global_35925 = 0;
	Global_35926 = 30000;
	Global_35927 = 0f;
	Global_35929 = 0f;
	Global_35928 = 0f;
	Global_35930 = 0f;
	StringCopy(&Global_35931, "", 16);
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
		if (!Global_35760[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
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
	iVar1 = func_11(unk_0x9F92518438215DD0());
	iVar2 = func_8(unk_0x9F92518438215DD0());
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
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_35760[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35760[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
		{
			return Global_35760[iVar0 /*5*/];
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
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_35760[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x17103F66FBB44C3C();
	fVar1 = 1f;
	iVar2 = (Global_35925 - iVar0);
	if (iVar2 <= Global_35926)
	{
		if (Global_35925 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_35926));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_35734[iLocal_3 /*5*/] == 0)
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
	if (unk_0x0BA451447C3B1A8D(Global_35734[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_35734[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x197501C41CB2403F("drunk"))
	{
		unk_0x9AD29F8AF48B9AD1("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_35760[iVar0 /*5*/] = func_15();
	Global_35760[iVar0 /*5*/].f_1 = Global_35734[iParam0 /*5*/].f_1;
	Global_35760[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_35734[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0x45C517E671FFDD0E("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_35732;
	Global_35732++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35760[iVar0 /*5*/] == -1)
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
	if (!Global_35734[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35734[iParam0 /*5*/].f_1 == unk_0x9F92518438215DD0())
		{
			Global_35955 = 0;
		}
	}
	Global_35734[iParam0 /*5*/] = 13;
	Global_35734[iParam0 /*5*/].f_1 = 0;
	Global_35734[iParam0 /*5*/].f_2 = 0;
	Global_35734[iParam0 /*5*/].f_3 = 0;
	Global_35734[iParam0 /*5*/].f_4 = 0;
	Global_35733 = (Global_35733 - 1);
	if (Global_35733 < 0)
	{
		Global_35733 = 0;
	}
}

void func_18()
{
	if (!Global_35841[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_35841[iLocal_1 /*5*/].f_1 == 0)
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
	Global_35841[iParam0 /*5*/] = -1;
	Global_35841[iParam0 /*5*/].f_1 = -1;
	Global_35841[iParam0 /*5*/].f_2 = 6;
	Global_35841[iParam0 /*5*/].f_3 = 0;
	Global_35841[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_35841[iParam0 /*5*/].f_2;
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
	if (!Global_35760[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_35760[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_35760[iLocal_2 /*5*/]);
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
	Global_35760[iParam0 /*5*/] = -1;
	Global_35760[iParam0 /*5*/].f_1 = 0;
	Global_35760[iParam0 /*5*/].f_2 = -1;
	Global_35760[iParam0 /*5*/].f_3 = 0;
	Global_35760[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35760[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_35841[iVar0 /*5*/].f_1)
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
		if (iParam1 == Global_35841[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35841[iVar0 /*5*/])
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
	if (Global_35841[iLocal_1 /*5*/] == 1)
	{
		Global_35841[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35841[iVar0 /*5*/])
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
	unk_0xE60DEFFB2A853900();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_35956 = 0;
	Global_35955 = 0;
	Global_35733 = 0;
	unk_0x5ABA834BC2C05B12("drunk");
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

