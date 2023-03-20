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
	unk_0x6516E26C513581FA();
	if (unk_0x9CEB376419A71A96(32))
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
	if (Global_36836)
	{
		return 1;
	}
	if (unk_0x97A9CC2DDCDAA0A8(Global_36837))
	{
		return 1;
	}
	if (unk_0x98934607F8D0FB03(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36646 > 0)
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
	
	if (!Global_36836)
	{
		return;
	}
	iVar0 = unk_0x1ADBAAC322D61F73();
	if (Global_36838 > iVar0 || Global_36838 == -1)
	{
		if (unk_0xAD79840A082ADD7F())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_36841 != Global_36842)
		{
			fVar3 = (Global_36842 - Global_36841);
			Global_36841 = (Global_36841 + (fVar3 * 0.1f));
			if (unk_0xF87C669B882D93C0((Global_36841 - Global_36842)) < 0.01f)
			{
				Global_36841 = Global_36842;
			}
		}
		if (!unk_0x2511DC8348683C83())
		{
			unk_0xC615657F89DB080D("DRUNK_SHAKE", ((Global_36841 * fVar1) * fVar2));
		}
		if ((unk_0x1ADBAAC322D61F73() % 100) == 0)
		{
			unk_0x0E39ABF54C4F3B75(((Global_36841 * fVar1) * fVar2));
			unk_0x72CAB1B3E8359C8D(((Global_36840 * fVar1) * fVar2));
		}
		if (((Global_36840 * fVar1) * fVar2) < 1f)
		{
			unk_0x3BD63FC082F654EF(((Global_36840 * fVar1) * fVar2));
		}
		else
		{
			unk_0x3BD63FC082F654EF(1f);
		}
		if (!unk_0xA00968C87C9D92EA())
		{
			unk_0x0DD36904AFFCA606("DRUNK_SHAKE", (((Global_36841 * Global_36835) * fVar1) * fVar2));
		}
		unk_0xA079788E01BCF663((((Global_36841 * Global_36835) * fVar1) * fVar2));
		if (unk_0x97A9CC2DDCDAA0A8(Global_36837))
		{
			if (unk_0x0CFEFD1B78F2C055(Global_36837))
			{
				unk_0x1B5D5A07D684A57E(Global_36837, ((Global_36841 * fVar1) * fVar2));
			}
		}
		if (!unk_0x226FA58470A21AEF(&Global_36864) && !unk_0x226FA58470A21AEF(&Global_36848))
		{
			unk_0xE491AB346B56AC9F(&Global_36848);
			StringCopy(&Global_36864, "", 16);
		}
		unk_0x55D6BE0F38B5845C();
		if (Global_36843 > 0f)
		{
			if (fLocal_4 != Global_36843)
			{
				if (unk_0x8C8314DBF2C5ED4A() != -1)
				{
				}
				else
				{
					unk_0xC5CBC5C08FA5A78F(&Global_36844, 15f);
					fLocal_4 = Global_36843;
				}
			}
			else
			{
				if (unk_0x8C8314DBF2C5ED4A() != -1 && unk_0xF458B7DBEA256E74() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0x68E0D4EC1F5BDFE9(2);
				iVar4 = (Global_36838 - iVar0);
				if (iVar4 <= (Global_36839 / 2))
				{
					bVar5 = false;
					if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
					{
						if (unk_0x2E9ED2F77514260C(unk_0x06736567F820A39E()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0x06736567F820A39E()))
					{
						Global_36838 += 1000;
					}
					else if (bVar5)
					{
						Global_36838 += 1000;
					}
					else if (unk_0x8C8314DBF2C5ED4A() != -1)
					{
						Global_36838 += 1000;
					}
					else
					{
						if (unk_0xF458B7DBEA256E74() != -1)
						{
							unk_0xA3D1D5C97B5A8AA7((unk_0xBBDA792448DB5A89((Global_36839 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36843 = 0f;
						StringCopy(&Global_36844, "", 16);
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
	unk_0x72CAB1B3E8359C8D(0f);
	unk_0x3BD63FC082F654EF(0f);
	unk_0x0E39ABF54C4F3B75(0f);
	unk_0x881E0C84E6870420(1);
	unk_0xA079788E01BCF663(0f);
	unk_0x76ADEC5516153803(1);
	unk_0x68E0D4EC1F5BDFE9(0);
	if (unk_0x83667584AACBB09C("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x8D72E02348CB74D2("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x226FA58470A21AEF(&Global_36848))
	{
		if (unk_0x83667584AACBB09C(&Global_36848))
		{
			unk_0x8D72E02348CB74D2(&Global_36848);
		}
	}
	if (unk_0x97A9CC2DDCDAA0A8(Global_36837))
	{
		if (unk_0x0CFEFD1B78F2C055(Global_36837))
		{
			unk_0x1B5D5A07D684A57E(Global_36837, 0f);
			unk_0x80ABC7E285A257CD(Global_36837, 1);
		}
	}
	if (unk_0xA5920AC8C4A78037())
	{
		unk_0xED5AB963C49A1A66(0);
	}
	if (bParam0)
	{
		if (unk_0xF458B7DBEA256E74() != -1 || unk_0x8C8314DBF2C5ED4A() != -1)
		{
			unk_0xA560DBB85CAA9E0E();
		}
		else if (unk_0xAD79840A082ADD7F())
		{
			unk_0xA560DBB85CAA9E0E();
		}
	}
	Global_36843 = 0f;
	StringCopy(&Global_36844, "", 16);
	StringCopy(&Global_36848, "", 64);
	StringCopy(&Global_36864, "", 16);
	func_4();
}

void func_4()
{
	Global_36836 = 0;
	Global_36837 = 0;
	Global_36838 = 0;
	Global_36839 = 30000;
	Global_36840 = 0f;
	Global_36842 = 0f;
	Global_36841 = 0f;
	Global_36843 = 0f;
	StringCopy(&Global_36844, "", 16);
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
		if (!Global_36673[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36673[iVar0 /*5*/].f_1)
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
	iVar1 = func_11(unk_0x06736567F820A39E());
	iVar2 = func_8(unk_0x06736567F820A39E());
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
	if (!unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36673[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36673[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36673[iVar0 /*5*/].f_1)
		{
			return Global_36673[iVar0 /*5*/];
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
	if (!unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36673[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x1ADBAAC322D61F73();
	fVar1 = 1f;
	iVar2 = (Global_36838 - iVar0);
	if (iVar2 <= Global_36839)
	{
		if (Global_36838 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_36839));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36647[iLocal_3 /*5*/] == 0)
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
	if (unk_0xBDA1F5E8A36BFA07(Global_36647[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36647[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x04D070195A8178CD("drunk"))
	{
		unk_0x47CCE1B84DDCD2A7("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36673[iVar0 /*5*/] = func_15();
	Global_36673[iVar0 /*5*/].f_1 = Global_36647[iParam0 /*5*/].f_1;
	Global_36673[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36647[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0x3F380364F30A5C6B("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36645;
	Global_36645++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36673[iVar0 /*5*/] == -1)
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
	if (!Global_36647[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36647[iParam0 /*5*/].f_1 == unk_0x06736567F820A39E())
		{
			Global_36868 = 0;
		}
	}
	Global_36647[iParam0 /*5*/] = 13;
	Global_36647[iParam0 /*5*/].f_1 = 0;
	Global_36647[iParam0 /*5*/].f_2 = 0;
	Global_36647[iParam0 /*5*/].f_3 = 0;
	Global_36647[iParam0 /*5*/].f_4 = 0;
	Global_36646 = (Global_36646 - 1);
	if (Global_36646 < 0)
	{
		Global_36646 = 0;
	}
}

void func_18()
{
	if (!Global_36754[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36754[iLocal_1 /*5*/].f_1 == 0)
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
	Global_36754[iParam0 /*5*/] = -1;
	Global_36754[iParam0 /*5*/].f_1 = -1;
	Global_36754[iParam0 /*5*/].f_2 = 6;
	Global_36754[iParam0 /*5*/].f_3 = 0;
	Global_36754[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36754[iParam0 /*5*/].f_2;
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
	if (!Global_36673[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36673[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36673[iLocal_2 /*5*/]);
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
	Global_36673[iParam0 /*5*/] = -1;
	Global_36673[iParam0 /*5*/].f_1 = 0;
	Global_36673[iParam0 /*5*/].f_2 = -1;
	Global_36673[iParam0 /*5*/].f_3 = 0;
	Global_36673[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36673[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36754[iVar0 /*5*/].f_1)
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
		if (iParam1 == Global_36754[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36754[iVar0 /*5*/])
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
	if (Global_36754[iLocal_1 /*5*/] == 1)
	{
		Global_36754[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36754[iVar0 /*5*/])
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
	unk_0xF5DF8F3392CDD07B();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36869 = 0;
	Global_36868 = 0;
	Global_36646 = 0;
	unk_0x26D397C2D3E4FE49("drunk");
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

