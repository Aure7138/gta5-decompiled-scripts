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
	unk_0x3D0EAC6385DD6100();
	if (unk_0xC11469DCA6FC3BB5(32))
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
	if (unk_0x153AD457764FD704(Global_35924))
	{
		return 1;
	}
	if (unk_0x8E34C953364A76DD(joaat("drunk")) > 0)
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
	iVar0 = unk_0x4F67E8ECA7D3F667();
	if (Global_35925 > iVar0 || Global_35925 == -1)
	{
		if (unk_0xED20CB1F5297791D())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_35928 != Global_35929)
		{
			fVar3 = (Global_35929 - Global_35928);
			Global_35928 = (Global_35928 + (fVar3 * 0.1f));
			if (unk_0x134549B388167CBF((Global_35928 - Global_35929)) < 0.01f)
			{
				Global_35928 = Global_35929;
			}
		}
		if (!unk_0xEA4C5F4AA0A4DBEF())
		{
			unk_0xD9B31B4650520529("DRUNK_SHAKE", ((Global_35928 * fVar1) * fVar2));
		}
		unk_0x570E35F5C4A44838(((Global_35928 * fVar1) * fVar2));
		unk_0x4489A26B98AAC0C9(((Global_35927 * fVar1) * fVar2));
		if (((Global_35927 * fVar1) * fVar2) < 1f)
		{
			unk_0x8459B3E64257B21D(((Global_35927 * fVar1) * fVar2));
		}
		else
		{
			unk_0x8459B3E64257B21D(1f);
		}
		if (!unk_0x73CD20382D19EE4B())
		{
			unk_0xAEB41EF9A3B3C10C("DRUNK_SHAKE", (((Global_35928 * Global_35922) * fVar1) * fVar2));
		}
		unk_0x10067741CAC97F38((((Global_35928 * Global_35922) * fVar1) * fVar2));
		if (unk_0x153AD457764FD704(Global_35924))
		{
			if (unk_0x2EEB402BD7320159(Global_35924))
			{
				unk_0x82B9049F7264300A(Global_35924, ((Global_35928 * fVar1) * fVar2));
			}
		}
		if (!unk_0x2CF12F9ACF18F048(&Global_35951) && !unk_0x2CF12F9ACF18F048(&Global_35935))
		{
			unk_0x5F70787AC4BF7928(&Global_35935);
			StringCopy(&Global_35951, "", 16);
		}
		unk_0x399A38F2A7FD02F9();
		if (Global_35930 > 0f)
		{
			if (fLocal_4 != Global_35930)
			{
				if (unk_0x2DA67BA3C8A6755D() != -1)
				{
				}
				else
				{
					unk_0xFF927A09F481D80C(&Global_35931, 15f);
					fLocal_4 = Global_35930;
				}
			}
			else
			{
				if (unk_0x2DA67BA3C8A6755D() != -1 && unk_0xA705394293E2B3D3() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0x0045B2771F31EFA0(2);
				iVar4 = (Global_35925 - iVar0);
				if (iVar4 <= (Global_35926 / 2))
				{
					bVar5 = false;
					if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
					{
						if (unk_0x9F878CD59A8920FD(unk_0x096275889B8E0EE0()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0x096275889B8E0EE0()))
					{
						Global_35925 += 1000;
					}
					else if (bVar5)
					{
						Global_35925 += 1000;
					}
					else if (unk_0x2DA67BA3C8A6755D() != -1)
					{
						Global_35925 += 1000;
					}
					else
					{
						if (unk_0xA705394293E2B3D3() != -1)
						{
							unk_0xBB6C707F20D955D4((unk_0xBBDA792448DB5A89((Global_35926 / 2)) / 1000f));
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
	unk_0x4489A26B98AAC0C9(0f);
	unk_0x8459B3E64257B21D(0f);
	unk_0x570E35F5C4A44838(0f);
	unk_0xE0DE43D290FB65F9(1);
	unk_0x10067741CAC97F38(0f);
	unk_0xAC4A4B1A187A9D8D(1);
	unk_0x0045B2771F31EFA0(0);
	if (unk_0x2E882EA08284F674("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xC27FB879C2B9A2EB("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x2CF12F9ACF18F048(&Global_35935))
	{
		if (unk_0x2E882EA08284F674(&Global_35935))
		{
			unk_0xC27FB879C2B9A2EB(&Global_35935);
		}
	}
	if (unk_0x153AD457764FD704(Global_35924))
	{
		if (unk_0x2EEB402BD7320159(Global_35924))
		{
			unk_0x82B9049F7264300A(Global_35924, 0f);
			unk_0xB78CC4B4706614B0(Global_35924, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xA705394293E2B3D3() != -1 || unk_0x2DA67BA3C8A6755D() != -1)
		{
			unk_0x0E3F4AF2D63491FB();
		}
		else if (unk_0xED20CB1F5297791D())
		{
			unk_0x0E3F4AF2D63491FB();
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
	iVar1 = func_11(unk_0x096275889B8E0EE0());
	iVar2 = func_8(unk_0x096275889B8E0EE0());
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
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
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
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
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
	
	iVar0 = unk_0x4F67E8ECA7D3F667();
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
	if (unk_0x7D5B1F88E7504BBA(Global_35734[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_35734[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0xE97BD36574F8B0A6("drunk"))
	{
		unk_0x46ED607DDD40D7FE("drunk");
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
	unk_0x0086D3067E1CFD1C("drunk");
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
		if (Global_35734[iParam0 /*5*/].f_1 == unk_0x096275889B8E0EE0())
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
	unk_0x5E8B6D17FF91CD59();
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
	unk_0x5DDB5B807ADB20FD("drunk");
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

