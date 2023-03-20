#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	if (unk_0x2C897F101BA20806(3))
	{
		func_14();
		unk_0x82706E6C897B0FA1();
	}
	func_8();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14394.f_1 != 9)
		{
			if (!iLocal_17)
			{
				iLocal_17 = 1;
			}
			else if (Global_14376)
			{
				if (!iLocal_18)
				{
					iLocal_18 = 1;
					func_7(Global_14375, "SET_DATA_SLOT_EMPTY", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_4(Global_14375, 1);
					func_7(Global_14375, "DISPLAY_VIEW", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_3();
				}
			}
			if (func_2())
			{
				func_14();
			}
		}
		if (func_1())
		{
			func_14();
		}
	}
}

int func_1()
{
	if (((Global_14394.f_1 == 1 || Global_14394.f_1 == 3) || Global_14394.f_1 == 0) || Global_14338 == 1)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_2870 == 1 || Global_14394.f_1 < 7)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (!iLocal_19)
	{
		if (unk_0xF49761626882E968(2, 172))
		{
			iLocal_19 = 1;
			func_7(Global_14375, "SET_INPUT_EVENT", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xF49761626882E968(2, 172))
	{
		iLocal_19 = 0;
	}
	if (!iLocal_20)
	{
		if (unk_0xF49761626882E968(2, 173))
		{
			iLocal_20 = 1;
			func_7(Global_14375, "SET_INPUT_EVENT", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xF49761626882E968(2, 173))
	{
		iLocal_20 = 0;
	}
	if (!iLocal_21)
	{
		if (unk_0xF49761626882E968(2, 174))
		{
			iLocal_21 = 1;
			func_7(Global_14375, "SET_INPUT_EVENT", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xF49761626882E968(2, 174))
	{
		iLocal_21 = 0;
	}
	if (!iLocal_22)
	{
		if (unk_0xF49761626882E968(2, 175))
		{
			iLocal_22 = 1;
			func_7(Global_14375, "SET_INPUT_EVENT", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xF49761626882E968(2, 175))
	{
		iLocal_22 = 0;
	}
}

void func_4(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	
	if (Global_87534 == Global_87535)
	{
		if (!bParam1)
		{
			return;
		}
	}
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC8378A96673BCC40(iParam0))
	{
		return;
	}
	func_8();
	iVar0 = Global_87538;
	iVar1 = Global_87537;
	bVar2 = true;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	while (bVar2)
	{
		iVar4 = iVar3;
		iVar3 = Global_87539[iVar0 /*25*/][iVar1];
		if (!iVar3 == iVar4)
		{
			if (!iVar3 == 0)
			{
				switch (iVar0)
				{
					case 0:
						sVar6 = "fSu";
						break;
					
					case 1:
						sVar6 = "fMo";
						break;
					
					case 2:
						sVar6 = "fTu";
						break;
					
					case 3:
						sVar6 = "fWe";
						break;
					
					case 4:
						sVar6 = "fTh";
						break;
					
					case 5:
						sVar6 = "fFr";
						break;
					
					case 6:
						sVar6 = "fSa";
						break;
				}
				unk_0xB067107D878E9585(iParam0, "SET_DATA_SLOT_EMPTY");
				unk_0x26221D1D76579618(iVar5);
				unk_0xD3DF251F2DF3B257();
				unk_0xB067107D878E9585(iParam0, "SET_DATA_SLOT");
				unk_0x26221D1D76579618(5);
				unk_0x26221D1D76579618(iVar5);
				unk_0x26221D1D76579618(iVar1);
				unk_0x50050D925C27B388(0f);
				unk_0x50050D925C27B388(-1f);
				func_6(sVar6);
				func_6(func_5(iVar3));
				unk_0xD3DF251F2DF3B257();
				iVar5++;
			}
		}
		iVar1++;
		if (iVar1 > 23)
		{
			iVar1 = 0;
			iVar0++;
		}
		if (iVar0 > 6)
		{
			iVar0 = 0;
		}
		if (iVar0 == Global_87538 && iVar1 == Global_87537)
		{
			bVar2 = false;
		}
	}
	Global_87535 = Global_87534;
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ORG_EV_0";
			break;
		
		case 1:
			return "ORG_EV_1";
			break;
	}
	return "ORG_EV_0";
}

void func_6(char* sParam0)
{
	unk_0xEBC0B3BDAD1250BE(sParam0);
	unk_0x9F94C7B5E8C04AB3();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD3DF251F2DF3B257();
}

void func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!Global_87533)
	{
		Global_87717 = unk_0x1EFE4ED658D22AF3();
		Global_87716 = unk_0xA3730885141EEA96();
		Global_87715 = unk_0xBE59E3811BD4FDD7();
		Global_87533 = 1;
		Global_87538 = unk_0x7A49EF3953280CCA();
		Global_87537 = unk_0xBE59E3811BD4FDD7();
		func_12();
		return;
	}
	iVar0 = unk_0x1EFE4ED658D22AF3();
	iVar1 = unk_0xA3730885141EEA96();
	iVar2 = unk_0xBE59E3811BD4FDD7();
	iVar3 = Global_87717;
	iVar4 = Global_87716;
	iVar5 = Global_87715;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = func_9(iVar4, iVar3, iVar1, iVar0);
	if (iVar11 > 0)
	{
		iVar10 = 0;
		if (iVar11 > 7)
		{
			iVar8 = 0;
			iVar9 = 0;
			iVar8 = 0;
			while (iVar8 < 7)
			{
				iVar9 = 0;
				while (iVar9 < 24)
				{
					if (!Global_87539[iVar6 /*25*/][iVar7] == 0)
					{
						Global_87534++;
						Global_87536 = (Global_87536 - 1);
					}
					Global_87539[iVar6 /*25*/][iVar7] = 0;
					iVar9++;
				}
				iVar8++;
			}
		}
		else if (iVar11 > 1)
		{
			iVar10 = (iVar10 + (iVar11 - 1) * 24);
		}
		iVar10 = (iVar10 + (24 - iVar5));
		iVar10 = (iVar10 + (24 - (24 - iVar2)));
		iVar8 = 0;
		iVar7 = Global_87537;
		iVar6 = Global_87538;
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			if (iVar7 > 23)
			{
				iVar7 = 0;
				iVar6++;
			}
			if (iVar6 > 6)
			{
				iVar6 = 0;
			}
			if (!Global_87539[iVar6 /*25*/][iVar7] == 0)
			{
				Global_87534++;
				Global_87536 = (Global_87536 - 1);
			}
			Global_87539[iVar6 /*25*/][iVar7] = 0;
			iVar7++;
			iVar8++;
		}
		Global_87537 = (iVar7 - 1);
		Global_87538 = iVar6;
	}
	else
	{
		if (iVar5 > iVar2)
		{
			Global_87717 = iVar0;
			Global_87716 = iVar1;
			Global_87715 = iVar2;
			Global_87538 = unk_0x7A49EF3953280CCA();
			Global_87537 = unk_0xBE59E3811BD4FDD7();
			return;
		}
		if (iVar5 == iVar2)
		{
			return;
		}
		else
		{
			iVar10 = (iVar2 - iVar5);
			iVar8 = 0;
			iVar7 = Global_87537;
			iVar6 = Global_87538;
			iVar8 = 0;
			while (iVar8 < iVar10)
			{
				if (!Global_87539[iVar6 /*25*/][iVar7] == 0)
				{
					Global_87534++;
					Global_87536 = (Global_87536 - 1);
				}
				Global_87539[iVar6 /*25*/][iVar7] = 0;
				iVar7++;
				if (iVar7 > 23)
				{
					iVar7 = 0;
					iVar6++;
				}
				if (iVar6 > 6)
				{
					iVar6 = 0;
				}
				iVar8++;
			}
			Global_87537 = iVar7;
			Global_87538 = iVar6;
		}
	}
	if (Global_87534 > Global_87535)
	{
	}
	if ((iVar3 == iVar0 && iVar5 == iVar2) && iVar4 == iVar1)
	{
	}
	else
	{
		Global_87717 = iVar0;
		Global_87716 = iVar1;
		Global_87715 = iVar2;
	}
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	if (!iParam1 == iParam3)
	{
		if (iParam1 < iParam3)
		{
			iVar1 = (func_10(iParam1) - (func_10(iParam1) - iParam0));
			iVar2 = 0;
			if (iParam3 > iParam1 + 1)
			{
				iVar3 = (iParam3 - iParam1);
				iVar4 = iParam1 + 1;
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iVar3)
				{
					if (iVar4 > 11)
					{
						iVar4 = 0;
					}
					iVar2 = (iVar2 + func_10(iVar4));
					iVar4++;
					iVar0++;
				}
			}
			iVar5 = (func_10(iParam3) - iParam2);
			iVar6 = ((iVar1 + iVar2) + iVar5);
			return iVar6;
		}
	}
	else
	{
		if (iParam2 < iParam0)
		{
			return 0;
		}
		if (iParam2 == iParam0)
		{
			return 0;
		}
		return (iParam2 - iParam0);
	}
	return 0;
}

int func_10(int iParam0)
{
	return func_11(iParam0);
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 30;
		
		case 3:
			return 30;
		
		case 5:
			return 30;
		
		case 10:
			return 30;
		
		case 1:
			return 28;
		
		default:
	}
	return 31;
	return 0;
}

void func_12()
{
	int iVar0;
	int iVar1;
	
	Global_87537 = 0;
	Global_87538 = 0;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = 0;
		while (iVar1 < 24)
		{
			Global_87539[iVar0 /*25*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_13();
}

void func_13()
{
	Global_87537 = 0;
	Global_87538 = 0;
	Global_87715 = unk_0xBE59E3811BD4FDD7();
	Global_87716 = unk_0xA3730885141EEA96();
	Global_87717 = unk_0x1EFE4ED658D22AF3();
}

void func_14()
{
	unk_0x82706E6C897B0FA1();
}

