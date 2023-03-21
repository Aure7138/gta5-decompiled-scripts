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
	unk_0x11103F6657466FF8();
	if (unk_0xB9B05E900D325C36(32))
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
	if (unk_0x2A3EA4C0BCED85F2(Global_36911))
	{
		return 1;
	}
	if (unk_0x7832F791572D5809(joaat("drunk")) > 0)
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
	iVar1 = unk_0x31CD6E9F83C10233();
	if (Global_36912 > iVar1 || Global_36912 == -1)
	{
		if (unk_0x003E46CBEF6CE07A())
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
			if (unk_0x229F35E7CDDBF757((Global_36915 - Global_36916)) < 0.01f)
			{
				Global_36915 = Global_36916;
			}
		}
		if (!unk_0x1E7F1F4AE00E3B1E())
		{
			unk_0x682258C2F31DC643("DRUNK_SHAKE", ((Global_36915 * fVar3) * fVar5));
		}
		if ((unk_0x31CD6E9F83C10233() % 100) == 0)
		{
			if (fLocal_14 == -1f)
			{
				fLocal_14 = fVar3;
			}
			unk_0x2A233CBF997DD54F(((Global_36915 * fVar3) * fVar5));
			unk_0x7C9E1CEB1C7F3E89(((Global_36914 * fVar3) * fVar5));
			fLocal_14 = fVar3;
		}
		if (((Global_36914 * fVar3) * fVar5) < 1f)
		{
			unk_0x241ABB6B8FF3B41F(((Global_36914 * fVar3) * fVar5));
		}
		else
		{
			unk_0x241ABB6B8FF3B41F(1f);
		}
		if (!unk_0x261D0CA1693EA57E())
		{
			unk_0x3468367A1D7398EC("DRUNK_SHAKE", (((Global_36915 * Global_36909) * fVar3) * fVar5));
		}
		unk_0x1CC0D0519A2E78DD((((Global_36915 * Global_36909) * fVar3) * fVar5));
		if (unk_0x2A3EA4C0BCED85F2(Global_36911))
		{
			if (unk_0xD989ED05365E20B6(Global_36911))
			{
				unk_0xF75BE610C7DE19DF(Global_36911, ((Global_36915 * fVar3) * fVar5));
			}
		}
		if (!unk_0x0BD3CCFB6C6CFA91(&Global_36938) && !unk_0x0BD3CCFB6C6CFA91(&Global_36922))
		{
			unk_0xFD69BDF108B32E5B(&Global_36922);
			StringCopy(&Global_36938, "", 16);
		}
		unk_0x695333ABC0398A65();
		if (Global_36917 > 0f)
		{
			if (fLocal_4 != Global_36917)
			{
				if (unk_0x70B8D8D4703C2B3A() != -1)
				{
				}
				else
				{
					unk_0xF394F114B0523BA7(&Global_36918, 15f);
					fLocal_4 = Global_36917;
				}
			}
			else
			{
				if (unk_0x70B8D8D4703C2B3A() != -1 && unk_0xDA0FC7C07F6DCAB2() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0xC562884BD3F65E84(2);
				iVar7 = (Global_36912 - iVar1);
				if (iVar7 <= (Global_36913 / 2))
				{
					bVar8 = false;
					if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
					{
						if (unk_0xEA82085448074C90(unk_0x0031992CA618A445()))
						{
							bVar8 = true;
						}
					}
					if (func_5(unk_0x0031992CA618A445()))
					{
						Global_36912 += 1000;
					}
					else if (bVar8)
					{
						Global_36912 += 1000;
					}
					else if (unk_0x70B8D8D4703C2B3A() != -1)
					{
						Global_36912 += 1000;
					}
					else
					{
						if (unk_0xDA0FC7C07F6DCAB2() != -1)
						{
							unk_0x7036CCA9652881B9((unk_0xBBDA792448DB5A89((Global_36913 / 2)) / 1000f));
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
	unk_0x7C9E1CEB1C7F3E89(0f);
	unk_0x241ABB6B8FF3B41F(0f);
	unk_0x2A233CBF997DD54F(0f);
	unk_0x57D15496DA4634FF(1);
	unk_0x1CC0D0519A2E78DD(0f);
	unk_0x8BD087C9492CA478(1);
	unk_0xC562884BD3F65E84(0);
	if (unk_0x3A7B47D96E536F61("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xB3E27A9E412BBDF8("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x0BD3CCFB6C6CFA91(&Global_36922))
	{
		if (unk_0x3A7B47D96E536F61(&Global_36922))
		{
			unk_0xB3E27A9E412BBDF8(&Global_36922);
		}
	}
	if (unk_0x2A3EA4C0BCED85F2(Global_36911))
	{
		if (unk_0xD989ED05365E20B6(Global_36911))
		{
			unk_0xF75BE610C7DE19DF(Global_36911, 0f);
			unk_0xACEAE8DF401C6CEB(Global_36911, 1);
		}
	}
	if (unk_0x7E5769CFBF0C8B2D())
	{
		unk_0x44C27ECAEEFE7A91(0);
	}
	if (bParam0)
	{
		if (unk_0xDA0FC7C07F6DCAB2() != -1 || unk_0x70B8D8D4703C2B3A() != -1)
		{
			unk_0x283E1197D815CA4A();
		}
		else if (unk_0x003E46CBEF6CE07A())
		{
			unk_0x283E1197D815CA4A();
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
	iVar1 = func_11(unk_0x0031992CA618A445());
	iVar2 = func_8(unk_0x0031992CA618A445());
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
	if (!unk_0x76B3C79DE564AFC6(iParam0))
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
	if (!unk_0x76B3C79DE564AFC6(iParam0))
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
	
	iVar0 = unk_0x31CD6E9F83C10233();
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
	if (unk_0x7A6C051038031EFA(Global_36721[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36721[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0xBE2C96D0FF6F8282("drunk"))
	{
		unk_0xC397DDF7C577BD55("drunk");
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
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0xADA0A4C226503297("drunk");
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
		if (Global_36721[iParam0 /*5*/].f_1 == unk_0x0031992CA618A445())
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
	unk_0xBEE2834559A8897A();
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
	unk_0xAC6C3A31619F7D8D("drunk");
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

