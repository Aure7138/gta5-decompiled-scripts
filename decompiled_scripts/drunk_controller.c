#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0f;
	float fLocal_5[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_14 = 0f;
#endregion

void __EntryFunction__()
{
	fLocal_4 = -99f;
	fLocal_14 = -1f;
	unk_0x945226432ACF160F();
	if (unk_0x78BF2001491914AC(32))
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
	if (Global_36910)
	{
		return 1;
	}
	if (unk_0x9FA769EB6C3BCCE4(Global_36911))
	{
		return 1;
	}
	if (unk_0x09952BA662A7629B(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36720 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_36910)
	{
		return;
	}
	iVar1 = unk_0x3732B96D7A1859B4();
	if (Global_36912 > iVar1 || Global_36912 == -1)
	{
		if (unk_0x0AFBA1AD6DC1C540())
		{
			return;
		}
		iVar2 = func_12();
		iVar0 = (fLocal_5 - 1);
		while (iVar0 >= 1)
		{
			fLocal_5[iVar0] = fLocal_5[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_5[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_5)
		{
			fVar3 = (fVar3 + fLocal_5[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_7();
		if (Global_36915 != Global_36916)
		{
			fVar6 = (Global_36916 - Global_36915);
			Global_36915 = (Global_36915 + (fVar6 * 0.1f));
			if (unk_0x3FEF699D13BCC798((Global_36915 - Global_36916)) < 0.01f)
			{
				Global_36915 = Global_36916;
			}
		}
		if (!unk_0xCD81A9A454D90566())
		{
			unk_0xCDAA71A14E257763("DRUNK_SHAKE", ((Global_36915 * fVar3) * fVar5));
		}
		if ((unk_0x3732B96D7A1859B4() % 100) == 0)
		{
			if (fLocal_14 == -1f)
			{
				fLocal_14 = fVar3;
			}
			unk_0xFAF41D405DD88AC2(((Global_36915 * fVar3) * fVar5));
			unk_0x9BCFE282549F0ABE(((Global_36914 * fVar3) * fVar5));
			fLocal_14 = fVar3;
		}
		if (((Global_36914 * fVar3) * fVar5) < 1f)
		{
			unk_0xCA4458A7A267D61B(((Global_36914 * fVar3) * fVar5));
		}
		else
		{
			unk_0xCA4458A7A267D61B(1f);
		}
		if (!unk_0x9EF2C9B751261C7F())
		{
			unk_0x35774D786BF69A68("DRUNK_SHAKE", (((Global_36915 * Global_36909) * fVar3) * fVar5));
		}
		unk_0x22E814CEA7509B2E((((Global_36915 * Global_36909) * fVar3) * fVar5));
		if (unk_0x9FA769EB6C3BCCE4(Global_36911))
		{
			if (unk_0x1CD1490177850A31(Global_36911))
			{
				unk_0x16EC2DD3A07898B9(Global_36911, ((Global_36915 * fVar3) * fVar5));
			}
		}
		if (!unk_0x58478145CAF8429C(&Global_36938) && !unk_0x58478145CAF8429C(&Global_36922))
		{
			unk_0xB0D390F8FEB78903(&Global_36922);
			StringCopy(&Global_36938, "", 16);
		}
		unk_0x04E5649829F2B4AA();
		if (Global_36917 > 0f)
		{
			if (fLocal_4 != Global_36917)
			{
				if (unk_0xE5A09C695A824354() != -1)
				{
				}
				else
				{
					unk_0xB9E193815EF8343F(&Global_36918, 15f);
					fLocal_4 = Global_36917;
				}
			}
			else
			{
				if (unk_0xE5A09C695A824354() != -1 && unk_0x134E720A17978737() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0xA007078AA477CB5C(2);
				iVar7 = (Global_36912 - iVar1);
				if (iVar7 <= (Global_36913 / 2))
				{
					bVar8 = false;
					if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
					{
						if (unk_0xEA1FD1B84CBA9902(unk_0x2A5EB8B0FE590B91()))
						{
							bVar8 = true;
						}
					}
					if (func_5(unk_0x2A5EB8B0FE590B91()))
					{
						Global_36912 += 1000;
					}
					else if (bVar8)
					{
						Global_36912 += 1000;
					}
					else if (unk_0xE5A09C695A824354() != -1)
					{
						Global_36912 += 1000;
					}
					else
					{
						if (unk_0x134E720A17978737() != -1)
						{
							unk_0x1BE25CB112A37BEF((unk_0xBBDA792448DB5A89((Global_36913 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36917 = 0f;
						StringCopy(&Global_36918, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_5)
	{
		fLocal_5[iVar0] = 0f;
		iVar0++;
	}
	fLocal_14 = -1f;
	func_3(1);
	iLocal_0 = 1;
}

void func_3(bool bParam0)
{
	unk_0x9BCFE282549F0ABE(0f);
	unk_0xCA4458A7A267D61B(0f);
	unk_0xFAF41D405DD88AC2(0f);
	unk_0x7FAF8FA8166834A7(1);
	unk_0x22E814CEA7509B2E(0f);
	unk_0x32F2CFA05392F66B(1);
	unk_0xA007078AA477CB5C(0);
	if (unk_0x8BEECCAAE312A5BA("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x40F160C3038ECAF5("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x58478145CAF8429C(&Global_36922))
	{
		if (unk_0x8BEECCAAE312A5BA(&Global_36922))
		{
			unk_0x40F160C3038ECAF5(&Global_36922);
		}
	}
	if (unk_0x9FA769EB6C3BCCE4(Global_36911))
	{
		if (unk_0x1CD1490177850A31(Global_36911))
		{
			unk_0x16EC2DD3A07898B9(Global_36911, 0f);
			unk_0xBE51678DF2A99288(Global_36911, 1);
		}
	}
	if (unk_0x4055CAB247B1B43C())
	{
		unk_0xA701CFE8692AB746(0);
	}
	if (bParam0)
	{
		if (unk_0x134E720A17978737() != -1 || unk_0xE5A09C695A824354() != -1)
		{
			unk_0x64418B7144C47685();
		}
		else if (unk_0x0AFBA1AD6DC1C540())
		{
			unk_0x64418B7144C47685();
		}
	}
	Global_36917 = 0f;
	StringCopy(&Global_36918, "", 16);
	StringCopy(&Global_36922, "", 64);
	StringCopy(&Global_36938, "", 16);
	func_4();
}

void func_4()
{
	Global_36910 = 0;
	Global_36911 = 0;
	Global_36912 = 0;
	Global_36913 = 30000;
	Global_36914 = 0f;
	Global_36916 = 0f;
	Global_36915 = 0f;
	Global_36917 = 0f;
	StringCopy(&Global_36918, "", 16);
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
		if (!Global_36747[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36747[iVar0 /*5*/].f_1)
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
	
	fVar0 = 0.1f;
	iVar1 = func_11(unk_0x2A5EB8B0FE590B91());
	iVar2 = func_8(unk_0x2A5EB8B0FE590B91());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
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
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36747[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36747[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36747[iVar0 /*5*/].f_1)
		{
			return Global_36747[iVar0 /*5*/];
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
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36747[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x3732B96D7A1859B4();
	fVar1 = 1f;
	iVar2 = (Global_36912 - iVar0);
	if (iVar2 <= Global_36913)
	{
		if (Global_36912 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_36913));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36721[iLocal_3 /*5*/] == 0)
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
	if (unk_0xA9A04898798AE9E6(Global_36721[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36721[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x7AE6E004B57B6658("drunk"))
	{
		unk_0x5C727A4B63D5C338("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36747[iVar0 /*5*/] = func_15();
	Global_36747[iVar0 /*5*/].f_1 = Global_36721[iParam0 /*5*/].f_1;
	Global_36747[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36721[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1624);
	unk_0x57667D0A25494543("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36719;
	Global_36719++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36747[iVar0 /*5*/] == -1)
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
	if (!Global_36721[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36721[iParam0 /*5*/].f_1 == unk_0x2A5EB8B0FE590B91())
		{
			Global_36942 = 0;
		}
	}
	Global_36721[iParam0 /*5*/] = 13;
	Global_36721[iParam0 /*5*/].f_1 = 0;
	Global_36721[iParam0 /*5*/].f_2 = 0;
	Global_36721[iParam0 /*5*/].f_3 = 0;
	Global_36721[iParam0 /*5*/].f_4 = 0;
	Global_36720 = (Global_36720 - 1);
	if (Global_36720 < 0)
	{
		Global_36720 = 0;
	}
}

void func_18()
{
	if (!Global_36828[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36828[iLocal_1 /*5*/].f_1 == 0)
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
	Global_36828[iParam0 /*5*/] = -1;
	Global_36828[iParam0 /*5*/].f_1 = -1;
	Global_36828[iParam0 /*5*/].f_2 = 6;
	Global_36828[iParam0 /*5*/].f_3 = 0;
	Global_36828[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36828[iParam0 /*5*/].f_2;
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
	if (!Global_36747[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36747[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36747[iLocal_2 /*5*/]);
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
	Global_36747[iParam0 /*5*/] = -1;
	Global_36747[iParam0 /*5*/].f_1 = 0;
	Global_36747[iParam0 /*5*/].f_2 = -1;
	Global_36747[iParam0 /*5*/].f_3 = 0;
	Global_36747[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36747[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36828[iVar0 /*5*/].f_1)
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
		if (iParam1 == Global_36828[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36828[iVar0 /*5*/])
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
	if (Global_36828[iLocal_1 /*5*/] == 1)
	{
		Global_36828[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36828[iVar0 /*5*/])
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
	unk_0xA232817B0B36F2E5();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36943 = 0;
	Global_36942 = 0;
	Global_36720 = 0;
	unk_0x0A55B81F921A97B1("drunk");
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

