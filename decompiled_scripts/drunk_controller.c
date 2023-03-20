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
	unk_0x84027ACC1E53BA5C();
	if (unk_0x24862A9CDC8F8874(32))
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
	if (Global_36716)
	{
		return 1;
	}
	if (unk_0x844838E5D8A21336(Global_36717))
	{
		return 1;
	}
	if (unk_0xCBC8FFE55DC722B5(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36526 > 0)
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
	
	if (!Global_36716)
	{
		return;
	}
	iVar0 = unk_0x693EBB4F13506457();
	if (Global_36718 > iVar0 || Global_36718 == -1)
	{
		if (unk_0xA8D4B6BDCF6DE72B())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_36721 != Global_36722)
		{
			fVar3 = (Global_36722 - Global_36721);
			Global_36721 = (Global_36721 + (fVar3 * 0.1f));
			if (unk_0xA3C5926D6E5619AE((Global_36721 - Global_36722)) < 0.01f)
			{
				Global_36721 = Global_36722;
			}
		}
		if (!unk_0x0B1DB39CC4656E42())
		{
			unk_0x765B522B5DC2A3B6("DRUNK_SHAKE", ((Global_36721 * fVar1) * fVar2));
		}
		if ((unk_0x693EBB4F13506457() % 100) == 0)
		{
			unk_0xB24A9C603103659F(((Global_36721 * fVar1) * fVar2));
			unk_0x9B42304CF6BA754C(((Global_36720 * fVar1) * fVar2));
		}
		if (((Global_36720 * fVar1) * fVar2) < 1f)
		{
			unk_0x509885C9E540EEB1(((Global_36720 * fVar1) * fVar2));
		}
		else
		{
			unk_0x509885C9E540EEB1(1f);
		}
		if (!unk_0x6729F137F4F07F82())
		{
			unk_0x122B2006E8417964("DRUNK_SHAKE", (((Global_36721 * Global_36715) * fVar1) * fVar2));
		}
		unk_0x00F9C495069B37C5((((Global_36721 * Global_36715) * fVar1) * fVar2));
		if (unk_0x844838E5D8A21336(Global_36717))
		{
			if (unk_0x182287FAF327C182(Global_36717))
			{
				unk_0xBE191D8A04BC7DFF(Global_36717, ((Global_36721 * fVar1) * fVar2));
			}
		}
		if (!unk_0xB8A06E7E729EED0A(&Global_36744) && !unk_0xB8A06E7E729EED0A(&Global_36728))
		{
			unk_0x925AE2E6F6E41362(&Global_36728);
			StringCopy(&Global_36744, "", 16);
		}
		unk_0xF07356DE27671B56();
		if (Global_36723 > 0f)
		{
			if (fLocal_4 != Global_36723)
			{
				if (unk_0x1C3E6739D384D123() != -1)
				{
				}
				else
				{
					unk_0x5D8A256F3ACFA6D3(&Global_36724, 15f);
					fLocal_4 = Global_36723;
				}
			}
			else
			{
				if (unk_0x1C3E6739D384D123() != -1 && unk_0xE0FA5DECA3886F33() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0x63E7027E4629C463(2);
				iVar4 = (Global_36718 - iVar0);
				if (iVar4 <= (Global_36719 / 2))
				{
					bVar5 = false;
					if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
					{
						if (unk_0x8EDA3A22D5F4C0BF(unk_0xC8B93D94F8954288()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0xC8B93D94F8954288()))
					{
						Global_36718 += 1000;
					}
					else if (bVar5)
					{
						Global_36718 += 1000;
					}
					else if (unk_0x1C3E6739D384D123() != -1)
					{
						Global_36718 += 1000;
					}
					else
					{
						if (unk_0xE0FA5DECA3886F33() != -1)
						{
							unk_0x60679BF80DE63289((unk_0xBBDA792448DB5A89((Global_36719 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36723 = 0f;
						StringCopy(&Global_36724, "", 16);
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
	unk_0x9B42304CF6BA754C(0f);
	unk_0x509885C9E540EEB1(0f);
	unk_0xB24A9C603103659F(0f);
	unk_0x764018CEDFACA24C(1);
	unk_0x00F9C495069B37C5(0f);
	unk_0x2342C8BD856DDFC7(1);
	unk_0x63E7027E4629C463(0);
	if (unk_0xB5F5536784683C33("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xDB9D78E5137EE7AD("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xB8A06E7E729EED0A(&Global_36728))
	{
		if (unk_0xB5F5536784683C33(&Global_36728))
		{
			unk_0xDB9D78E5137EE7AD(&Global_36728);
		}
	}
	if (unk_0x844838E5D8A21336(Global_36717))
	{
		if (unk_0x182287FAF327C182(Global_36717))
		{
			unk_0xBE191D8A04BC7DFF(Global_36717, 0f);
			unk_0x9F8E593BD9272C2E(Global_36717, 1);
		}
	}
	if (unk_0x48F1EC063D38EB03())
	{
		unk_0xF88B48D85C78AF92(0);
	}
	if (bParam0)
	{
		if (unk_0xE0FA5DECA3886F33() != -1 || unk_0x1C3E6739D384D123() != -1)
		{
			unk_0xBB221FC3969254DE();
		}
		else if (unk_0xA8D4B6BDCF6DE72B())
		{
			unk_0xBB221FC3969254DE();
		}
	}
	Global_36723 = 0f;
	StringCopy(&Global_36724, "", 16);
	StringCopy(&Global_36728, "", 64);
	StringCopy(&Global_36744, "", 16);
	func_4();
}

void func_4()
{
	Global_36716 = 0;
	Global_36717 = 0;
	Global_36718 = 0;
	Global_36719 = 30000;
	Global_36720 = 0f;
	Global_36722 = 0f;
	Global_36721 = 0f;
	Global_36723 = 0f;
	StringCopy(&Global_36724, "", 16);
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
		if (!Global_36553[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
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
	iVar1 = func_11(unk_0xC8B93D94F8954288());
	iVar2 = func_8(unk_0xC8B93D94F8954288());
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
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36553[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36553[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
		{
			return Global_36553[iVar0 /*5*/];
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
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36553[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x693EBB4F13506457();
	fVar1 = 1f;
	iVar2 = (Global_36718 - iVar0);
	if (iVar2 <= Global_36719)
	{
		if (Global_36718 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_36719));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36527[iLocal_3 /*5*/] == 0)
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
	if (unk_0xB6900B8CB0ABBD2B(Global_36527[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36527[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0xD838CD843F6FE18B("drunk"))
	{
		unk_0xE3B4E8C914195E94("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36553[iVar0 /*5*/] = func_15();
	Global_36553[iVar0 /*5*/].f_1 = Global_36527[iParam0 /*5*/].f_1;
	Global_36553[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36527[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0x996557D48454AE40("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36525;
	Global_36525++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36553[iVar0 /*5*/] == -1)
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
	if (!Global_36527[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36527[iParam0 /*5*/].f_1 == unk_0xC8B93D94F8954288())
		{
			Global_36748 = 0;
		}
	}
	Global_36527[iParam0 /*5*/] = 13;
	Global_36527[iParam0 /*5*/].f_1 = 0;
	Global_36527[iParam0 /*5*/].f_2 = 0;
	Global_36527[iParam0 /*5*/].f_3 = 0;
	Global_36527[iParam0 /*5*/].f_4 = 0;
	Global_36526 = (Global_36526 - 1);
	if (Global_36526 < 0)
	{
		Global_36526 = 0;
	}
}

void func_18()
{
	if (!Global_36634[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36634[iLocal_1 /*5*/].f_1 == 0)
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
	Global_36634[iParam0 /*5*/] = -1;
	Global_36634[iParam0 /*5*/].f_1 = -1;
	Global_36634[iParam0 /*5*/].f_2 = 6;
	Global_36634[iParam0 /*5*/].f_3 = 0;
	Global_36634[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36634[iParam0 /*5*/].f_2;
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
	if (!Global_36553[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36553[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36553[iLocal_2 /*5*/]);
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
	Global_36553[iParam0 /*5*/] = -1;
	Global_36553[iParam0 /*5*/].f_1 = 0;
	Global_36553[iParam0 /*5*/].f_2 = -1;
	Global_36553[iParam0 /*5*/].f_3 = 0;
	Global_36553[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36553[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36634[iVar0 /*5*/].f_1)
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
		if (iParam1 == Global_36634[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36634[iVar0 /*5*/])
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
	if (Global_36634[iLocal_1 /*5*/] == 1)
	{
		Global_36634[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36634[iVar0 /*5*/])
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
	unk_0xA4E0D8FD51F2A6F7();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36749 = 0;
	Global_36748 = 0;
	Global_36526 = 0;
	unk_0x64E6498F388E05B5("drunk");
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

