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
	unk_0xEE998050210A7287();
	if (unk_0x76BF814AB8D4CAB8(32))
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
	if (Global_36957)
	{
		return 1;
	}
	if (unk_0x5400DC5FAEBF30F0(Global_36958))
	{
		return 1;
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36767 > 0)
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
	
	if (!Global_36957)
	{
		return;
	}
	iVar1 = unk_0x5AFB8ED811F05E4D();
	if (Global_36959 > iVar1 || Global_36959 == -1)
	{
		if (unk_0x51CFE20A158947F4())
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
		if (Global_36962 != Global_36963)
		{
			fVar6 = (Global_36963 - Global_36962);
			Global_36962 = (Global_36962 + (fVar6 * 0.1f));
			if (unk_0x36E1A96E1D63ED91((Global_36962 - Global_36963)) < 0.01f)
			{
				Global_36962 = Global_36963;
			}
		}
		if (!unk_0x1CF36F2B95DC9A55())
		{
			unk_0x628F57B455120BC4("DRUNK_SHAKE", ((Global_36962 * fVar3) * fVar5));
		}
		if ((unk_0x5AFB8ED811F05E4D() % 100) == 0)
		{
			if (Global_36959 == -1)
			{
			}
			else
			{
				if (fLocal_14 == -1f)
				{
					fLocal_14 = fVar3;
				}
				unk_0xB3EC3EC462B2CB79(((Global_36962 * fVar3) * fVar5));
				unk_0xA1FB3417C3449864(((Global_36961 * fVar3) * fVar5));
				fLocal_14 = fVar3;
			}
		}
		if (((Global_36961 * fVar3) * fVar5) < 1f)
		{
			unk_0xDD4424863F033940(((Global_36961 * fVar3) * fVar5));
		}
		else
		{
			unk_0xDD4424863F033940(1f);
		}
		if (!unk_0x5B5E9E25452D7459())
		{
			unk_0x919E5B3AAD71E52E("DRUNK_SHAKE", (((Global_36962 * Global_36956) * fVar3) * fVar5));
		}
		unk_0xDF53E98A4157D5D6((((Global_36962 * Global_36956) * fVar3) * fVar5));
		if (unk_0x5400DC5FAEBF30F0(Global_36958))
		{
			if (unk_0x76DD0F1D9A93AB6C(Global_36958))
			{
				unk_0x0DF6CD63C0404942(Global_36958, ((Global_36962 * fVar3) * fVar5));
			}
		}
		if (!unk_0xFAFFA408239A026B(&Global_36985) && !unk_0xFAFFA408239A026B(&Global_36969))
		{
			unk_0x64D773F3BE6DC50A(&Global_36969);
			StringCopy(&Global_36985, "", 16);
		}
		unk_0x427B0066B4980110();
		if (Global_36964 > 0f)
		{
			if (fLocal_4 != Global_36964)
			{
				if (unk_0x1CC829D6263C76A6() != -1)
				{
				}
				else
				{
					unk_0xA55B5F9A803ECCDD(&Global_36965, 15f);
					fLocal_4 = Global_36964;
				}
			}
			else
			{
				if (unk_0x1CC829D6263C76A6() != -1 && unk_0xEBB1B7EB9C7EA9B9() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0x8C8FFDC0DAC02F17(2);
				iVar7 = (Global_36959 - iVar1);
				if (iVar7 <= (Global_36960 / 2))
				{
					bVar8 = false;
					if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
					{
						if (unk_0x536C7C563A70D9F4(unk_0x18F7BE9ACB7D08F4()))
						{
							bVar8 = true;
						}
					}
					if (func_5(unk_0x18F7BE9ACB7D08F4()))
					{
						Global_36959 += 1000;
					}
					else if (bVar8)
					{
						Global_36959 += 1000;
					}
					else if (unk_0x1CC829D6263C76A6() != -1)
					{
						Global_36959 += 1000;
					}
					else
					{
						if (unk_0xEBB1B7EB9C7EA9B9() != -1)
						{
							unk_0x02F5E1499A6179DE((unk_0xBBDA792448DB5A89((Global_36960 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36964 = 0f;
						StringCopy(&Global_36965, "", 16);
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
	unk_0xA1FB3417C3449864(0f);
	unk_0xDD4424863F033940(0f);
	unk_0xB3EC3EC462B2CB79(0f);
	unk_0x116F780D5A758BE3(1);
	unk_0xDF53E98A4157D5D6(0f);
	unk_0x9D8275FB70AE1DBD(1);
	unk_0x8C8FFDC0DAC02F17(0);
	if (unk_0x36CC410474001FBC("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xA11D9B06B99FE786("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xFAFFA408239A026B(&Global_36969))
	{
		if (unk_0x36CC410474001FBC(&Global_36969))
		{
			unk_0xA11D9B06B99FE786(&Global_36969);
		}
	}
	if (unk_0x5400DC5FAEBF30F0(Global_36958))
	{
		if (unk_0x76DD0F1D9A93AB6C(Global_36958))
		{
			unk_0x0DF6CD63C0404942(Global_36958, 0f);
			unk_0xA41F88BA20F1376F(Global_36958, 1);
		}
	}
	if (unk_0xC8C71EAB5D37D499())
	{
		unk_0xAF3C6787189C4D52(0);
	}
	if (bParam0)
	{
		if (unk_0xEBB1B7EB9C7EA9B9() != -1 || unk_0x1CC829D6263C76A6() != -1)
		{
			unk_0x8D15A5FB83757D1A();
		}
		else if (unk_0x51CFE20A158947F4())
		{
			unk_0x8D15A5FB83757D1A();
		}
	}
	Global_36964 = 0f;
	StringCopy(&Global_36965, "", 16);
	StringCopy(&Global_36969, "", 64);
	StringCopy(&Global_36985, "", 16);
	func_4();
}

void func_4()
{
	Global_36957 = 0;
	Global_36958 = 0;
	Global_36959 = 0;
	Global_36960 = 30000;
	Global_36961 = 0f;
	Global_36963 = 0f;
	Global_36962 = 0f;
	Global_36964 = 0f;
	StringCopy(&Global_36965, "", 16);
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
		if (!Global_36794[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36794[iVar0 /*5*/].f_1)
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
	iVar1 = func_11(unk_0x18F7BE9ACB7D08F4());
	iVar2 = func_8(unk_0x18F7BE9ACB7D08F4());
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
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36794[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36794[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36794[iVar0 /*5*/].f_1)
		{
			return Global_36794[iVar0 /*5*/];
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
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36794[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x5AFB8ED811F05E4D();
	fVar1 = 1f;
	iVar2 = (Global_36959 - iVar0);
	if (iVar2 <= Global_36960)
	{
		if (Global_36959 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_36960));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36768[iLocal_3 /*5*/] == 0)
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
	if (unk_0x74C2FE037DFC8B4A(Global_36768[iParam0 /*5*/].f_1, 0))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36768[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0xC040FCA5F6E73B3E("drunk"))
	{
		unk_0xC8A5933869E73673("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36794[iVar0 /*5*/] = func_15();
	Global_36794[iVar0 /*5*/].f_1 = Global_36768[iParam0 /*5*/].f_1;
	Global_36794[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36768[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0x2130D1396EE39C8E("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36766;
	Global_36766++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36794[iVar0 /*5*/] == -1)
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
	if (!Global_36768[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36768[iParam0 /*5*/].f_1 == unk_0x18F7BE9ACB7D08F4())
		{
			Global_36989 = 0;
		}
	}
	Global_36768[iParam0 /*5*/] = 13;
	Global_36768[iParam0 /*5*/].f_1 = 0;
	Global_36768[iParam0 /*5*/].f_2 = 0;
	Global_36768[iParam0 /*5*/].f_3 = 0;
	Global_36768[iParam0 /*5*/].f_4 = 0;
	Global_36767 = (Global_36767 - 1);
	if (Global_36767 < 0)
	{
		Global_36767 = 0;
	}
}

void func_18()
{
	if (!Global_36875[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36875[iLocal_1 /*5*/].f_1 == 0)
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
	Global_36875[iParam0 /*5*/] = -1;
	Global_36875[iParam0 /*5*/].f_1 = -1;
	Global_36875[iParam0 /*5*/].f_2 = 6;
	Global_36875[iParam0 /*5*/].f_3 = 0;
	Global_36875[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36875[iParam0 /*5*/].f_2;
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
	if (!Global_36794[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36794[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36794[iLocal_2 /*5*/]);
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
	Global_36794[iParam0 /*5*/] = -1;
	Global_36794[iParam0 /*5*/].f_1 = 0;
	Global_36794[iParam0 /*5*/].f_2 = -1;
	Global_36794[iParam0 /*5*/].f_3 = 0;
	Global_36794[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36794[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36875[iVar0 /*5*/].f_1)
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
		if (iParam1 == Global_36875[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36875[iVar0 /*5*/])
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
	if (Global_36875[iLocal_1 /*5*/] == 1)
	{
		Global_36875[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36875[iVar0 /*5*/])
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
	unk_0x810C5D6462DD69E6();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36990 = 0;
	Global_36989 = 0;
	Global_36767 = 0;
	unk_0x983D86B7F4F283B8("drunk");
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

