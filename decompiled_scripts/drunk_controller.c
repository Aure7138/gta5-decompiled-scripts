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
	unk_0x9243BAC96D64C050();
	if (unk_0xC968670BFACE42D9(32))
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
	if (Global_35919)
	{
		return 1;
	}
	if (unk_0xA7A932170592B50E(Global_35920))
	{
		return 1;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_35729 > 0)
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
	
	if (!Global_35919)
	{
		return;
	}
	iVar0 = unk_0x9CD27B0045628463();
	if (Global_35921 > iVar0 || Global_35921 == -1)
	{
		if (unk_0xD9D2CFFF49FAB35F())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_35924 != Global_35925)
		{
			fVar3 = (Global_35925 - Global_35924);
			Global_35924 = (Global_35924 + (fVar3 * 0.1f));
			if (unk_0x73D57CFFDD12C355((Global_35924 - Global_35925)) < 0.01f)
			{
				Global_35924 = Global_35925;
			}
		}
		if (!unk_0x016C090630DF1F89())
		{
			unk_0xFD55E49555E017CF("DRUNK_SHAKE", ((Global_35924 * fVar1) * fVar2));
		}
		unk_0xA87E00932DB4D85D(((Global_35924 * fVar1) * fVar2));
		unk_0x487A82C650EB7799(((Global_35923 * fVar1) * fVar2));
		if (((Global_35923 * fVar1) * fVar2) < 1f)
		{
			unk_0x0225778816FDC28C(((Global_35923 * fVar1) * fVar2));
		}
		else
		{
			unk_0x0225778816FDC28C(1f);
		}
		if (!unk_0xBBC08F6B4CB8FF0A())
		{
			unk_0xDCE214D9ED58F3CF("DRUNK_SHAKE", (((Global_35924 * Global_35918) * fVar1) * fVar2));
		}
		unk_0xC724C701C30B2FE7((((Global_35924 * Global_35918) * fVar1) * fVar2));
		unk_0x12561FCBB62D5B9C(2);
		if (unk_0xA7A932170592B50E(Global_35920))
		{
			if (unk_0x6B24BFE83A2BE47B(Global_35920))
			{
				unk_0xD93DB43B82BC0D00(Global_35920, ((Global_35924 * fVar1) * fVar2));
			}
		}
		if (!unk_0xCA042B6957743895(&Global_35947) && !unk_0xCA042B6957743895(&Global_35931))
		{
			unk_0x013A80FC08F6E4F2(&Global_35931);
			StringCopy(&Global_35947, "", 16);
		}
		unk_0xF4F2C0D4EE209E20();
		if (Global_35926 > 0f)
		{
			if (fLocal_4 != Global_35926)
			{
				if (unk_0x459FD2C8D0AB78BC() != -1)
				{
				}
				else
				{
					unk_0x3BCF567485E1971C(&Global_35927, 15f);
					fLocal_4 = Global_35926;
				}
			}
			else
			{
				if (unk_0x459FD2C8D0AB78BC() != -1 && unk_0xFDF3D97C674AFB66() != -1)
				{
					fLocal_4 = -99f;
				}
				iVar4 = (Global_35921 - iVar0);
				if (iVar4 <= (Global_35922 / 2))
				{
					bVar5 = false;
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						if (unk_0x729072355FA39EC9(unk_0xD80958FC74E988A6()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0xD80958FC74E988A6()))
					{
						Global_35921 += 1000;
					}
					else if (bVar5)
					{
						Global_35921 += 1000;
					}
					else if (unk_0x459FD2C8D0AB78BC() != -1)
					{
						Global_35921 += 1000;
					}
					else
					{
						if (unk_0xFDF3D97C674AFB66() != -1)
						{
							unk_0x1CBA05AE7BD7EE05((unk_0xBBDA792448DB5A89((Global_35922 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_35926 = 0f;
						StringCopy(&Global_35927, "", 16);
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
	unk_0x487A82C650EB7799(0f);
	unk_0x0225778816FDC28C(0f);
	unk_0xA87E00932DB4D85D(0f);
	unk_0x0EF93E9F3D08C178(true);
	unk_0xC724C701C30B2FE7(0f);
	unk_0x2238E588E588A6D7(true);
	unk_0x12561FCBB62D5B9C(0);
	if (unk_0xB65B60556E2A9225("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xDFE8422B3B94E688("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xCA042B6957743895(&Global_35931))
	{
		if (unk_0xB65B60556E2A9225(&Global_35931))
		{
			unk_0xDFE8422B3B94E688(&Global_35931);
		}
	}
	if (unk_0xA7A932170592B50E(Global_35920))
	{
		if (unk_0x6B24BFE83A2BE47B(Global_35920))
		{
			unk_0xD93DB43B82BC0D00(Global_35920, 0f);
			unk_0xBDECF64367884AC3(Global_35920, true);
		}
	}
	if (bParam0)
	{
		if (unk_0xFDF3D97C674AFB66() != -1 || unk_0x459FD2C8D0AB78BC() != -1)
		{
			unk_0x0F07E7745A236711();
		}
		else if (unk_0xD9D2CFFF49FAB35F())
		{
			unk_0x0F07E7745A236711();
		}
	}
	Global_35926 = 0f;
	StringCopy(&Global_35927, "", 16);
	StringCopy(&Global_35931, "", 64);
	StringCopy(&Global_35947, "", 16);
	func_4();
}

void func_4()
{
	Global_35919 = 0;
	Global_35920 = 0;
	Global_35921 = 0;
	Global_35922 = 30000;
	Global_35923 = 0f;
	Global_35925 = 0f;
	Global_35924 = 0f;
	Global_35926 = 0f;
	StringCopy(&Global_35927, "", 16);
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
		if (!Global_35756[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
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
	iVar1 = func_11(unk_0xD80958FC74E988A6());
	iVar2 = func_8(unk_0xD80958FC74E988A6());
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
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_35756[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35756[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
		{
			return Global_35756[iVar0 /*5*/];
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
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_35756[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x9CD27B0045628463();
	fVar1 = 1f;
	iVar2 = (Global_35921 - iVar0);
	if (iVar2 <= Global_35922)
	{
		if (Global_35921 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_35922));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_35730[iLocal_3 /*5*/] == 0)
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
	if (unk_0x5F9532F3B5CC2551(Global_35730[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_35730[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0xE6CC9F3BA0FB9EF1("drunk"))
	{
		unk_0x6EB5F71AA68F2E8E("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_35756[iVar0 /*5*/] = func_15();
	Global_35756[iVar0 /*5*/].f_1 = Global_35730[iParam0 /*5*/].f_1;
	Global_35756[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_35730[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0xC90D2DCACD56184C("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_35728;
	Global_35728++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35756[iVar0 /*5*/] == -1)
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
	if (!Global_35730[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35730[iParam0 /*5*/].f_1 == unk_0xD80958FC74E988A6())
		{
			Global_35951 = 0;
		}
	}
	Global_35730[iParam0 /*5*/] = 13;
	Global_35730[iParam0 /*5*/].f_1 = 0;
	Global_35730[iParam0 /*5*/].f_2 = 0;
	Global_35730[iParam0 /*5*/].f_3 = 0;
	Global_35730[iParam0 /*5*/].f_4 = 0;
	Global_35729 = (Global_35729 - 1);
	if (Global_35729 < 0)
	{
		Global_35729 = 0;
	}
}

void func_18()
{
	if (!Global_35837[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_35837[iLocal_1 /*5*/].f_1 == 0)
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
	Global_35837[iParam0 /*5*/] = -1;
	Global_35837[iParam0 /*5*/].f_1 = -1;
	Global_35837[iParam0 /*5*/].f_2 = 6;
	Global_35837[iParam0 /*5*/].f_3 = 0;
	Global_35837[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_35837[iParam0 /*5*/].f_2;
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
	if (!Global_35756[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_35756[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_35756[iLocal_2 /*5*/]);
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
	Global_35756[iParam0 /*5*/] = -1;
	Global_35756[iParam0 /*5*/].f_1 = 0;
	Global_35756[iParam0 /*5*/].f_2 = -1;
	Global_35756[iParam0 /*5*/].f_3 = 0;
	Global_35756[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35756[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_35837[iVar0 /*5*/].f_1)
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
		if (iParam1 == Global_35837[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35837[iVar0 /*5*/])
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
	if (Global_35837[iLocal_1 /*5*/] == 1)
	{
		Global_35837[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35837[iVar0 /*5*/])
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
	unk_0x1090044AD1DA76FA();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_35952 = 0;
	Global_35951 = 0;
	Global_35729 = 0;
	unk_0x9DC711BC69C548DF("drunk");
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

