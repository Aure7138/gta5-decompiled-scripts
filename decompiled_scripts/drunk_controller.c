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
	unk_0x44E747EFAA4C6724();
	if (unk_0x7547D7CF93115D6D(32))
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
	if (unk_0x17D71902CA06091B(Global_35920))
	{
		return 1;
	}
	if (unk_0x25531002BCF0D968(joaat("drunk")) > 0)
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
	iVar0 = unk_0xF976C624234A4AA8();
	if (Global_35921 > iVar0 || Global_35921 == -1)
	{
		if (unk_0xA4ADA92842355D33())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_35924 != Global_35925)
		{
			fVar3 = (Global_35925 - Global_35924);
			Global_35924 = (Global_35924 + (fVar3 * 0.1f));
			if (unk_0x75E01E8585722F89((Global_35924 - Global_35925)) < 0.01f)
			{
				Global_35924 = Global_35925;
			}
		}
		if (!unk_0xD0FDF77C380EC475())
		{
			unk_0xF1C274C08D24D634("DRUNK_SHAKE", ((Global_35924 * fVar1) * fVar2));
		}
		unk_0xF78764690DB8F559(((Global_35924 * fVar1) * fVar2));
		unk_0xB3A2E1E33B288962(((Global_35923 * fVar1) * fVar2));
		if (((Global_35923 * fVar1) * fVar2) < 1f)
		{
			unk_0x6D88DBBBECD37E5A(((Global_35923 * fVar1) * fVar2));
		}
		else
		{
			unk_0x6D88DBBBECD37E5A(1f);
		}
		if (!unk_0xCED9A2EF4ECBCD16())
		{
			unk_0x8C565956B6F9E723("DRUNK_SHAKE", (((Global_35924 * Global_35918) * fVar1) * fVar2));
		}
		unk_0x6B5EA708EBD7C0EF((((Global_35924 * Global_35918) * fVar1) * fVar2));
		unk_0x039A3D11A21B19E6(2);
		if (unk_0x17D71902CA06091B(Global_35920))
		{
			if (unk_0xFC044F5A8CA9782F(Global_35920))
			{
				unk_0xE2C04E90396EAF08(Global_35920, ((Global_35924 * fVar1) * fVar2));
			}
		}
		if (!unk_0x8FA72E132AAFA62F(&Global_35947) && !unk_0x8FA72E132AAFA62F(&Global_35931))
		{
			unk_0xD56AC40382654643(&Global_35931);
			StringCopy(&Global_35947, "", 16);
		}
		unk_0x34D2702FC9C10B64();
		if (Global_35926 > 0f)
		{
			if (fLocal_4 != Global_35926)
			{
				if (unk_0x91796810B25FDA18() != -1)
				{
				}
				else
				{
					unk_0x3D579EE31E433B6B(&Global_35927, 15f);
					fLocal_4 = Global_35926;
				}
			}
			else
			{
				if (unk_0x91796810B25FDA18() != -1 && unk_0xEF9CD83E2E2816E8() != -1)
				{
					fLocal_4 = -99f;
				}
				iVar4 = (Global_35921 - iVar0);
				if (iVar4 <= (Global_35922 / 2))
				{
					bVar5 = false;
					if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
					{
						if (unk_0x17E998AB655366FD(unk_0x507DA4994C3D8EBD()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0x507DA4994C3D8EBD()))
					{
						Global_35921 += 1000;
					}
					else if (bVar5)
					{
						Global_35921 += 1000;
					}
					else if (unk_0x91796810B25FDA18() != -1)
					{
						Global_35921 += 1000;
					}
					else
					{
						if (unk_0xEF9CD83E2E2816E8() != -1)
						{
							unk_0x47C3E4FCF4BD1E53((unk_0xBBDA792448DB5A89((Global_35922 / 2)) / 1000f));
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
	unk_0xB3A2E1E33B288962(0f);
	unk_0x6D88DBBBECD37E5A(0f);
	unk_0xF78764690DB8F559(0f);
	unk_0xB3BE5EAE7F48BADE(1);
	unk_0x6B5EA708EBD7C0EF(0f);
	unk_0xD6F8F4C71896F304(1);
	unk_0x039A3D11A21B19E6(0);
	if (unk_0xA2A45E58AC3DF6C5("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xAB5C0FE0C680BC7F("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x8FA72E132AAFA62F(&Global_35931))
	{
		if (unk_0xA2A45E58AC3DF6C5(&Global_35931))
		{
			unk_0xAB5C0FE0C680BC7F(&Global_35931);
		}
	}
	if (unk_0x17D71902CA06091B(Global_35920))
	{
		if (unk_0xFC044F5A8CA9782F(Global_35920))
		{
			unk_0xE2C04E90396EAF08(Global_35920, 0f);
			unk_0x60A59DBF922B3037(Global_35920, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xEF9CD83E2E2816E8() != -1 || unk_0x91796810B25FDA18() != -1)
		{
			unk_0x8611FA16C57B4195();
		}
		else if (unk_0xA4ADA92842355D33())
		{
			unk_0x8611FA16C57B4195();
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
	iVar1 = func_11(unk_0x507DA4994C3D8EBD());
	iVar2 = func_8(unk_0x507DA4994C3D8EBD());
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
	if (!unk_0xFD68187442384158(iParam0))
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
	if (!unk_0xFD68187442384158(iParam0))
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
	
	iVar0 = unk_0xF976C624234A4AA8();
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
	if (unk_0xE5D56342B0FF1D0D(Global_35730[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_35730[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x4C903C3B660A5023("drunk"))
	{
		unk_0x38797C3918FDD596("drunk");
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
	unk_0xDD83BEFDE8CC91AD("drunk");
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
		if (Global_35730[iParam0 /*5*/].f_1 == unk_0x507DA4994C3D8EBD())
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
	unk_0x883793591E631A3B();
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
	unk_0xD530A1AEC901B9D1("drunk");
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

